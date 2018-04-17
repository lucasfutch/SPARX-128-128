----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:01:03 04/17/2018 
-- Design Name: 
-- Module Name:    step_round_inv - Behavioral 
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

entity step_round_inv is
    Port ( x0_in : in  STD_LOGIC_VECTOR (15 downto 0);
           x1_in : in  STD_LOGIC_VECTOR (15 downto 0);
           key0 : in  STD_LOGIC_VECTOR (15 downto 0);
           key1 : in  STD_LOGIC_VECTOR (15 downto 0);
           x0_out : out  STD_LOGIC_VECTOR (15 downto 0);
           x1_out : out  STD_LOGIC_VECTOR (15 downto 0));
end step_round_inv;

architecture Behavioral of step_round_inv is

component A_inv_function is
    Port ( left_in : in  STD_LOGIC_VECTOR (15 downto 0);
           right_in : in  STD_LOGIC_VECTOR (15 downto 0);
           left_out : out  STD_LOGIC_VECTOR (15 downto 0);
           right_out : out  STD_LOGIC_VECTOR (15 downto 0));
end component A_inv_function;

signal x0_mid : STD_LOGIC_VECTOR(15 downto 0);
signal x1_mid : STD_LOGIC_VECTOR(15 downto 0);
signal x0_afterA : STD_LOGIC_VECTOR(15 downto 0);
signal x1_afterA : STD_LOGIC_VECTOR(15 downto 0);

begin

A_inv : A_inv_function PORT MAP(x0_in, x1_in, x0_afterA, x1_afterA);

step_round_inv_process: process(x0_in, x1_in, key0, key1, x0_afterA, x1_afterA)
begin
	x0_out <= x0_afterA XOR key0;
	x1_out <= x1_afterA XOR key1;
end process;



end Behavioral;

