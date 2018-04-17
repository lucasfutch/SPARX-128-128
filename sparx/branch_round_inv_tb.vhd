--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:15:53 04/17/2018
-- Design Name:   
-- Module Name:   C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/branch_round_inv_tb.vhd
-- Project Name:  sparx
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: branch_round_inv
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
 
ENTITY branch_round_inv_tb IS
END branch_round_inv_tb;
 
ARCHITECTURE behavior OF branch_round_inv_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT branch_round_inv
    PORT(
         pt_A : IN  std_logic_vector(15 downto 0);
         pt_B : IN  std_logic_vector(15 downto 0);
         key : IN  std_logic_vector(127 downto 0);
         pt_A_out : OUT  std_logic_vector(15 downto 0);
         pt_B_out : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal pt_A : std_logic_vector(15 downto 0) := (others => '0');
   signal pt_B : std_logic_vector(15 downto 0) := (others => '0');
   signal key : std_logic_vector(127 downto 0) := (others => '0');

 	--Outputs
   signal pt_A_out : std_logic_vector(15 downto 0);
   signal pt_B_out : std_logic_vector(15 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
--   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: branch_round_inv PORT MAP (
          pt_A => pt_A,
          pt_B => pt_B,
          key => key,
          pt_A_out => pt_A_out,
          pt_B_out => pt_B_out
        );

   -- Clock process definitions
--   <clock>_process :process
--   begin
--		<clock> <= '0';
--		wait for <clock>_period/2;
--		<clock> <= '1';
--		wait for <clock>_period/2;
--   end process;
 

   -- Stimulus process
   stim_proc: process
	variable pt_A_out_exp : std_logic_vector(15 downto 0);
	variable pt_B_out_exp : std_logic_vector(15 downto 0);
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		
		pt_A <= x"316d";
		pt_B <= x"0ffb";
		key <= x"5b5724ff1f2b716bcbcd8be4a05dac5c";
		
		wait for 100 ns;	
		
		pt_A_out_exp := pt_A_out;
		assert pt_A_out_exp = x"96b4"
		report "Unexpected Result for ptA #1" 
		severity error;
		
		pt_B_out_exp := pt_B_out;
		assert pt_B_out_exp = x"c77e"
		report "Unexpected Result for ptB #1" 
		severity error;



		-- hold reset state for 100 ns.
      wait for 100 ns;	
		
		pt_A <= x"30f1";
		pt_B <= x"def6";
		key <= x"c7d8b562d3b54049f2e0b1b4277b08e9";
		
		wait for 100 ns;	
		
		pt_A_out_exp := pt_A_out;
		assert pt_A_out_exp = x"cb29"
		report "Unexpected Result for ptA #2" 
		severity error;
		
		pt_B_out_exp := pt_B_out;
		assert pt_B_out_exp = x"3a5b"
		report "Unexpected Result for ptB #2" 
		severity error;

      -- insert stimulus here 

      wait;
   end process;

END;
