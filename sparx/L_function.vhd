----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:16:31 03/06/2018 
-- Design Name: 
-- Module Name:    L_function - Behavioral 
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

entity L_function is
    Port ( state : in  STD_LOGIC_VECTOR (127 downto 0);
           state_out : out  STD_LOGIC_VECTOR(127 downto 0));
end L_function;

architecture Behavioral of L_function is

signal tmp : STD_LOGIC_VECTOR(15 downto 0);
signal tmp_rot : STD_LOGIC_VECTOR(15 downto 0);
signal x4_tmp : STD_LOGIC_VECTOR(15 downto 0);
signal x5_tmp : STD_LOGIC_VECTOR(15 downto 0);
signal x6_tmp : STD_LOGIC_VECTOR(15 downto 0);
signal x7_tmp : STD_LOGIC_VECTOR(15 downto 0);

begin

tmp <= state(127 downto 112) XOR state (111 downto 96) XOR state(95 downto 80) XOR state(79 downto 64);

L_process_left_rotate: process(tmp)
begin
	tmp_rot <= tmp(7 downto 0) & tmp(15 downto 8);
end process;

L_process_xor: process(tmp_rot)
begin
	x4_tmp <= state(63 downto 48) XOR state(95 downto 80) XOR tmp_rot;
	x5_tmp <= state(47 downto 32) XOR state(111 downto 96) XOR tmp_rot;
	x6_tmp <= state(31 downto 16) XOR state(127 downto 112) XOR tmp_rot;
	x7_tmp <= state(15 downto 0) XOR state(79 downto 64) XOR tmp_rot;
end process;

state_out <= x4_tmp & x5_tmp & x6_tmp & x7_tmp & state(127 downto 112) & state(111 downto 96) & state(95 downto 80) & state(79 downto 64);

end Behavioral;

