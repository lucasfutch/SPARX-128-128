--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:33:23 04/06/2018
-- Design Name:   
-- Module Name:   C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/key_shchedule_tb.vhd
-- Project Name:  sparx
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: key_schedule
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
 
ENTITY key_shchedule_tb IS
END key_shchedule_tb;
 
ARCHITECTURE behavior OF key_shchedule_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT key_schedule
    PORT(
         key_master : IN  std_logic_vector(127 downto 0);
         round : IN  std_logic_vector(2 downto 0);
         clk : IN  std_logic;
			en : IN std_logic;
         key_0 : OUT  std_logic_vector(127 downto 0);
         key_1 : OUT  std_logic_vector(127 downto 0);
         key_2 : OUT  std_logic_vector(127 downto 0);
         key_3 : OUT  std_logic_vector(127 downto 0);
         keys_ready : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal key_master : std_logic_vector(127 downto 0) := (others => '0');
   signal round : std_logic_vector(2 downto 0) := (others => '0');
   signal clk : std_logic := '0';
	signal en : std_logic := '0';

 	--Outputs
   signal key_0 : std_logic_vector(127 downto 0);
   signal key_1 : std_logic_vector(127 downto 0);
   signal key_2 : std_logic_vector(127 downto 0);
   signal key_3 : std_logic_vector(127 downto 0);
   signal keys_ready : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: key_schedule PORT MAP (
          key_master => key_master,
          round => round,
          clk => clk,
			 en => en,
          key_0 => key_0,
          key_1 => key_1,
          key_2 => key_2,
          key_3 => key_3,
          keys_ready => keys_ready
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		
		
      wait for 50 ns;	
		key_master <= x"00112233445566778899aabbccddeeff";
		round <= "000";
		en <= '1';
		
		wait for clk_period*3.5;
		key_master <= x"888157c18783a6452e4a4b10438958ae";
		round <= "001";
		
		wait for clk_period*4;
		key_master <= x"f1b697b253d53ff0c7085814e31a243a";
		round <= "010";
		
		wait for clk_period*4;
		key_master <= x"cf2f73dc63c67241d2b564608c61ccb9";
		round <= "011";
		
		wait for clk_period*4;
		key_master <= x"aa205882dce9c79cd5c0e45ab28f492c";
		round <= "100";
		
		wait for 50 ns;
		key_master <= x"da2600671cc7967d3f1ed4c70fd1ad3f";
		round <= "101";	

		wait for 50 ns;
		key_master <= x"5ce958e00b3a2402bdec8a5d51437fdb";
		round <= "110";

		wait for 50 ns;
		key_master <= x"5b5724ff1f2b716bcbcd8be4a05dac5c";
		round <= "111";		


      -- insert stimulus here 

      wait;
   end process;

END;
