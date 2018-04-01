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
           key_0 : out  STD_LOGIC_VECTOR (127 downto 0);
           key_1 : out  STD_LOGIC_VECTOR (127 downto 0);
           key_2 : out  STD_LOGIC_VECTOR (127 downto 0);
           key_3 : out  STD_LOGIC_VECTOR (127 downto 0);
           keys_ready : out  STD_LOGIC
           );
end component key_schedule;

signal branch_0_out : STD_LOGIC_VECTOR(127 downto 0);

signal key_0_s : STD_LOGIC_VECTOR(127 downto 0);
signal key_1_s : STD_LOGIC_VECTOR(127 downto 0);
signal key_2_s : STD_LOGIC_VECTOR(127 downto 0);
signal key_3_s : STD_LOGIC_VECTOR(127 downto 0);

signal text_state : STD_LOGIC_VECTOR(127 downto 0);
signal round : STD_LOGIC_VECTOR(2 downto 0) := "000";

signal key_state : STD_LOGIC_VECTOR(127 downto 0);
signal keys_done :STD_LOGIC;

begin

branch_0 : branch_rounds PORT MAP(text_state, key_0_s, key_1_s, key_2_s, key_3_s, branch_0_out);
key_schedule_0 : key_schedule PORT MAP(key_state, round, clk, key_0_s, key_1_s, key_2_s, key_3_s, keys_done);

encryption_process:
process(clk)
begin

	if rising_edge(clk) then
	
		if keys_done = '1' then 									-- round keys done
			round <= STD_LOGIC_VECTOR(unsigned(round) + 1); -- increase round by one
											
			if round = "111" then									-- reset round counter
				round <= "000";
			
			elsif round = "000" then				-- first round gets original values
				text_state <= pt;
				key_state <= key_master;
			
			else 													 -- next rounds get outputs
				text_state <= branch_0_out;
				key_state <= key_3_s;
			
				if round = "111" then						-- last round has an xor for ct
					ct <= text_state xor key_0_s;		
				else
					ct <= text_state;
				end if;	
			end if;
		end if;
	end if;
	
	
			
end process;
end Behavioral;

