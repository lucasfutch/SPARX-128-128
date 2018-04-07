----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:17:11 03/31/2018 
-- Design Name: 
-- Module Name:    key_perm - Behavioral 
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

entity key_perm is
    Port ( key_in : in  STD_LOGIC_VECTOR (127 downto 0);
			  c : in STD_LOGIC_VECTOR (4 downto 0);
           key_out : out  STD_LOGIC_VECTOR (127 downto 0));
end key_perm;

architecture Behavioral of key_perm is

component A_function is
    Port ( left_in : in  STD_LOGIC_VECTOR (15 downto 0);
           right_in : in  STD_LOGIC_VECTOR (15 downto 0);
           left_out : out  STD_LOGIC_VECTOR (15 downto 0);
           right_out : out  STD_LOGIC_VECTOR (15 downto 0));
end component A_function;

signal A_out0 : STD_LOGIC_VECTOR(15 downto 0);
signal A_out1 : STD_LOGIC_VECTOR(15 downto 0);
signal A_out4 : STD_LOGIC_VECTOR(15 downto 0);
signal A_out5 : STD_LOGIC_VECTOR(15 downto 0); 

begin

	A_1 : A_function PORT MAP (key_in(127 downto 112), key_in(111 downto 96), A_out0, A_out1);
	A_2 : A_function PORT MAP (key_in(63 downto 48), key_in(47 downto 32), A_out4, A_out5);

	key_out <= (
		STD_LOGIC_VECTOR(unsigned(A_out4) + unsigned(key_in(31 downto 16))) &   
		STD_LOGIC_VECTOR(unsigned(A_out5) + unsigned(key_in(15 downto 0)) + unsigned(c)) &
		A_out0 &
		A_out1 &
		STD_LOGIC_VECTOR(unsigned(A_out0) + unsigned(key_in(95 downto 80))) &
		STD_LOGIC_VECTOR(unsigned(A_out1) + unsigned(key_in(78 downto 64))) &
		A_out4 &
		A_out5
	);

end Behavioral;

