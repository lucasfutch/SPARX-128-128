--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:00:50 04/17/2018
-- Design Name:   
-- Module Name:   C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/decrypt_tb.vhd
-- Project Name:  sparx
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: decrypt
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
 
ENTITY decrypt_tb IS
END decrypt_tb;
 
ARCHITECTURE behavior OF decrypt_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT decrypt
    PORT(
         ct : IN  std_logic_vector(127 downto 0);
         key_master : IN  std_logic_vector(127 downto 0);
         clk : IN  std_logic;
         en : IN  std_logic;
         pt : OUT  std_logic_vector(127 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal ct : std_logic_vector(127 downto 0) := (others => '0');
   signal key_master : std_logic_vector(127 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal en : std_logic := '0';

 	--Outputs
   signal pt : std_logic_vector(127 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: decrypt PORT MAP (
          ct => ct,
          key_master => key_master,
          clk => clk,
          en => en,
          pt => pt
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
	variable pt_exp : std_logic_vector(127 downto 0);
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

		ct 		  <= x"1cee75407dbf23d8e0ee1597f42852d8";
		key_master <= x"00112233445566778899aabbccddeeff";
		
		wait for 100 ns;
		
		en <= '1';
		
		-- 57 clock cycles for decrypt to be done
		wait for 570 ns;
		
		pt_exp := pt;
		assert pt_exp = x"1123456789abcdeffedcba9876543210"
		report "Unexpected Result for pt" 
		severity error;
		

      wait;
   end process;

END;
