--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:40:10 03/31/2018
-- Design Name:   
-- Module Name:   C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/key_perm_tb.vhd
-- Project Name:  sparx
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: key_perm
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
 
ENTITY key_perm_tb IS
END key_perm_tb;
 
ARCHITECTURE behavior OF key_perm_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT key_perm
    PORT(
         key_in : IN  std_logic_vector(127 downto 0);
         c : IN  std_logic_vector(4 downto 0);
         key_out : OUT  std_logic_vector(127 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal key_in : std_logic_vector(127 downto 0) := (others => '0');
   signal c : std_logic_vector(4 downto 0) := (others => '0');

 	--Outputs
   signal key_out : std_logic_vector(127 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
  
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: key_perm PORT MAP (
          key_in => key_in,
          c => c,
          key_out => key_out
        );

   -- Stimulus process
   stim_proc: process
	variable key_out_exp : STD_LOGIC_VECTOR(127 downto 0);
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

		key_in <= x"00112233445566778899aabbccddeeff";
		c <= "00001";
		
		wait for 100 ns;	
		
		key_out_exp := key_out;
		assert key_out_exp = x"aaa966224433ccff88883376ddcc7722"
		report "Unexpected Result for key_out" 
		severity error;
      -- insert stimulus here 

      wait;
   end process;

END;
