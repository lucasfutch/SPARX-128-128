----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:44:49 03/31/2018 
-- Design Name: 
-- Module Name:    encrypt - Behavioral 
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

entity encrypt is
    Port ( pt : in  STD_LOGIC_VECTOR (127 downto 0);
           key_master : in STD_LOGIC_VECTOR(127 downto 0);
			  clk : in STD_LOGIC;
			  en : in STD_LOGIC;
           ct : out  STD_LOGIC_VECTOR (127 downto 0));
end encrypt;

architecture Behavioral of encrypt is

component branch_rounds is
    Port ( pt : in  STD_LOGIC_VECTOR (127 downto 0);
           key_0 : in  STD_LOGIC_VECTOR (127 downto 0);
           key_1 : in  STD_LOGIC_VECTOR (127 downto 0);
           key_2 : in  STD_LOGIC_VECTOR (127 downto 0);
           key_3 : in  STD_LOGIC_VECTOR (127 downto 0);
           branches_out : out  STD_LOGIC_VECTOR (127 downto 0));
end component;

component key_schedule is
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
end component key_schedule;

signal branch_out : STD_LOGIC_VECTOR(127 downto 0);

signal key_0_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_1_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_2_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_3_out : STD_LOGIC_VECTOR(127 downto 0);

signal key_0_in : STD_LOGIC_VECTOR(127 downto 0);
signal key_1_in : STD_LOGIC_VECTOR(127 downto 0);
signal key_2_in : STD_LOGIC_VECTOR(127 downto 0);
signal key_3_in : STD_LOGIC_VECTOR(127 downto 0);

signal text_state : STD_LOGIC_VECTOR(127 downto 0);-- := x"00000000000000000000000000000000";
signal round : STD_LOGIC_VECTOR(2 downto 0) := "000";

signal key_state : STD_LOGIC_VECTOR(127 downto 0);
signal keys_done : STD_LOGIC := '0';

signal my_counter : STD_LOGIC_VECTOR(1 downto 0) := "00";

signal started : STD_LOGIC := '0';

begin

key_schedule_0 : key_schedule PORT MAP(key_state, round, clk, en, key_0_out, key_1_out, key_2_out, key_3_out, keys_done);
branch : branch_rounds PORT MAP(text_state, key_0_in, key_1_in, key_2_in, key_3_in, branch_out);


encryption_process_round_count: process(clk)
begin

	if rising_edge(clk) then
		if en = '1' then
			my_counter <= STD_LOGIC_VECTOR(unsigned(my_counter) + 1);
			
			key_1_in <= key_1_out;
			key_2_in <= key_2_out;
			key_3_in <= key_3_out;
			
			if my_counter = "11" then	
				round <= STD_LOGIC_VECTOR(unsigned(round) + 1); -- increase round by one						
				my_counter <= "00";
			end if;
		end if;
	end if;
	
end process;

with round select text_state <=
	pt when "000",
	branch_out when others;
	
with round select key_state <= 
	key_master when "000",
	key_3_out when others;
	
with round select key_0_in <=
	key_master when "000",
	key_0_out when others;

with round select ct <= 
	text_state XOR key_3_out when "111",
	text_state when others;

end Behavioral;

