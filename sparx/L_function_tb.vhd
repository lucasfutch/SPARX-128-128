--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:29:57 03/06/2018
-- Design Name:   
-- Module Name:   C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/L_function_tb.vhd
-- Project Name:  sparx
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: L_function
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
 
ENTITY L_function_tb IS
END L_function_tb;
 
ARCHITECTURE behavior OF L_function_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT L_function
    PORT(
         state : IN  std_logic_vector(127 downto 0);
         state_out : OUT  std_logic_vector(127 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal state : std_logic_vector(127 downto 0) := (others => '0');

 	--Outputs
   signal state_out : std_logic_vector(127 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: L_function PORT MAP (
          state => state,
          state_out => state_out
        );

   -- Clock process definitions
   --<clock>_process :process
   --begin
	--	<clock> <= '0';
	--	wait for <clock>_period/2;
	--	<clock> <= '1';
	--	wait for <clock>_period/2;
   --end process;
 

   -- Stimulus process
   stim_proc: process
	variable state_out_exp : std_logic_vector(127 downto 0);
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
	
		state <= x"6dda28bed98b6493a6fa6dfe2a1ca2ff";
		
		wait for 100 ns;
		
		-- error checking
		
		state_out_exp := state_out;
		assert state_out_exp = x"038939b83b3eba946dda28bed98b6493"
		report "Wrong state_out"
		severity error;

      wait;
   end process;

END;
