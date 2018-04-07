--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:42:53 03/05/2018
-- Design Name:   
-- Module Name:   C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/A_function_tb.vhd
-- Project Name:  sparx
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: A_function
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
 
ENTITY A_function_tb IS
END A_function_tb;
 
ARCHITECTURE behavior OF A_function_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT A_function
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
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: A_function PORT MAP (
          left_in => left_in,
          right_in => right_in,
          left_out => left_out,
          right_out => right_out
        );


   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
      left_in <= x"0132";
		right_in <= x"6754";
		-- cb56 and 5607
		
		wait for 100 ns;	
		left_in <= x"8f03";
		right_in <= x"3070";
		-- 378e and f64e
		
		wait for 100 ns;	
		left_in <= x"bf17";
		right_in <= x"5cf5";
		-- 8c73 and ffa6
		

      wait;
   end process;

END;
