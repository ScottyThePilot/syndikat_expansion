class Bag_Base;

class Weapon_Bag_Base: Bag_Base {
  class assembleInfo;
};



// For some reason, the names on the M2 HMG folded tripod bags for Syndikat and FIA
// have their names incorrect in the stringtable. This just swaps the stringtable keys.

class B_HMG_02_support_F;

class I_C_HMG_02_support_F: B_HMG_02_support_F {
  displayName = "$STR_A3_CfgVehicles_I_G_HMG_02_support_F0";
};

class I_G_HMG_02_support_F: B_HMG_02_support_F {
  displayName = "$STR_A3_CfgVehicles_I_C_HMG_02_support_F0";
};



class Mortar_01_base_F;

class I_Mortar_01_F: Mortar_01_base_F {
  class assembleInfo;
};

class I_CX_Mortar_01_F: I_Mortar_01_F {
  author = "ScottyThePilot";
  crew = "I_C_Soldier_Bandit_7_F";
  side = 2;
  faction = "IND_C_F";

  class assembleInfo: assembleInfo {
    dissasembleTo[] = {
      "I_CX_Mortar_01_weapon_F",
      "I_CX_Mortar_01_support_F"
    };
  };

  scope = 2;
  scopeCurator = 2;
};



class I_Mortar_01_support_F;

class I_CX_Mortar_01_support_F: I_Mortar_01_support_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_C_F";
  displayName = "$STR_sct_CfgVehicles_I_CX_Mortar_01_support_F";
  hiddenSelectionsTextures[] = {
    "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_co.paa"
  };
  picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_oli.paa";

  scope = 2;
  scopeCurator = 2;
};



class B_Mortar_01_weapon_F: Weapon_Bag_Base {
  class assembleInfo: assembleInfo {
    base[] += { "I_CX_Mortar_01_support_F" };
  };
};

class I_Mortar_01_weapon_F: B_Mortar_01_weapon_F {
  class assembleInfo;
};

class I_CX_Mortar_01_weapon_F: I_Mortar_01_weapon_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_C_F";
  displayName = "$STR_sct_CfgVehicles_I_CX_Mortar_01_weapon_F";
  hiddenSelectionsTextures[] = {
    "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_co.paa"
  };
  picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_oli.paa";

  class assembleInfo: assembleInfo {
    assembleTo = "I_CX_Mortar_01_F";
  };

  scope = 2;
  scopeCurator = 2;
};
