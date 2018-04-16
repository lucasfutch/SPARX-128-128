--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:02:25 04/16/2018
-- Design Name:   
-- Module Name:   C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/L_inv_function_tb.vhd
-- Project Name:  sparx
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: L_inv_function
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
 
ENTITY L_inv_function_tb IS
END L_inv_function_tb;
 
ARCHITECTURE behavior OF L_inv_function_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT L_inv_function
    PORT(
         state_in : IN  std_logic_vector(127 downto 0);
         state_out : OUT  std_logic_vector(127 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal state_in : std_logic_vector(127 downto 0) := (others => '0');

 	--Outputs
   signal state_out : std_logic_vector(127 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
--   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: L_inv_function PORT MAP (
          state_in => state_in,
          state_out => state_out
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
	variable state_out_exp : std_logic_vector(127 downto 0);
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

		state_in <= x"19fc6e389444d872316d0ffb30f1def6";
		
		wait for 10 ns;
		
		state_out_exp := state_out;
		assert state_out_exp = x"316d0ffb30f1def6b8ddf01334f99754"
		report "Unexpected Result #1 for state_out" 
		severity error;
		
		-- hold reset state for 100 ns.
      wait for 100 ns;	

		state_in <= x"96b4c77ecb293a5b4f809389e8123531";
		
		wait for 10 ns;
		
		state_out_exp := state_out;
		assert state_out_exp = x"4f809389e812353154a77ef6aea8256b"
		report "Unexpected Result #2 for state_out" 
		severity error;
		
		-- hold reset state for 100 ns.
      wait for 100 ns;	

		state_in <= x"35baefe317a132f8a5f5cd20ecca07ae";
		
		wait for 10 ns;
		
		state_out_exp := state_out;
		assert state_out_exp = x"a5f5cd20ecca07ae68f3934003d784d5"
		report "Unexpected Result #3 for state_out" 
		severity error;

      wait;
   end process;

END;
