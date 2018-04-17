--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:43:49 04/17/2018
-- Design Name:   
-- Module Name:   C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/branch_rounds_inv_tb.vhd
-- Project Name:  sparx
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: branch_rounds_inv
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
 
ENTITY branch_rounds_inv_tb IS
END branch_rounds_inv_tb;
 
ARCHITECTURE behavior OF branch_rounds_inv_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT branch_rounds_inv
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
 
--   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: branch_rounds_inv PORT MAP (
          pt => pt,
          key_0 => key_0,
          key_1 => key_1,
          key_2 => key_2,
          key_3 => key_3,
          branches_out => branches_out
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
	variable branches_out_exp : std_logic_vector(127 downto 0);
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
			
		pt <= x"19fc6e389444d872316d0ffb30f1def6";
		key_0 <= x"5b5724ff1f2b716bcbcd8be4a05dac5c"; -- 28
		key_1 <= x"c7d8b562d3b54049f2e0b1b4277b08e9"; -- 29
		key_2 <= x"9b14be5266f1b37b3aa6f3c47399b54b"; -- 30
		key_3 <= x"b3d24494e7881ec24e79d23d40398f2a"; -- 31
		
		wait for 50 ns;
		
		branches_out_exp := branches_out;
		assert branches_out_exp = x"96b4c77ecb293a5b4f809389e8123531"
		report "Unexpected Result for branches_out #1" 
		severity error;
		
		wait for 50 ns;
		
		pt <= branches_out;
		key_0 <= x"5ce958e00b3a2402bdec8a5d51437fdb"; -- 24
		key_1 <= x"b51bcaa22b99481836d36c1a63d84aae"; -- 24
		key_2 <= x"765fedb6020c28872da5709f1287a2ee"; -- 26
		key_3 <= x"cd811b90aca21a79aeae4300bafa7887"; -- 27
		
		wait for 50 ns;
		
		branches_out_exp := branches_out;
		assert branches_out_exp = x"35baefe317a132f8a5f5cd20ecca07ae"
		report "Unexpected Result for branches_out #2" 
		severity error;


      -- insert stimulus here 

      wait;
   end process;

END;
