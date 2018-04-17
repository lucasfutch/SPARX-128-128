----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:35:37 04/17/2018 
-- Design Name: 
-- Module Name:    branch_rounds_inv - Behavioral 
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

entity branch_rounds_inv is
    Port ( pt : in  STD_LOGIC_VECTOR (127 downto 0);
           key_0 : in  STD_LOGIC_VECTOR (127 downto 0);
           key_1 : in  STD_LOGIC_VECTOR (127 downto 0);
           key_2 : in  STD_LOGIC_VECTOR (127 downto 0);
           key_3 : in  STD_LOGIC_VECTOR (127 downto 0);
           branches_out : out  STD_LOGIC_VECTOR (127 downto 0));
end branch_rounds_inv;

architecture Behavioral of branch_rounds_inv is

component branch_round_inv is
    Port ( pt_A : in  STD_LOGIC_VECTOR (15 downto 0);
           pt_B : in  STD_LOGIC_VECTOR (15 downto 0);
           key : in  STD_LOGIC_VECTOR (127 downto 0);
           pt_A_out : out  STD_LOGIC_VECTOR (15 downto 0);
           pt_B_out : out  STD_LOGIC_VECTOR (15 downto 0));
end component branch_round_inv;

component L_inv_function is
    Port ( state_in : in  STD_LOGIC_VECTOR (127 downto 0);
           state_out : out  STD_LOGIC_VECTOR (127 downto 0));
end component L_inv_function;

signal round_0_x0 : STD_LOGIC_VECTOR(15 downto 0);
signal round_0_x1 : STD_LOGIC_VECTOR(15 downto 0);
signal round_1_x0 : STD_LOGIC_VECTOR(15 downto 0);
signal round_1_x1 : STD_LOGIC_VECTOR(15 downto 0);
signal round_2_x0 : STD_LOGIC_VECTOR(15 downto 0);
signal round_2_x1 : STD_LOGIC_VECTOR(15 downto 0);
signal round_3_x0 : STD_LOGIC_VECTOR(15 downto 0);
signal round_3_x1 : STD_LOGIC_VECTOR(15 downto 0);

signal L_out : STD_LOGIC_VECTOR(127 downto 0);

begin
	L : L_inv_function PORT MAP(pt, L_out);

	round_0 : branch_round_inv PORT MAP(L_out(127 downto 112), L_out(111 downto 96), key_0, round_0_x0, round_0_x1);
	round_1 : branch_round_inv PORT MAP(L_out(95 downto 80), L_out(79 downto 64), key_1, round_1_x0, round_1_x1);
	round_2 : branch_round_inv PORT MAP(L_out(63 downto 48), L_out(47 downto 32), key_2, round_2_x0, round_2_x1);
	round_3 : branch_round_inv PORT MAP(L_out(31 downto 16), L_out(15 downto 0), key_3, round_3_x0, round_3_x1);

	branches_out <= round_0_x0 & round_0_x1 & round_1_x0 & round_1_x1 & round_2_x0 & round_2_x1 & round_3_x0 & round_3_x1;

end Behavioral;

