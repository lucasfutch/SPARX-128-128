--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:25:34 03/30/2018
-- Design Name:   
-- Module Name:   C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/branch_round_tb.vhd
-- Project Name:  sparx
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: branch_round
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY branch_round_tb IS
END branch_round_tb;
 
ARCHITECTURE behavior OF branch_round_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT branch_round
    PORT(
         pt_A : IN  std_logic_vector(15 downto 0);
         pt_B : IN  std_logic_vector(15 downto 0);
         key : IN  std_logic_vector(127 downto 0);
         pt_A_out : OUT  std_logic_vector(15 downto 0);
			pt_B_out : OUT std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal pt_A : std_logic_vector(15 downto 0) := (others => '0');
   signal pt_B : std_logic_vector(15 downto 0) := (others => '0');
   signal key : std_logic_vector(127 downto 0) := (others => '0');

 	--Outputs
	signal pt_A_out : std_logic_vector(15 downto 0);
	signal pt_B_out : std_logic_vector(15 downto 0);

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: branch_round PORT MAP (
          pt_A => pt_A,
          pt_B => pt_B,
          key => key,
          pt_A_out => pt_A_out,
			 pt_B_out => pt_B_out
        );


   -- Stimulus process
   stim_proc: process
	variable pt_A_out_exp : std_logic_vector(15 downto 0);
	variable pt_B_out_exp : std_logic_vector(15 downto 0);
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		
		pt_A <= x"0123";
		pt_B <= x"4567";
		key <= x"00112233445566778899aabbccddeeff";
		
		wait for 100 ns;	
		
		pt_A_out_exp := pt_A_out;
		assert pt_A_out_exp = x"6dda"
		report "Unexpected Result for ptA" 
		severity error;
		
		pt_B_out_exp := pt_B_out;
		assert pt_B_out_exp = x"28be"
		report "Unexpected Result for ptB" 
		severity error;
		
	
		



      wait;
   end process;

END;
