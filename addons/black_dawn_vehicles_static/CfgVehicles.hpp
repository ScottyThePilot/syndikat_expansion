class Bag_Base;

class Weapon_Bag_Base: Bag_Base {
  class assembleInfo;
};



class O_Static_AA_F;

class I_BD_Static_AA_F: O_Static_AA_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Bandit_7_F";
  side = 2;
  faction = "IND_BD_F";

  scope = 2;
  scopeCurator = 2;
};



class O_Static_AT_F;

class I_BD_Static_AT_F: O_Static_AT_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Bandit_7_F";
  side = 2;
  faction = "IND_BD_F";

  scope = 2;
  scopeCurator = 2;
};



class HMG_02_base_F;

class I_C_HMG_02_F: HMG_02_base_F {
  class assembleInfo;
};

class I_BD_HMG_02_F: I_C_HMG_02_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Para_3_F";
  side = 2;
  faction = "IND_BD_F";

  class assembleInfo: assembleInfo {
    dissasembleTo[] = {
      "I_BD_HMG_02_weapon_F",
      "I_BD_HMG_02_support_F"
    };
  };

  scope = 2;
  scopeCurator = 2;
};



class HMG_02_high_base_F;

class I_C_HMG_02_high_F: HMG_02_high_base_F {
  class assembleInfo;
};

class I_BD_HMG_02_high_F: I_C_HMG_02_high_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Para_3_F";
  side = 2;
  faction = "IND_BD_F";

  class assembleInfo: assembleInfo {
    dissasembleTo[] = {
      "I_BD_HMG_02_high_weapon_F",
      "I_BD_HMG_02_support_high_F"
    };
  };

  scope = 2;
  scopeCurator = 2;
};



class I_C_HMG_02_support_F;

class I_BD_HMG_02_support_F: I_C_HMG_02_support_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  displayName = "$STR_sct_CfgVehicles_I_BD_HMG_02_support_F";
  hiddenSelectionsTextures[] = {
    "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_co.paa"
  };
  picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_khk.paa";

  scope = 2;
  scopeCurator = 2;
};



class I_C_HMG_02_support_high_F;

class I_BD_HMG_02_support_high_F: I_C_HMG_02_support_high_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  displayName = "$STR_sct_CfgVehicles_I_BD_HMG_02_support_high_F";
  hiddenSelectionsTextures[] = {
    "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_co.paa"
  };
  picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_khk.paa";

  scope = 2;
  scopeCurator = 2;
};



class B_HMG_02_weapon_F: Weapon_Bag_Base {
  class assembleInfo: assembleInfo {
    base[] += { "I_BD_HMG_02_support_F" };
  };
};

class I_C_HMG_02_weapon_F: B_HMG_02_weapon_F {
  class assembleInfo;
};

class I_BD_HMG_02_weapon_F: I_C_HMG_02_weapon_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  displayName = "$STR_sct_CfgVehicles_I_BD_HMG_02_weapon_F";
  hiddenSelectionsTextures[] = {
    "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_co.paa"
  };
  picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_khk.paa";

  class assembleInfo: assembleInfo {
    assembleTo = "I_BD_HMG_02_F";
  };

  scope = 2;
  scopeCurator = 2;
};



class B_HMG_02_high_weapon_F: Weapon_Bag_Base {
  class assembleInfo: assembleInfo {
    base[] += { "I_BD_HMG_02_support_high_F" };
  };
};

class I_C_HMG_02_high_weapon_F: B_HMG_02_high_weapon_F {
  class assembleInfo;
};

class I_BD_HMG_02_high_weapon_F: I_C_HMG_02_high_weapon_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  displayName = "$STR_sct_CfgVehicles_I_BD_HMG_02_high_weapon_F";
  hiddenSelectionsTextures[] = {
    "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_co.paa"
  };
  picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_khk.paa";

  class assembleInfo: assembleInfo {
    assembleTo = "I_BD_HMG_02_high_F";
  };

  scope = 2;
  scopeCurator = 2;
};



class Mortar_01_base_F;

class I_Mortar_01_F: Mortar_01_base_F {
  class assembleInfo;
};

class I_BD_Mortar_01_F: I_Mortar_01_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Bandit_7_F";
  side = 2;
  faction = "IND_BD_F";

  class assembleInfo: assembleInfo {
    dissasembleTo[] = {
      "I_BD_Mortar_01_weapon_F",
      "I_BD_Mortar_01_support_F"
    };
  };

  scope = 2;
  scopeCurator = 2;
};



class I_Mortar_01_support_F;

class I_BD_Mortar_01_support_F: I_Mortar_01_support_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  displayName = "$STR_sct_CfgVehicles_I_BD_Mortar_01_support_F";
  hiddenSelectionsTextures[] = {
    "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_co.paa"
  };
  picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_khk.paa";

  scope = 2;
  scopeCurator = 2;
};



class B_Mortar_01_weapon_F: Weapon_Bag_Base {
  class assembleInfo: assembleInfo {
    base[] += { "I_BD_Mortar_01_support_F" };
  };
};

class I_Mortar_01_weapon_F: B_Mortar_01_weapon_F {
  class assembleInfo;
};

class I_BD_Mortar_01_weapon_F: I_Mortar_01_weapon_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  displayName = "$STR_sct_CfgVehicles_I_BD_Mortar_01_weapon_F";
  hiddenSelectionsTextures[] = {
    "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_co.paa"
  };
  picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_khk.paa";

  class assembleInfo: assembleInfo {
    assembleTo = "I_BD_Mortar_01_F";
  };

  scope = 2;
  scopeCurator = 2;
};
