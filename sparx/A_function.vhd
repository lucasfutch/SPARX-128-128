----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:07:30 03/05/2018 
-- Design Name: 
-- Module Name:    A_function - Behavioral 
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

entity A_function is
    Port ( left_in : in  STD_LOGIC_VECTOR (15 downto 0);
           right_in : in  STD_LOGIC_VECTOR (15 downto 0);
           left_out : out  STD_LOGIC_VECTOR (15 downto 0);
           right_out : out  STD_LOGIC_VECTOR (15 downto 0));
end A_function;

architecture Behavioral of A_function is

signal left_mid : STD_LOGIC_VECTOR(15 downto 0);

begin
	
	--left_mid <= STD_LOGIC_VECTOR(rotate_left(unsigned(left_in), 9) + unsigned(right_in)); 
	left_mid <= STD_LOGIC_VECTOR(unsigned(left_in(6 downto 0) & left_in(15 downto 7)) + unsigned(right_in));
	left_out <= left_mid;
	--right_out <= STD_LOGIC_VECTOR(rotate_left(unsigned(right_in), 2)) XOR left_mid;
	right_out <= (right_in(13 downto 0) & right_in(15 downto 14)) XOR left_mid;
end Behavioral;

