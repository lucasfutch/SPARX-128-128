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
      wait for 50 ns;	
		
		key_0 <= x"00112233445566778899aabbccddeeff";
		wait for 10 ns;
		key_1 <= x"aaa966224433ccff88883376ddcc7722";
		wait for 10 ns;
		key_2 <= x"22530083b97721fefdaaeefd4487895f";
		wait for 10 ns;
		key_3 <= x"897f8871a6c7a4cb603ec6c944f8ff0f";
		--wait for 10 ns;
		pt 	<= x"0123456789abcdeffedcba9876543210";
		
      wait for 10 ns;	
		
		pt <= branches_out;
		key_0 <= x"888157c18783a6452e4a4b10438958ae";
		key_1 <= x"22f54be05ad205d7e255ac1cdf6cf32d";
		key_2 <= x"374cdac5362519a490f71f7b57e0e792";
		key_3 <= x"667c5b0973331824a95831c80e9c7370";
		
		wait for 50 ns;
		
		pt <= branches_out;
		key_0 <= x"f1b697b253d53ff0c7085814e31a243a";
		key_1 <= x"4cbc2e3605955b5f596a9b4f69a209f3";
		key_2 <= x"d9a3273ca6cf1e17ac64797670011d3f";
		key_3 <= x"b2cfc4616eeff21f15be103642cea717";
		
		wait for 50 ns;
		
		pt <= branches_out;
		key_0 <= x"cf2f73dc63c67241d2b564608c61ccb9";
		key_1 <= x"5c660e4ad37a1c0b37408e4cd0054184";
		key_2 <= x"debf791adb02e22aae7cfe350eba3788";
		key_3 <= x"064b46ddf8d71cbed3d9fee8f7910f46";
		
		wait for 50 ns;
		
		pt <= branches_out;
		key_0 <= x"aa205882dce9c79cd5c0e45ab28f492c";
		key_1 <= x"189440ab99d6fbdf76bfc37b6605f76e";
		key_2 <= x"a86d470768dc6a7102b2665042684f87";
		key_3 <= x"0cbda2ae22573e4a8b33a8bbca555314";
		
		wait for 50 ns;
		
		pt <= branches_out;
		key_0 <= x"da2600671cc7967d3f1ed4c70fd1ad3f";
		key_1 <= x"2116efae4e1b4f876ae2e6041145425a";
		key_2 <= x"bc1e753a1bf0a54b6a0bf4d2aad932ca";
		key_3 <= x"b67f0bceb2b2665bcea20ba60ba6d8ed";
		
		wait for 50 ns;
		
		pt <= branches_out;
		key_0 <= x"5ce958e00b3a2402bdec8a5d51437fdb";
		key_1 <= x"b51bcaa22b99481836d36c1a63d84aae";
		key_2 <= x"765fedb6020c28872da5709f1287a2ee";
		key_3 <= x"cd811b90aca21a79aeae4300bafa7887";
		
		wait for 50 ns;
		
		pt <= branches_out;
		key_0 <= x"5b5724ff1f2b716bcbcd8be4a05dac5c";
		key_1 <= x"c7d8b562d3b54049f2e0b1b4277b08e9";
		key_2 <= x"9b14be5266f1b37b3aa6f3c47399b54b";
		key_3 <= x"b3d24494e7881ec24e79d23d40398f2a";

		wait for 50 ns;
		
		
		

		branches_out_exp := branches_out;
		assert branches_out_exp = x"19fc6e389444d872316d0ffb30f1def6"
		report "Unexpected Result for branches_out" 
		severity error;

      wait;
   end process;

END;
