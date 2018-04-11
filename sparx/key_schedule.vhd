----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:59:10 04/01/2018 
-- Design Name: 
-- Module Name:    key_schedule - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity key_schedule is
    Port ( key_master : in  STD_LOGIC_VECTOR (127 downto 0);
			  round : in STD_LOGIC_VECTOR(2 downto 0);
			  clk : in STD_LOGIC;
			  en : in STD_LOGIC;
           key_0 : out  STD_LOGIC_VECTOR (127 downto 0);
           key_1 : out  STD_LOGIC_VECTOR (127 downto 0);
           key_2 : out  STD_LOGIC_VECTOR (127 downto 0);
           key_3 : out  STD_LOGIC_VECTOR (127 downto 0);
           keys_ready : out  STD_LOGIC
           );
end key_schedule;

architecture Behavioral of key_schedule is

component key_perm is
    Port ( key_in : in  STD_LOGIC_VECTOR (127 downto 0);
			  c : in STD_LOGIC_VECTOR (4 downto 0);
           key_out : out  STD_LOGIC_VECTOR (127 downto 0));
end component key_perm;

signal key_0_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_1_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_2_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_3_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_3_out_register : STD_LOGIC_VECTOR(127 downto 0);

signal key_1_in : STD_LOGIC_VECTOR(127 downto 0);
signal key_2_in : STD_LOGIC_VECTOR(127 downto 0);
signal key_3_in : STD_LOGIC_VECTOR(127 downto 0);

signal key_round : STD_LOGIC_VECTOR(1 downto 0) := "00";
signal c_round : STD_LOGIC_VECTOR(4 downto 0) := "00000";

signal add_value : integer range 0 to 4 := 0;

begin
new_key_0 : key_perm PORT MAP(key_master, c_round, key_0_out);
new_key_1 : key_perm PORT MAP(key_1_in, c_round, key_1_out);
new_key_2 : key_perm PORT MAP(key_2_in, c_round, key_2_out);
new_key_3 : key_perm PORT MAP(key_3_in, c_round, key_3_out);

-- we have to make sure that the c_round being given to each
-- key perm is static and does not change until key_round ends
-- otherwise the value changes every key_round and affects the 
-- entire output since we are not saving
		
key_schedule_process: process(clk)
begin
	if rising_edge(clk) then
		if en = '1' then
			key_1_in <= key_0_out;
			key_2_in <= key_1_out;
			key_3_in <= key_2_out;
			key_3_out_register <= key_3_out;
			
-- assigned output signals on different rounds
--			if key_round = "00" then
--				key_0 <= key_1_in;
--				key_round <= STD_LOGIC_VECTOR(unsigned(key_round) + 1);
--				keys_ready <= '0';
--			elsif key_round = "01" then
--				key_1 <= key_2_in;
--				key_round <= STD_LOGIC_VECTOR(unsigned(key_round) + 1);
--				keys_ready <= '0';
--			elsif key_round = "10" then
--				key_2 <= key_3_in;
--				key_round <= STD_LOGIC_VECTOR(unsigned(key_round) + 1);
--				keys_ready <= '0';
--			elsif key_round = "11" then
--				key_3 <= key_3_out_register;
--				key_round <= "00";
--				keys_ready <= '1';

-- assigned intermediate signals on different rounds
--			if key_round = "00" then
--				key_1_in <= key_0_out;
--				key_round <= STD_LOGIC_VECTOR(unsigned(key_round) + 1);
--				keys_ready <= '0';
--			elsif key_round = "01" then
--				key_2_in <= key_1_out;
--				key_round <= STD_LOGIC_VECTOR(unsigned(key_round) + 1);
--				keys_ready <= '0';
--			elsif key_round = "10" then
--				key_3_in <= key_2_out;
--				key_round <= STD_LOGIC_VECTOR(unsigned(key_round) + 1);
--				keys_ready <= '0';
--			elsif key_round = "11" then
--				key_3_out_register <= key_3_out;
--				key_round <= "00";
--				keys_ready <= '1';

-- normal operation and everything managed at same time
-- probably the wrong method?
			if key_round = "11" then
					key_round <= "00";
					keys_ready <= '1';
			else
				key_round <= STD_LOGIC_VECTOR(unsigned(key_round) + 1);
				keys_ready <= '0';
			end if;
		end if;
	end if;
		
end process;

with key_round select add_value <=
	1 when "00",
	2 when "01",
	3 when "10",
	4 when "11",
	0 when others;

key_schedule_round: process(add_value)
begin
	c_round <= STD_LOGIC_VECTOR(unsigned(round & "00") + unsigned(key_round) + 1);
	--c_round <= STD_LOGIC_VECTOR(unsigned(round & "00") + add_value);

end process;

key_0 <= key_1_in;
key_1 <= key_2_in;
key_2 <= key_3_in;
key_3 <= key_3_out_register;

end Behavioral;

