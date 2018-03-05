--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:19:29 03/05/2018
-- Design Name:   
-- Module Name:   C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/step_round_tb.vhd
-- Project Name:  sparx
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: step_round
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
 
ENTITY step_round_tb IS
END step_round_tb;
 
ARCHITECTURE behavior OF step_round_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT step_round
    PORT(
         x0_in : IN  std_logic_vector(15 downto 0);
         x1_in : IN  std_logic_vector(15 downto 0);
         key0 : IN  std_logic_vector(15 downto 0);
         key1 : IN  std_logic_vector(15 downto 0);
         x0_out : OUT  std_logic_vector(15 downto 0);
         x1_out : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal x0_in : std_logic_vector(15 downto 0) := (others => '0');
   signal x1_in : std_logic_vector(15 downto 0) := (others => '0');
   signal key0 : std_logic_vector(15 downto 0) := (others => '0');
   signal key1 : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal x0_out : std_logic_vector(15 downto 0);
   signal x1_out : std_logic_vector(15 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: step_round PORT MAP (
          x0_in => x0_in,
          x1_in => x1_in,
          key0 => key0,
          key1 => key1,
          x0_out => x0_out,
          x1_out => x1_out
        );

   -- Clock process definitions
   --<clock>_process :process
   --begin
	-- <clock> <= '0';
	--	wait for <clock>_period/2;
	--	<clock> <= '1';
	--	wait for <clock>_period/2;
   --end process;
 

   -- Stimulus process
   stim_proc: process
	variable x0_exp : std_logic_vector(15 downto 0);
	variable x1_exp : std_logic_vector(15 downto 0);
   begin		
		
      wait for 100 ns;	
		
		-- values and expected results obtained 
		-- from running c code
		x0_in <= x"e812";
		x1_in <= x"3531";
		key0 <= x"b3d2";
		key1 <= x"4494";
		
		wait for 100 ns;	
		
		-- error checking
		x0_exp := x0_out;
		assert x0_exp = x"f25c"
		report "Unexpected Result for x0" 
		severity error;
		
		x1_exp := x1_out;
		assert x1_exp = x"34c9"
		report "Unexpected Result for x1"
		severity error;
		
		

      wait;
   end process;

END;
