----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:54:29 04/01/2018 
-- Design Name: 
-- Module Name:    sparx_module - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity sparx_module is
    Port ( pt : in  STD_LOGIC_VECTOR (127 downto 0);
           master_key : in  STD_LOGIC_VECTOR (127 downto 0);
           clk : in  STD_LOGIC;
           en : in  STD_LOGIC;
           ct : out  STD_LOGIC_VECTOR (127 downto 0));
end sparx_module;

architecture Behavioral of sparx_module is


begin



end Behavioral;

