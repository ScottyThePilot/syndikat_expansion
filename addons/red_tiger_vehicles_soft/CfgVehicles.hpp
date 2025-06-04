class Van_01_base_F;

class Van_01_fuel_base_F: Van_01_base_F {
  class TextureSources {
    class Brown {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_BROWN0";
      factions[] = { "IND_C_F" };
      materials[] = {
        "\A3\Soft_F_Exp\Van_01\Data\Van_01_ext.rvmat",
        "\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat"
      };
      textures[] = {
        "\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa",
        QPATHTO(data\vehicles\Van_01_tank_grey_co.paa)
      };
    };

    class Olive {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_OLIVE0";
      factions[] = { "IND_C_F" };
      materials[] = {
        "\A3\Soft_F_Exp\Van_01\Data\Van_01_ext.rvmat",
        "\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat"
      };
      textures[] = {
        "\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa",
        QPATHTO(data\vehicles\Van_01_tank_grey_co.paa)
      };
    };
  };
};

class I_G_Van_01_fuel_F;

class I_CX_Van_01_fuel_F: I_G_Van_01_fuel_F {
  author = "ScottyThePilot";
  crew = "I_C_Soldier_Bandit_7_F";
  typicalCargo[] = { "I_C_Soldier_Bandit_5_F" };
  side = 2;
  faction = "IND_C_F";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Van_01_fuel_F.jpeg);
  textureList[] = {
    "Brown", 1.0,
    "Olive", 1.0
  };
  hiddenSelectionsMaterials[] = {
    "\A3\Soft_F_Exp\Van_01\Data\Van_01_ext.rvmat",
    "\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat"
  };
  hiddenSelectionsTextures[] = {
    "\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa",
    QPATHTO(data\vehicles\Van_01_tank_grey_co.paa)
  };

  scope = 2;
};

class Truck_F;

class Truck_02_base_F: Truck_F {
  class TextureSources {
    class BlueBlue {
      factions[] += { "IND_C_F" };
    };

    class BlueOlive {
      factions[] += { "IND_C_F" };
    };

    class OrangeBlue {
      factions[] += { "IND_C_F" };
    };

    class OrangeOlive {
      factions[] += { "IND_C_F" };
    };

    class Olive_CX {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_OLIVE0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\Truck_02_kab_olive_co.paa),
        QPATHTO(data\vehicles\Truck_02_kuz_olive_co.paa),
        "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTO(data\vehicles\Truck_02_chassis_co.paa)
      };
    };
  };
};

class Truck_02_ammo_base_F: Truck_02_base_F {
  class TextureSources {
    class Olive_CX {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_OLIVE0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\Truck_02_kab_olive_co.paa),
        QPATHTO(data\vehicles\Truck_02_repair_olive_co.paa),
        "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTO(data\vehicles\Truck_02_chassis_co.paa)
      };
    };
  };
};

class Truck_02_box_base_F: Truck_02_base_F {
  class TextureSources {
    class BlueGreen {
      factions[] += { "IND_C_F" };
    };

    class BlueOrange {
      factions[] += { "IND_C_F" };
    };

    class OrangeGreen {
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
        QPATHTO(data\vehicles\Truck_02_kab_olive_co.paa),
        QPATHTO(data\vehicles\Truck_02_repair_olive_co.paa),
        "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTO(data\vehicles\Truck_02_chassis_co.paa)
      };
    };
  };
};

class Truck_02_fuel_base_F: Truck_02_base_F {
  class TextureSources {
    class Blue {
      factions[] += { "IND_C_F" };
    };

    class Orange {
      factions[] += { "IND_C_F" };
    };

    class Olive_CX {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_OLIVE0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\Truck_02_kab_olive_co.paa),
        QPATHTO(data\vehicles\Truck_02_fuel_olive_co.paa),
        "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTO(data\vehicles\Truck_02_chassis_co.paa)
      };
    };
  };
};

class Truck_02_medical_base_F: Truck_02_box_base_F {
  class TextureSources {
    class Olive_CX {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_OLIVE0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\Truck_02_kab_olive_co.paa),
        QPATHTO(data\vehicles\Truck_02_kuz_olive_co.paa),
        "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTO(data\vehicles\Truck_02_chassis_co.paa)
      };
    };
  };
};

class Truck_02_transport_base_F: Truck_02_base_F {
  class TextureSources {
    class Blue {
      factions[] += { "IND_C_F" };
    };

    class Orange {
      factions[] += { "IND_C_F" };
    };

    class Olive_CX {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_OLIVE0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\Truck_02_kab_olive_co.paa),
        QPATHTO(data\vehicles\Truck_02_kuz_olive_co.paa),
        "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTO(data\vehicles\Truck_02_chassis_co.paa)
      };
    };
  };
};

class Truck_02_MRL_base_F: Truck_02_base_F {
  class TextureSources {
    class Olive_CX {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_OLIVE0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\Truck_02_kab_olive_co.paa),
        "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTO(data\vehicles\Truck_02_mrl_olive_co.paa),
        QPATHTO(data\vehicles\Truck_02_chassis_co.paa)
      };
    };
  };
};

class I_Truck_02_ammo_F;
class I_Truck_02_box_F;
class I_Truck_02_covered_F;
class I_Truck_02_fuel_F;
class I_Truck_02_medical_F;
class I_Truck_02_transport_F;
class I_Truck_02_mrl_F;

class I_CX_Truck_02_ammo_F: I_Truck_02_ammo_F {
  author = "ScottyThePilot";
  crew = "I_C_Soldier_Para_2_F";
  side = 2;
  faction = "IND_C_F";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Truck_02_ammo_F.jpeg);
  textureList[] = { "Olive_CX", 1.0 };
  hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Truck_02_kab_olive_co.paa),
    QPATHTO(data\vehicles\Truck_02_repair_olive_co.paa),
    "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTO(data\vehicles\Truck_02_chassis_co.paa)
  };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Truck_02_box_F: I_Truck_02_box_F {
  author = "ScottyThePilot";
  crew = "I_C_Soldier_Para_2_F";
  side = 2;
  faction = "IND_C_F";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Truck_02_box_F.jpeg);
  textureList[] = { "Olive_CX", 1.0 };
  hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Truck_02_kab_olive_co.paa),
    QPATHTO(data\vehicles\Truck_02_repair_olive_co.paa),
    "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTO(data\vehicles\Truck_02_chassis_co.paa)
  };
  typicalCargo[] = {
    "I_C_Soldier_Para_1_F",
    "I_C_Soldier_Para_1_F"
  };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Truck_02_covered_F: I_Truck_02_covered_F {
  author = "ScottyThePilot";
  crew = "I_C_Soldier_Para_2_F";
  side = 2;
  faction = "IND_C_F";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Truck_02_covered_F.jpeg);
  textureList[] = { "Olive_CX", 1.0 };
  hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Truck_02_kab_olive_co.paa),
    QPATHTO(data\vehicles\Truck_02_kuz_olive_co.paa),
    "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTO(data\vehicles\Truck_02_chassis_co.paa)
  };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Truck_02_fuel_F: I_Truck_02_fuel_F {
  author = "ScottyThePilot";
  crew = "I_C_Soldier_Para_2_F";
  side = 2;
  faction = "IND_C_F";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Truck_02_fuel_F.jpeg);
  textureList[] = { "Olive_CX", 1.0 };
  hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Truck_02_kab_olive_co.paa),
    QPATHTO(data\vehicles\Truck_02_fuel_olive_co.paa),
    "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTO(data\vehicles\Truck_02_chassis_co.paa)
  };
  typicalCargo[] = {
    "I_C_Soldier_Para_1_F",
    "I_C_Soldier_Para_1_F"
  };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Truck_02_medical_F: I_Truck_02_medical_F {
  author = "ScottyThePilot";
  crew = "I_C_Soldier_Para_3_F";
  side = 2;
  faction = "IND_C_F";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Truck_02_medical_F.jpeg);
  textureList[] = { "Olive_CX", 1.0 };
  hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Truck_02_kab_olive_co.paa),
    QPATHTO(data\vehicles\Truck_02_kuz_olive_co.paa),
    "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTO(data\vehicles\Truck_02_chassis_co.paa)
  };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Truck_02_transport_F: I_Truck_02_transport_F {
  author = "ScottyThePilot";
  crew = "I_C_Soldier_Para_2_F";
  side = 2;
  faction = "IND_C_F";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Truck_02_transport_F.jpeg);
  textureList[] = { "Olive_CX", 1.0 };
  hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Truck_02_kab_olive_co.paa),
    QPATHTO(data\vehicles\Truck_02_kuz_olive_co.paa),
    "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTO(data\vehicles\Truck_02_chassis_co.paa)
  };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Truck_02_mrl_F: I_Truck_02_mrl_F {
  author = "ScottyThePilot";
  crew = "I_C_Soldier_Para_2_F";
  side = 2;
  faction = "IND_C_F";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Truck_02_mrl_F.jpeg);
  textureList[] = { "Olive_CX", 1.0 };
  hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Truck_02_kab_olive_co.paa),
    "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTO(data\vehicles\Truck_02_mrl_olive_co.paa),
    QPATHTO(data\vehicles\Truck_02_chassis_co.paa)
  };
  typicalCargo[] = {
    "I_C_Soldier_Para_1_F",
    "I_C_Soldier_Para_1_F"
  };

  scope = 2;
  scopeCurator = 2;
};
