----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:46:53 04/15/2018 
-- Design Name: 
-- Module Name:    A_inv_function - Behavioral 
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

entity A_inv_function is
    Port ( left_in : in  STD_LOGIC_VECTOR (15 downto 0);
           right_in : in  STD_LOGIC_VECTOR (15 downto 0);
           left_out : out  STD_LOGIC_VECTOR (15 downto 0);
           right_out : out  STD_LOGIC_VECTOR (15 downto 0));
end A_inv_function;

architecture Behavioral of A_inv_function is

signal left_mid : STD_LOGIC_VECTOR(15 downto 0);
signal right_mid_0 : STD_LOGIC_VECTOR(15 downto 0);
signal right_mid_1 : STD_LOGIC_VECTOR(15 downto 0);

begin

right_mid_0 <= left_in XOR right_in;
right_mid_1 <= right_mid_0(1 downto 0) & right_mid_0(15 downto 2);
left_mid <= STD_LOGIC_VECTOR(unsigned(left_in) - unsigned(right_mid_1));

a_process: process(right_mid_1, left_mid)
begin
	right_out <= right_mid_1;
	left_out <= left_mid(8 downto 0) & left_mid (15 downto 9);
end process;
end Behavioral;
