--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   01:13:02 04/23/2018
-- Design Name:   
-- Module Name:   C:/Users/Lucas Futch/Documents/sparx_vhdl/sparx/sparx_module_tb.vhd
-- Project Name:  sparx
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: sparx_module
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
 
ENTITY sparx_module_tb IS
END sparx_module_tb;
 
ARCHITECTURE behavior OF sparx_module_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sparx_module
    PORT(
         input_text : IN  std_logic_vector(127 downto 0);
         master_key : IN  std_logic_vector(127 downto 0);
         clk : IN  std_logic;
         sel : IN  std_logic;
			reset : IN  std_logic;
         output_text : OUT  std_logic_vector(127 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal input_text : std_logic_vector(127 downto 0) := (others => '0');
   signal master_key : std_logic_vector(127 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal sel : std_logic := '0';
	signal reset : std_logic := '1';
	
 	--Outputs
   signal output_text : std_logic_vector(127 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sparx_module PORT MAP (
          input_text => input_text,
          master_key => master_key,
          clk => clk,
          sel => sel,
			 reset => reset,
          output_text => output_text
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
	variable ct_exp : std_logic_vector(127 downto 0);
	variable pt_exp : std_logic_vector(127 downto 0);
   begin		
	
		wait for 10 ns;
		reset <= '1';
      wait for 10 ns;	

		input_text <= x"0123456789abcdeffedcba9876543210";
      master_key <= x"00112233445566778899aabbccddeeff";
		sel <= '0';
		
		wait for 10 ns;
		reset <= '0';
		wait for 330 ns;
		
		ct_exp := output_text;
		assert ct_exp = x"1cee75407dbf23d8e0ee1597f42852d8"
		report "Unexpected Result for ct" 
		severity error;
		
		wait for 10 ns;
		reset <= '1';
		input_text <= x"00000000000000000000000000000000";
      master_key <= x"00000000000000000000000000000000";
		wait for 10 ns;
		
		input_text <= x"1cee75407dbf23d8e0ee1597f42852d8";
		master_key <= x"00112233445566778899aabbccddeeff";
		sel <= '1';
		
		wait for 10 ns;
		reset <= '0';		
		wait for 580 ns;
		
		pt_exp := output_text;
		assert pt_exp = x"0123456789abcdeffedcba9876543210"
		report "Unexpected Result for pt" 
		severity error;

      wait;
   end process;

END;
