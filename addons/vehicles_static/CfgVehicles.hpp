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
  displayName = "$STR_sct_backpack_I_CX_Mortar_01_support_F";
  hiddenSelectionsTextures[] = {
    "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_co.paa"
  };
  picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_oli.paa";

  scope = 2;
  scopeCurator = 2;
};



class Bag_Base;

class Weapon_Bag_Base: Bag_Base {
  class assembleInfo;
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
  displayName = "$STR_sct_backpack_I_CX_Mortar_01_weapon_F";
  hiddenSelectionsTextures[] = {
    "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_co.paa"
  };
  picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_oli.paa";

  class assembleInfo: assembleInfo {
    assembleTo = "I_CX_Mortar_01_support_F";
  };

  scope = 2;
  scopeCurator = 2;
};
