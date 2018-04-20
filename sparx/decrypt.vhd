----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:00:38 04/17/2018 
-- Design Name: 
-- Module Name:    decrypt - Behavioral 
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

entity decrypt is
    Port ( ct : in  STD_LOGIC_VECTOR (127 downto 0);
           key_master : in  STD_LOGIC_VECTOR (127 downto 0);
           clk : in  STD_LOGIC;
           en : in  STD_LOGIC;
           pt : out  STD_LOGIC_VECTOR (127 downto 0));
end decrypt;

architecture Behavioral of decrypt is

component branch_rounds_inv is
    Port ( pt : in  STD_LOGIC_VECTOR (127 downto 0);
           key_0 : in  STD_LOGIC_VECTOR (127 downto 0);
           key_1 : in  STD_LOGIC_VECTOR (127 downto 0);
           key_2 : in  STD_LOGIC_VECTOR (127 downto 0);
           key_3 : in  STD_LOGIC_VECTOR (127 downto 0);
           branches_out : out  STD_LOGIC_VECTOR (127 downto 0));
end component branch_rounds_inv;

component key_schedule is
    Port ( key_master : in  STD_LOGIC_VECTOR (127 downto 0);
			  round : in STD_LOGIC_VECTOR(3 downto 0);
			  clk : in STD_LOGIC;
			  en : in STD_LOGIC;
           key_0 : out  STD_LOGIC_VECTOR (127 downto 0);
           key_1 : out  STD_LOGIC_VECTOR (127 downto 0);
           key_2 : out  STD_LOGIC_VECTOR (127 downto 0);
           key_3 : out  STD_LOGIC_VECTOR (127 downto 0)
           );
end component key_schedule;

-- counters for 4 keys and for 8 branch rounds
signal my_counter : STD_LOGIC_VECTOR(1 downto 0) := "00";
signal round : STD_LOGIC_VECTOR(3 downto 0) := "0000";


-- text manipulation
signal branch_out : STD_LOGIC_VECTOR(127 downto 0);

signal text_state : STD_LOGIC_VECTOR(127 downto 0);
signal text_state_1 : STD_LOGIC_VECTOR(127 downto 0);


-- key manipulation
signal key_state : STD_LOGIC_VECTOR(127 downto 0);

signal key_0_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_1_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_2_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_3_out : STD_LOGIC_VECTOR(127 downto 0);

signal key_0_in : STD_LOGIC_VECTOR(127 downto 0);
signal key_1_in : STD_LOGIC_VECTOR(127 downto 0);
signal key_2_in : STD_LOGIC_VECTOR(127 downto 0);
signal key_3_in : STD_LOGIC_VECTOR(127 downto 0);


-- key storage
type ram_type is array (0 to 32) of STD_LOGIC_VECTOR(127 downto 0);
signal ram : ram_type;

signal read_address : STD_LOGIC_VECTOR(5 downto 0) := "011100"; -- start at 31
signal address : STD_LOGIC_VECTOR(5 downto 0) := "000000"; -- start at -3

signal key_write : STD_LOGIC_VECTOR(127 downto 0);
signal key_read : STD_LOGIC_VECTOR(127 downto 0);

signal getting_keys : STD_LOGIC := '1';

begin

key_schedule_0 : key_schedule PORT MAP
	(key_state, round, clk, en, key_0_out, key_1_out, key_2_out, key_3_out);
	
branch : branch_rounds_inv PORT MAP
	(text_state, key_0_in, key_1_in, key_2_in, key_3_in, branch_out);


decryption_process_key_storage: process(clk, key_write) is
begin
    if rising_edge(clk) then
		if getting_keys = '1' then
        ram(to_integer(unsigned(address))) <= key_write;
      end if;
    end if;

end process decryption_process_key_storage;



decryption_process_round_count: process(clk) is
begin

	if rising_edge(clk) then
		if en = '1' then
			
			my_counter <= STD_LOGIC_VECTOR(unsigned(my_counter) + 1);
			address <= STD_LOGIC_VECTOR(unsigned(address) + 1);

			pt <= text_state;
			
			-- get all keys and save to RAM first
			if getting_keys = '1' then
			
				if my_counter = "00" then
					key_write <= key_0_out;
				elsif my_counter = "00" then
					key_write <= key_1_out;
				elsif my_counter = "00" then
					key_write <= key_2_out;
				elsif my_counter = "00" then
					key_write <= key_3_out;
					round <= STD_LOGIC_VECTOR(unsigned(round) + 1);	
					my_counter <= "00";
				end if;
						
						
			-- keys are all obtained so start decrypting
			else
				key_0_in <= ram(to_integer(unsigned(read_address)));
				key_1_in <= ram(to_integer(unsigned(read_address) + 1));
				key_2_in <= ram(to_integer(unsigned(read_address) + 2));
				key_3_in <= ram(to_integer(unsigned(read_address) + 3));
				
				-- use four keys in order each round
				if my_counter = "11" then	
					text_state_1 <= branch_out;
					round <= STD_LOGIC_VECTOR(unsigned(round) + 1); 				
					my_counter <= "00";
					read_address <= STD_LOGIC_VECTOR(unsigned(read_address) - 4);
				end if;
			end if;
			
			-- reset rounds after 8 times (keys are all saved)
			if round = "1000" then
				round <= "0000";
				getting_keys <= '0';
				address <= "000000";
			end if;
				
							
		end if;
	end if;
	
end process decryption_process_round_count;




with round select key_state <= 
	key_master when "0000",
	key_3_out when others;
	
with round select text_state <=
	ct when "1000",
	text_state_1 when others;
	


end Behavioral;

