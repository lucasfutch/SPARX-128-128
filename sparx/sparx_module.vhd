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
--use IEEE.NUMERIC_STD.ALL;

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

signal encryption_en : STD_LOGIC;
signal decryption_en : STD_LOGIC;

begin

encrypt_module : encrypt PORT MAP (input_text, master_key, clk, encryption_en, output_text);
decrypt_module : decrypt PORT MAP (input_text, master_key, clk, decryption_en, output_text);

sparx_module_process_select: process(clk)
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



end Behavioral;

