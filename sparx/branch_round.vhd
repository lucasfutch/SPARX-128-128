----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:04:28 03/30/2018 
-- Design Name: 
-- Module Name:    branch_round - Behavioral 
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

entity branch_round is
    Port ( pt_A : in  STD_LOGIC_VECTOR (15 downto 0);
			  pt_B : in STD_LOGIC_VECTOR (15 downto 0);
           key : in  STD_LOGIC_VECTOR (127 downto 0);
           pt_A_out : out  STD_LOGIC_VECTOR (15 downto 0);
			  pt_B_out : out  STD_LOGIC_VECTOR (15 downto 0));
end branch_round;



architecture Behavioral of branch_round is

component step_round is
    Port ( x0_in : in  STD_LOGIC_VECTOR (15 downto 0);
           x1_in : in  STD_LOGIC_VECTOR (15 downto 0);
           key0 : in  STD_LOGIC_VECTOR (15 downto 0);
           key1 : in  STD_LOGIC_VECTOR (15 downto 0);
           x0_out : out  STD_LOGIC_VECTOR (15 downto 0);
           x1_out : out  STD_LOGIC_VECTOR (15 downto 0));
end component step_round;

signal step_0_x0 : STD_LOGIC_VECTOR(15 downto 0);
signal step_0_x1 : STD_LOGIC_VECTOR(15 downto 0);
signal step_1_x0 : STD_LOGIC_VECTOR(15 downto 0);
signal step_1_x1 : STD_LOGIC_VECTOR(15 downto 0);
signal step_2_x0 : STD_LOGIC_VECTOR(15 downto 0);
signal step_2_x1 : STD_LOGIC_VECTOR(15 downto 0);
signal step_3_x0 : STD_LOGIC_VECTOR(15 downto 0);
signal step_3_x1 : STD_LOGIC_VECTOR(15 downto 0);

begin

	step_0 : step_round PORT MAP( pt_A, pt_B, key(127 downto 112), key(111 downto 96), step_0_x0, step_0_x1 );
	step_1 : step_round PORT MAP( step_0_x0, step_0_x1, key(95 downto 80), 	key(79 downto 64),  step_1_x0, step_1_x1 );
	step_2 : step_round PORT MAP( step_1_x0, step_1_x1, key(63 downto 48), 	key(47 downto 32),  step_2_x0, step_2_x1 );
	step_3 : step_round PORT MAP( step_2_x0, step_2_x1, key(31 downto 16), 	key(15 downto 0),   step_3_x0, step_3_x1 );

	pt_A_out <= step_3_x0;
	pt_B_out <= step_3_x1;
end Behavioral;

