class Truck_02_base_F;

class Truck_02_aa_base_lxWS: Truck_02_base_F {
	class TextureSources {
		class Brown {
			factions[] += { "IND_C_F" };
		};

		class Olive_CX {
			author = "ScottyThePilot";
			displayName = "$STR_A3_TEXTURESOURCES_OLIVE0";
			factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
			textures[] = {
				QPATHTOP(data\vehicles\Truck_02_kab_olive_co.paa),
				QPATHTO(data\vehicles\Truck_02_cargo_olive_co.paa),
				"a3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
				QPATHTOP(data\vehicles\Truck_02_chassis_olive_co.paa),
				"lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
				"lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
				"lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
				"lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa",
				"lxws\vehicles_f_lxws\truck_02\data\addons_black_co.paa"
			};
		};
	};
};

class Truck_02_cargo_base_lxWS: Truck_02_base_F {
	class TextureSources {
		class Brown {
			factions[] += { "IND_C_F" };
		};

		class Black {
			factions[] += { "IND_C_F" };
		};

		class Green {
			factions[] += { "IND_C_F" };
		};

		class OrangeOrange {
			factions[] += { "IND_C_F" };
		};

		class Olive_CX {
			author = "ScottyThePilot";
			displayName = "$STR_A3_TEXTURESOURCES_OLIVE0";
			factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
			textures[] = {
				QPATHTOP(data\vehicles\Truck_02_kab_olive_co.paa),
				QPATHTO(data\vehicles\Truck_02_cargo_olive_co.paa),
				"a3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
				QPATHTOP(data\vehicles\Truck_02_chassis_olive_co.paa),
				"lxws\vehicles_f_lxws\truck_02\data\addons_black_co.paa"
			};
		};
	};
};

class I_A_Truck_02_aa_lxWS;
class I_Truck_02_cargo_lxWS;
class I_Truck_02_flatbed_lxWS;

class I_CX_Truck_02_aa_lxWS: I_A_Truck_02_aa_lxWS {
	author = "ScottyThePilot";
	crew = "I_C_Soldier_Para_2_F";
	side = 2;
	faction = "IND_C_F";
	editorPreview = QPATHTO(data\editorpreviews\I_CX_Truck_02_aa_lxWS.jpeg);
	textureList[] = { "Olive_CX", 1.0 };
	hiddenSelectionsTextures[] = {
		QPATHTOP(data\vehicles\Truck_02_kab_olive_co.paa),
		QPATHTO(data\vehicles\Truck_02_cargo_olive_co.paa),
		"a3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
		QPATHTOP(data\vehicles\Truck_02_chassis_olive_co.paa),
		"lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
		"lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
		"lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
		"lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa",
		"lxws\vehicles_f_lxws\truck_02\data\addons_black_co.paa"
	};
	typicalCargo[] = {
		"I_C_Soldier_Para_1_F"
	};

	scope = 2;
	scopeCurator = 2;
};

class I_CX_Truck_02_cargo_lxWS: I_Truck_02_cargo_lxWS {
	author = "ScottyThePilot";
	crew = "I_C_Soldier_Para_2_F";
	side = 2;
	faction = "IND_C_F";
	editorPreview = QPATHTO(data\editorpreviews\I_CX_Truck_02_cargo_lxWS.jpeg);
	textureList[] = { "Olive_CX", 1.0 };
	hiddenSelectionsTextures[] = {
		QPATHTOP(data\vehicles\Truck_02_kab_olive_co.paa),
		QPATHTO(data\vehicles\Truck_02_cargo_olive_co.paa),
		"a3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
		QPATHTOP(data\vehicles\Truck_02_chassis_olive_co.paa),
		"lxws\vehicles_f_lxws\truck_02\data\addons_black_co.paa"
	};
	typicalCargo[] = {
		"I_C_Soldier_Para_1_F",
		"I_C_Soldier_Para_1_F"
	};

	scope = 2;
	scopeCurator = 2;
};

class I_CX_Truck_02_flatbed_lxWS: I_Truck_02_flatbed_lxWS {
	author = "ScottyThePilot";
	crew = "I_C_Soldier_Para_2_F";
	side = 2;
	faction = "IND_C_F";
	editorPreview = QPATHTO(data\editorpreviews\I_CX_Truck_02_flatbed_lxWS.jpeg);
	textureList[] = { "Olive_CX", 1 };
	hiddenSelectionsTextures[] = {
		QPATHTOP(data\vehicles\Truck_02_kab_olive_co.paa),
		QPATHTO(data\vehicles\Truck_02_cargo_olive_co.paa),
		"a3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
		QPATHTOP(data\vehicles\Truck_02_chassis_olive_co.paa),
		"lxws\vehicles_f_lxws\truck_02\data\addons_black_co.paa"
	};
	typicalCargo[] = {
		"I_C_Soldier_Para_1_F",
		"I_C_Soldier_Para_1_F"
	};

	scope = 2;
	scopeCurator = 2;
};
