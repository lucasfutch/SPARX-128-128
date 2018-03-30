--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:03:40 03/30/2018
-- Design Name:   
-- Module Name:   C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/branch_rounds_tb.vhd
-- Project Name:  sparx
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: branch_rounds
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
 
ENTITY branch_rounds_tb IS
END branch_rounds_tb;
 
ARCHITECTURE behavior OF branch_rounds_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT branch_rounds
    PORT(
         pt : IN  std_logic_vector(127 downto 0);
         key_0 : IN  std_logic_vector(127 downto 0);
         key_1 : IN  std_logic_vector(127 downto 0);
         key_2 : IN  std_logic_vector(127 downto 0);
         key_3 : IN  std_logic_vector(127 downto 0);
         branches_out : OUT  std_logic_vector(127 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal pt : std_logic_vector(127 downto 0) := (others => '0');
   signal key_0 : std_logic_vector(127 downto 0) := (others => '0');
   signal key_1 : std_logic_vector(127 downto 0) := (others => '0');
   signal key_2 : std_logic_vector(127 downto 0) := (others => '0');
   signal key_3 : std_logic_vector(127 downto 0) := (others => '0');

 	--Outputs
   signal branches_out : std_logic_vector(127 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: branch_rounds PORT MAP (
          pt => pt,
          key_0 => key_0,
          key_1 => key_1,
          key_2 => key_2,
          key_3 => key_3,
          branches_out => branches_out
        );
 

   -- Stimulus process
   stim_proc: process
	variable branches_out_exp : std_logic_vector(127 downto 0);
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		
		pt 	<= x"0123456789abcdeffedcba9876543210";
		key_0 <= x"00112233445566778899aabbccddeeff";
		key_1 <= x"aaa966224433ccff88883376ddcc7722";
		key_2 <= x"22530083b97721fefdaaeefd4487895f";
		key_3 <= x"897f8871a6c7a4cb603ec6c944f8ff0f";
		
      wait for 100 ns;	
		
		branches_out_exp := branches_out;
		assert branches_out_exp = x"038939b83b3eba946dda28bed98b6493"
		report "Unexpected Result for branches_out" 
		severity error;

      wait;
   end process;

END;
