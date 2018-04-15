--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:57:39 04/15/2018
-- Design Name:   
-- Module Name:   C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/A_inv_function_tb.vhd
-- Project Name:  sparx
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: A_inv_function
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
 
ENTITY A_inv_function_tb IS
END A_inv_function_tb;
 
ARCHITECTURE behavior OF A_inv_function_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT A_inv_function
    PORT(
         left_in : IN  std_logic_vector(15 downto 0);
         right_in : IN  std_logic_vector(15 downto 0);
         left_out : OUT  std_logic_vector(15 downto 0);
         right_out : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal left_in : std_logic_vector(15 downto 0) := (others => '0');
   signal right_in : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal left_out : std_logic_vector(15 downto 0);
   signal right_out : std_logic_vector(15 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
--   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: A_inv_function PORT MAP (
          left_in => left_in,
          right_in => right_in,
          left_out => left_out,
          right_out => right_out
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
	variable left_out_exp : std_logic_vector(15 downto 0);
	variable right_out_exp : std_logic_vector(15 downto 0);
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		
		left_in <= x"316d";
		right_in <= x"0ffb";

		wait for 10 ns;
		
		left_out_exp := left_out;
		assert left_out_exp = x"e450"
		report "Unexpected Result for left_out" 
		severity error;

		right_out_exp := right_out;
		assert right_out_exp = x"8fa5"
		report "Unexpected Result for right_out" 
		severity error;  
		
		
		
		
		wait for 100 ns;	
		
		left_in <= x"440d";
		right_in <= x"23f9";

		wait for 10 ns;
		
		left_out_exp := left_out;
		assert left_out_exp = x"0815"
		report "Unexpected Result for left_out" 
		severity error;

		right_out_exp := right_out;
		assert right_out_exp = x"19fd"
		report "Unexpected Result for right_out" 
		severity error;  
		
		
		
		
		wait for 100 ns;	
		
		left_in <= x"c3d8";
		right_in <= x"9219";

		wait for 10 ns;
		
		left_out_exp := left_out;
		assert left_out_exp = x"b437"
		report "Unexpected Result for left_out" 
		severity error;

		right_out_exp := right_out;
		assert right_out_exp = x"5470"
		report "Unexpected Result for right_out" 
		severity error;  

      wait;
   end process;

END;
