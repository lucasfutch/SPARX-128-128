----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:54:29 04/01/2018 
-- Design Name: 
-- Module Name:    sparx_module - Behavioral 
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

entity sparx_module is
    Port ( input_text : in  STD_LOGIC_VECTOR (127 downto 0);
           master_key : in  STD_LOGIC_VECTOR (127 downto 0);
           clk : in  STD_LOGIC;
           sel : in  STD_LOGIC;
			  reset : in STD_LOGIC;
           output_text : out  STD_LOGIC_VECTOR (127 downto 0));
end sparx_module;

architecture Behavioral of sparx_module is

component encrypt is
    Port ( pt : in  STD_LOGIC_VECTOR (127 downto 0);
           key_master : in STD_LOGIC_VECTOR(127 downto 0);
			  clk : in STD_LOGIC;
			  en : in STD_LOGIC;
           ct : out  STD_LOGIC_VECTOR (127 downto 0));
end component encrypt;

component decrypt is
    Port ( ct : in  STD_LOGIC_VECTOR (127 downto 0);
           key_master : in  STD_LOGIC_VECTOR (127 downto 0);
           clk : in  STD_LOGIC;
           en : in  STD_LOGIC;
           pt : out  STD_LOGIC_VECTOR (127 downto 0));
end component decrypt;

component key_schedule is
    Port ( key_master : in  STD_LOGIC_VECTOR (127 downto 0);
			  round : in STD_LOGIC_VECTOR(3 downto 0);
			  clk : in STD_LOGIC;
			  en : in STD_LOGIC;
           key_0 : out  STD_LOGIC_VECTOR (127 downto 0);
           key_1 : out  STD_LOGIC_VECTOR (127 downto 0);
           key_2 : out  STD_LOGIC_VECTOR (127 downto 0);
           key_3 : out  STD_LOGIC_VECTOR (127 downto 0)
           --keys_ready : out  STD_LOGIC
           );
end component key_schedule;

component branch_rounds is
    Port ( pt : in  STD_LOGIC_VECTOR (127 downto 0);
           key_0 : in  STD_LOGIC_VECTOR (127 downto 0);
           key_1 : in  STD_LOGIC_VECTOR (127 downto 0);
           key_2 : in  STD_LOGIC_VECTOR (127 downto 0);
           key_3 : in  STD_LOGIC_VECTOR (127 downto 0);
           branches_out : out  STD_LOGIC_VECTOR (127 downto 0));
end component;


---module signals begin-------------
signal encryption_en : STD_LOGIC := '0';
signal decryption_en : STD_LOGIC := '0';
signal text_state_enc : STD_LOGIC_VECTOR(127 downto 0);
signal text_state_dec : STD_LOGIC_VECTOR(127 downto 0);

---module signals end---------------


---encryption signals begin---------

signal branch_out : STD_LOGIC_VECTOR(127 downto 0);

signal key_0_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_1_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_2_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_3_out : STD_LOGIC_VECTOR(127 downto 0);

signal text_state : STD_LOGIC_VECTOR(127 downto 0);
signal text_state_1 : STD_LOGIC_VECTOR(127 downto 0);

signal round : STD_LOGIC_VECTOR(3 downto 0) := "0000";

signal key_state : STD_LOGIC_VECTOR(127 downto 0);
signal keys_done : STD_LOGIC := '0';

signal my_counter : STD_LOGIC_VECTOR(1 downto 0) := "00";


---encryption signals end-----------

begin

--encrypt_module : encrypt PORT MAP (input_text, master_key, clk, encryption_en, text_state_enc);
--decrypt_module : decrypt PORT MAP (input_text, master_key, clk, decryption_en, text_state_dec);
key_schedule_0 : key_schedule PORT MAP
	(key_state, round, clk, encryption_en, key_0_out, key_1_out, key_2_out, key_3_out);
	
branch : branch_rounds PORT MAP
	(text_state, key_state, key_0_out, key_1_out, key_2_out, branch_out);




sparx_module_process_select: process(clk, reset, sel)
begin

	if reset = '1' then
		encryption_en <= '0';
		decryption_en <= '0';
	else
		if sel = '0' then
			encryption_en <= '1';
			decryption_en <= '0';
		elsif sel = '1' then
			encryption_en <= '0';
			decryption_en <= '1';
		else
			encryption_en <= '0';
			decryption_en <= '0';
		end if;
	end if;
end process sparx_module_process_select;



encryption_process_round_count: process(clk)
begin

	if rising_edge(clk) then
		if encryption_en = '1' then
			my_counter <= STD_LOGIC_VECTOR(unsigned(my_counter) + 1);
		
			if my_counter = "11" then	
				text_state_1 <= branch_out;
				
				round <= STD_LOGIC_VECTOR(unsigned(round) + 1); -- increase round by one						
				my_counter <= "00";
			end if;
		end if;
	end if;
	
end process encryption_process_round_count;

with round select text_state <=
	input_text when "0000",
	text_state_1 when others;
	
with round select key_state <= 
	master_key when "0000",
	key_3_out when others;
	
with round select output_text <= 
	text_state XOR key_3_out when "1000",
	text_state when others;



end Behavioral;

