--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:40:59 04/01/2018
-- Design Name:   
-- Module Name:   C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/encrypt_tb.vhd
-- Project Name:  sparx
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: encrypt
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
 
ENTITY encrypt_tb IS
END encrypt_tb;
 
ARCHITECTURE behavior OF encrypt_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT encrypt
    PORT(
         pt : IN  std_logic_vector(127 downto 0);
         key_master : IN  std_logic_vector(127 downto 0);
         clk : IN  std_logic;
			en : IN std_logic;
         ct : OUT  std_logic_vector(127 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal pt : std_logic_vector(127 downto 0) := (others => '0');
   signal key_master : std_logic_vector(127 downto 0) := (others => '0');
   signal clk : std_logic := '0';
	signal en : std_logic := '0';

 	--Outputs
   signal ct : std_logic_vector(127 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: encrypt PORT MAP (
          pt => pt,
          key_master => key_master,
          clk => clk,
          ct => ct,
			 en => en
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
      wait for 100 ns;	
		
		pt 		  <= x"0123456789abcdeffedcba9876543210";
		key_master <= x"00112233445566778899aabbccddeeff";
		

      --wait for clk_period*10;
		wait for 100 ns;
		
		en <= '1';
		
		--wait for 100 ns;

      -- insert stimulus here 

      wait;
   end process;

END;
