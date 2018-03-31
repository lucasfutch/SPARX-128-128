
-- VHDL Instantiation Created from source file key_perm.vhd -- 12:49:45 03/31/2018
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT key_perm
	PORT(
		key_in : IN std_logic_vector(127 downto 0);
		c : IN std_logic_vector(4 downto 0);          
		key_out : OUT std_logic_vector(127 downto 0)
		);
	END COMPONENT;

	Inst_key_perm: key_perm PORT MAP(
		key_in => ,
		c => ,
		key_out => 
	);


