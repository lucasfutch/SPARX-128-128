----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:14:37 04/15/2018 
-- Design Name: 
-- Module Name:    L_inv_function - Behavioral 
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

entity L_inv_function is
    Port ( state_in : in  STD_LOGIC_VECTOR (127 downto 0);
           state_out : out  STD_LOGIC_VECTOR (127 downto 0));
end L_inv_function;

architecture Behavioral of L_inv_function is

signal tmp : STD_LOGIC_VECTOR(15 downto 0);
signal tmp_rot : STD_LOGIC_VECTOR(15 downto 0);
signal x4_tmp : STD_LOGIC_VECTOR(15 downto 0);
signal x5_tmp : STD_LOGIC_VECTOR(15 downto 0);
signal x6_tmp : STD_LOGIC_VECTOR(15 downto 0);
signal x7_tmp : STD_LOGIC_VECTOR(15 downto 0);

begin

tmp <= state_in(63 downto 48) XOR state_in(47 downto 32) XOR 
		 state_in(31 downto 16) XOR state_in(15 downto 0);
tmp_rot <= tmp(7 downto 0) & tmp(15 downto 8);

x4_tmp <= state_in(127 downto 112) XOR state_in(31 downto 16) XOR tmp_rot;
x5_tmp <= state_in(111 downto 96) XOR state_in(47 downto 32) XOR tmp_rot;
x6_tmp <= state_in(95 downto 80) XOR state_in(63 downto 48) XOR tmp_rot;
x7_tmp <= state_in(79 downto 64) XOR state_in(15 downto 0) XOR tmp_rot;

state_out <= state_in(63 downto 48) & state_in(47 downto 32) 
				 & state_in(31 downto 16) & state_in(15 downto 0) 
				 & x4_tmp & x5_tmp & x6_tmp & x7_tmp;
end Behavioral;

