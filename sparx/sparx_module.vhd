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
signal scheduler_en : STD_LOGIC := '0';
signal text_state_enc : STD_LOGIC_VECTOR(127 downto 0);
signal text_state_dec : STD_LOGIC_VECTOR(127 downto 0);
signal output_text_enc : STD_LOGIC_VECTOR(127 downto 0);
signal output_text_dec : STD_LOGIC_VECTOR(127 downto 0);

signal branch_key_0 : STD_LOGIC_VECTOR(127 downto 0);
signal branch_key_1 : STD_LOGIC_VECTOR(127 downto 0);
signal branch_key_2 : STD_LOGIC_VECTOR(127 downto 0);
signal branch_key_3 : STD_LOGIC_VECTOR(127 downto 0);

---module signals end---------------


---encryption signals begin---------

signal branch_out : STD_LOGIC_VECTOR(127 downto 0);

signal key_0_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_1_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_2_out : STD_LOGIC_VECTOR(127 downto 0);
signal key_3_out : STD_LOGIC_VECTOR(127 downto 0);

signal text_state : STD_LOGIC_VECTOR(127 downto 0);
signal text_state_1 : STD_LOGIC_VECTOR(127 downto 0);
signal text_state_2 : STD_LOGIC_VECTOR(127 downto 0);

signal output_text_1 : STD_LOGIC_VECTOR(127 downto 0);
signal output_text_2 : STD_LOGIC_VECTOR(127 downto 0);

signal round : STD_LOGIC_VECTOR(3 downto 0) := "0000";

signal key_state : STD_LOGIC_VECTOR(127 downto 0);
signal keys_done : STD_LOGIC := '0';

signal my_counter : STD_LOGIC_VECTOR(1 downto 0) := "00";


---encryption signals end-----------





---decryption signals begin---------
signal key_0_in : STD_LOGIC_VECTOR(127 downto 0);
signal key_1_in : STD_LOGIC_VECTOR(127 downto 0);
signal key_2_in : STD_LOGIC_VECTOR(127 downto 0);
signal key_3_in : STD_LOGIC_VECTOR(127 downto 0);

-- key storage
type ram_type is array (0 to 32) of STD_LOGIC_VECTOR(127 downto 0);
signal ram : ram_type;

signal read_address : STD_LOGIC_VECTOR(5 downto 0) := "011100"; -- start at 31
signal address : STD_LOGIC_VECTOR(5 downto 0) := "000000";

signal key_write : STD_LOGIC_VECTOR(127 downto 0);

signal key32 : STD_LOGIC_VECTOR(127 downto 0);

signal getting_keys : STD_LOGIC := '1';
signal begin_save : STD_LOGIC := '0';

---decryption signals end-----------

begin

key_schedule_0 : key_schedule PORT MAP
	(key_state, round, clk, not reset, key_0_out, key_1_out, key_2_out, key_3_out);
	
branch : branch_rounds PORT MAP
	(text_state, branch_key_0, branch_key_1, branch_key_2, branch_key_3, branch_out);


sparx_module_process_select: process(clk, reset, sel)
begin

	if reset = '1' then
		encryption_en <= '0';
		decryption_en <= '0';
		--getting_keys <= '1';
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
		
		--------------
		elsif decryption_en = '1' then
			
			my_counter <= STD_LOGIC_VECTOR(unsigned(my_counter) + 1);
			output_text_dec <= text_state;
			
			-- wait a counter to begin increasing address
			if begin_save = '1' then
				address <= STD_LOGIC_VECTOR(unsigned(address) + 1);
				
				if address = "100000" then
					key32 <= key_write;
					begin_save <= '0';
				end if;
			end if;
				
			-- get all keys and save to RAM first
			if getting_keys = '1' then
				begin_save <= '1';
			
				if my_counter = "00" then
					key_write <= key_state;
				elsif my_counter = "01" then
					key_write <= key_0_out;
				elsif my_counter = "10" then
					key_write <= key_1_out;
				elsif my_counter = "11" then
					
					key_write <= key_2_out;
					round <= STD_LOGIC_VECTOR(unsigned(round) + 1);	
					my_counter <= "00";
				end if;
						
						
			-- keys are all obtained so start decrypting
			else
				--begin_save <= '0';
			
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
					
					if read_address = "000000" then
						read_address <= "011100";
					end if;
					
				end if;
			end if;
			
			-- reset rounds after 8 times (keys are all saved)
			
			if round = "1000" then
				getting_keys <= '0';
			elsif round = "1001" then
				round <= "0000";
				address <= "000000";
			end if;	
			
			
		--------------
		else
			my_counter <= "00";
			round <= "0000";
		end if;
	end if;
	
end process encryption_process_round_count;


decryption_process_key_storage: process(clk, getting_keys) is
begin
    if rising_edge(clk) then
			if getting_keys = '1' then
			  ram(to_integer(unsigned(address))) <= key_write;
			end if;
	 end if;

end process decryption_process_key_storage;



with round select text_state_enc <=
	input_text when "0000",
	text_state_1 when others;
	
with round select text_state_dec <=
	input_text XOR key32 when "1000",
	text_state_1 when others;
	
with round select key_state <= 
	master_key when "0000",
	key_3_out when others;
	
with round select output_text_enc <= 
	text_state XOR key_3_out when "1000",
	text_state when others;
	

	
	
with encryption_en select text_state <= 
	text_state_enc when '1',
	text_state_dec when others;
	
with encryption_en select output_text <=
	output_text_enc when '1',
	output_text_dec when others;




with encryption_en select branch_key_0 <=
	key_state when '1',
	key_0_in when others;
	
with encryption_en select branch_key_1 <=
	key_0_out when '1',
	key_1_in when others;
	
with encryption_en select branch_key_2 <=
	key_1_out when '1',
	key_2_in when others;
	
with encryption_en select branch_key_3 <=
	key_2_out when '1',
	key_3_in when others;



end Behavioral;

