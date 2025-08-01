class Car_F;

class Offroad_02_base_F: Car_F {
  class TextureSources {
    class Brown {
      factions[] += { "IND_BD_F" };
    };

    class Olive {
      factions[] += { "IND_BD_F" };
    };

    class Tan_BD {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_TAN0";
      factions[] = { "IND_C_F", "IND_BD_F" };
      materials[] = {
        "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_2_metal.rvmat",
        "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_chrome.rvmat",
        "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_metal.rvmat",
        "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_chrome.rvmat"
      };
      textures[] = {
        QPATHTO(data\vehicles\Offroad_02_ext_tan_co.paa),
        QPATHTO(data\vehicles\Offroad_02_ext_tan_co.paa),
        QPATHTO(data\vehicles\Offroad_02_int_tan_co.paa),
        QPATHTO(data\vehicles\Offroad_02_int_tan_co.paa)
      };
    };

    class Sand_BD {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_SAND0";
      factions[] = { "IND_C_F", "IND_BD_F" };
      materials[] = {
        "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_2_metal.rvmat",
        "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_chrome.rvmat",
        "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_metal.rvmat",
        "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_chrome.rvmat"
      };
      textures[] = {
        QPATHTO(data\vehicles\Offroad_02_ext_sand_co.paa),
        QPATHTO(data\vehicles\Offroad_02_ext_sand_co.paa),
        QPATHTO(data\vehicles\Offroad_02_int_sand_co.paa),
        QPATHTO(data\vehicles\Offroad_02_int_sand_co.paa)
      };
    };
  };
};

class I_C_Offroad_02_unarmed_F;

class I_BD_Offroad_02_unarmed_F: I_C_Offroad_02_unarmed_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Para_1_F";
  typicalCargo[] = { "I_BD_Soldier_Para_3_F" };
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Offroad_02_unarmed_F.jpeg);
  textureList[] = {
    "Brown", 1.0,
    "Tan_BD", 1.0,
    "Sand_BD", 1.0
  };
  hiddenSelectionsMaterials[] = {
    "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_2_metal.rvmat",
    "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_chrome.rvmat",
    "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_metal.rvmat",
    "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_chrome.rvmat"
  };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Offroad_02_ext_tan_co.paa),
    QPATHTO(data\vehicles\Offroad_02_ext_tan_co.paa),
    QPATHTO(data\vehicles\Offroad_02_int_tan_co.paa),
    QPATHTO(data\vehicles\Offroad_02_int_tan_co.paa)
  };

  scope = 2;
  scopeCurator = 2;
};

class Offroad_02_LMG_base_F: Offroad_02_base_F {
  class TextureSources: TextureSources {
    class Brown: Brown {
      factions[] += { "IND_BD_F" };
    };

    class Olive: Olive {
      factions[] += { "IND_BD_F" };
    };

    class Tan_BD: Tan_BD {};

    class Sand_BD: Sand_BD {};
  };
};

class I_C_Offroad_02_LMG_F;

class I_BD_Offroad_02_LMG_F: I_C_Offroad_02_LMG_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Para_1_F";
  typicalCargo[] = { "I_BD_Soldier_Para_3_F" };
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Offroad_02_LMG_F.jpeg);
  textureList[] = {
    "Brown", 1.0,
    "Tan_BD", 1.0,
    "Sand_BD", 1.0
  };
  hiddenSelectionsMaterials[] = {
    "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_2_metal.rvmat",
    "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_chrome.rvmat",
    "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_metal.rvmat",
    "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_chrome.rvmat"
  };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Offroad_02_ext_tan_co.paa),
    QPATHTO(data\vehicles\Offroad_02_ext_tan_co.paa),
    QPATHTO(data\vehicles\Offroad_02_int_tan_co.paa),
    QPATHTO(data\vehicles\Offroad_02_int_tan_co.paa)
  };

  scope = 2;
  scopeCurator = 2;
};

class Offroad_02_AT_base_F: Offroad_02_base_F {
  class TextureSources: TextureSources {
    class Brown: Brown {
      factions[] += { "IND_BD_F" };
    };

    class Olive: Olive {
      factions[] += { "IND_BD_F" };
    };

    class Tan_BD: Tan_BD {};

    class Sand_BD: Sand_BD {};
  };
};

class I_C_Offroad_02_AT_F;

class I_BD_Offroad_02_AT_F: I_C_Offroad_02_AT_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Para_1_F";
  typicalCargo[] = { "I_BD_Soldier_Para_3_F" };
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Offroad_02_AT_F.jpeg);
  textureList[] = {
    "Brown", 1.0,
    "Tan_BD", 1.0,
    "Sand_BD", 1.0
  };
  hiddenSelectionsMaterials[] = {
    "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_2_metal.rvmat",
    "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_chrome.rvmat",
    "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_metal.rvmat",
    "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_chrome.rvmat"
  };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Offroad_02_ext_tan_co.paa),
    QPATHTO(data\vehicles\Offroad_02_ext_tan_co.paa),
    QPATHTO(data\vehicles\Offroad_02_int_tan_co.paa),
    QPATHTO(data\vehicles\Offroad_02_int_tan_co.paa)
  };

  scope = 2;
  scopeCurator = 2;
};

class Van_01_base_F;

class Van_01_transport_base_F: Van_01_base_F {
  class TextureSources {
    class Brown {
      factions[] += { "IND_BD_F" };
    };

    class Olive {
      factions[] += { "IND_BD_F" };
    };

    class Tan_BD {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_TAN0";
      factions[] = { "IND_C_F", "IND_BD_F" };
      materials[] = {
        "\A3\Soft_F_Exp\Van_01\Data\Van_01_ext.rvmat",
        "\A3\Soft_F_Gamma\Van_01\Data\Van_01_adds.rvmat",
        "\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base.rvmat"
      };
      textures[] = {
        QPATHTO(data\vehicles\Van_01_ext_tan_co.paa),
        "\A3\Soft_F_Gamma\Van_01\Data\Van_01_adds_CO.paa",
        "\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"
      };
    };
  };
};

class Van_01_fuel_base_F: Van_01_base_F {
  class TextureSources {
    class Brown {
      factions[] += { "IND_BD_F" };
    };

    class Olive {
      factions[] += { "IND_BD_F" };
    };

    class Tan_BD {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_TAN0";
      factions[] = { "IND_C_F", "IND_BD_F" };
      materials[] = {
        "\A3\Soft_F_Exp\Van_01\Data\Van_01_ext.rvmat",
        "\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat"
      };
      textures[] = {
        QPATHTO(data\vehicles\Van_01_ext_tan_co.paa),
        QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Van_01_tank_grey_co.paa)
      };
    };
  };
};

class I_C_Van_01_transport_F;
class I_CX_Van_01_fuel_F;

class I_BD_Van_01_transport_F: I_C_Van_01_transport_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Bandit_7_F";
  typicalCargo[] = { "I_BD_Soldier_Bandit_5_F" };
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Van_01_transport_F.jpeg);
  textureList[] = {
    "Brown", 1.0,
    "Tan_BD", 1.0
  };
  hiddenSelectionsMaterials[] = {
    "\A3\Soft_F_Exp\Van_01\Data\Van_01_ext.rvmat",
    "\A3\Soft_F_Gamma\Van_01\Data\Van_01_adds.rvmat",
    "\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base.rvmat"
  };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Van_01_ext_tan_co.paa),
    "\A3\Soft_F_Gamma\Van_01\Data\Van_01_adds_CO.paa",
    "\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"
  };

  scope = 2;
  scopeCurator = 2;
};

class I_BD_Van_01_fuel_F: I_CX_Van_01_fuel_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Bandit_7_F";
  typicalCargo[] = { "I_BD_Soldier_Bandit_5_F" };
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Van_01_fuel_F.jpeg);
  textureList[] = {
    "Brown", 1.0,
    "Tan_BD", 1.0
  };
  hiddenSelectionsMaterials[] = {
    "\A3\Soft_F_Exp\Van_01\Data\Van_01_ext.rvmat",
    "\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat"
  };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Van_01_ext_tan_co.paa),
    QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Van_01_tank_grey_co.paa)
  };

  scope = 2;
  scopeCurator = 2;
};

class I_C_Van_02_vehicle_F;
class I_C_Van_02_transport_F;

class I_BD_Van_02_vehicle_F: I_C_Van_02_vehicle_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Bandit_7_F";
  typicalCargo[] = { "I_BD_Soldier_Bandit_7_F" };
  side = 2;
  faction = "IND_BD_F";

  scope = 2;
  scopeCurator = 2;
};

class I_BD_Van_02_transport_F: I_C_Van_02_transport_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Bandit_7_F";
  typicalCargo[] = { "I_BD_Soldier_Bandit_7_F" };
  side = 2;
  faction = "IND_BD_F";

  scope = 2;
  scopeCurator = 2;
};

class Truck_F;

class Truck_02_base_F: Truck_F {
  class TextureSources {
    class BlueBlue {
      factions[] += { "IND_BD_F" };
    };

    class BlueOlive {
      factions[] += { "IND_BD_F" };
    };

    class OrangeBlue {
      factions[] += { "IND_BD_F" };
    };

    class OrangeOlive {
      factions[] += { "IND_BD_F" };
    };

    class Olive_CX {
      factions[] += { "IND_BD_F" };
    };

    class Tan_BD {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_TAN0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F", "IND_BD_F" };
      textures[] = {
        QPATHTO(data\vehicles\Truck_02_kab_tan_co.paa),
        QPATHTO(data\vehicles\Truck_02_kuz_tan_co.paa),
        "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa)
      };
    };
  };
};

class Truck_02_ammo_base_F: Truck_02_base_F {
  class TextureSources {
    class Olive_CX {
      factions[] += { "IND_BD_F" };
    };

    class Tan_BD {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_TAN0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F", "IND_BD_F" };
      textures[] = {
        QPATHTO(data\vehicles\Truck_02_kab_tan_co.paa),
        QPATHTO(data\vehicles\Truck_02_repair_tan_co.paa),
        "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa)
      };
    };
  };
};

class Truck_02_box_base_F: Truck_02_base_F {
  class TextureSources {
    class BlueGreen {
      factions[] += { "IND_BD_F" };
    };

    class BlueOrange {
      factions[] += { "IND_BD_F" };
    };

    class OrangeGreen {
      factions[] += { "IND_BD_F" };
    };

    class OrangeOrange {
      factions[] += { "IND_BD_F" };
    };

    class Olive_CX {
      factions[] += { "IND_BD_F" };
    };

    class Tan_BD {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_TAN0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F", "IND_BD_F" };
      textures[] = {
        QPATHTO(data\vehicles\Truck_02_kab_tan_co.paa),
        QPATHTO(data\vehicles\Truck_02_repair_tan_co.paa),
        "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa)
      };
    };
  };
};

class Truck_02_fuel_base_F: Truck_02_base_F {
  class TextureSources {
    class Blue {
      factions[] += { "IND_BD_F" };
    };

    class Orange {
      factions[] += { "IND_BD_F" };
    };

    class Olive_CX {
      factions[] += { "IND_BD_F" };
    };

    class Tan_BD {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_TAN0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F", "IND_BD_F" };
      textures[] = {
        QPATHTO(data\vehicles\Truck_02_kab_tan_co.paa),
        QPATHTO(data\vehicles\Truck_02_fuel_tan_co.paa),
        "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa)
      };
    };
  };
};

class Truck_02_medical_base_F: Truck_02_box_base_F {
  class TextureSources {
    class Olive_CX {
      factions[] += { "IND_BD_F" };
    };

    class Tan_BD {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_TAN0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F", "IND_BD_F" };
      textures[] = {
        QPATHTO(data\vehicles\Truck_02_kab_tan_co.paa),
        QPATHTO(data\vehicles\Truck_02_kuz_tan_co.paa),
        "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa)
      };
    };
  };
};

class Truck_02_transport_base_F: Truck_02_base_F {
  class TextureSources {
    class Blue {
      factions[] += { "IND_BD_F" };
    };

    class Orange {
      factions[] += { "IND_BD_F" };
    };

    class Olive_CX {
      factions[] += { "IND_BD_F" };
    };

    class Tan_BD {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_TAN0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F", "IND_BD_F" };
      textures[] = {
        QPATHTO(data\vehicles\Truck_02_kab_tan_co.paa),
        QPATHTO(data\vehicles\Truck_02_kuz_tan_co.paa),
        "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa)
      };
    };
  };
};

class Truck_02_MRL_base_F: Truck_02_base_F {
  class TextureSources {
    class Olive_CX {
      factions[] += { "IND_BD_F" };
    };

    class Tan_BD {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_TAN0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F", "IND_BD_F" };
      textures[] = {
        QPATHTO(data\vehicles\Truck_02_kab_tan_co.paa),
        "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTO(data\vehicles\Truck_02_mrl_tan_co.paa),
        QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa)
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

class I_BD_Truck_02_ammo_F: I_Truck_02_ammo_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Para_2_F";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Truck_02_ammo_F.jpeg);
  textureList[] = { "Tan_BD", 1.0 };
  hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Truck_02_kab_tan_co.paa),
    QPATHTO(data\vehicles\Truck_02_repair_tan_co.paa),
    "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa)
  };

  scope = 2;
  scopeCurator = 2;
};

class I_BD_Truck_02_box_F: I_Truck_02_box_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Para_2_F";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Truck_02_box_F.jpeg);
  textureList[] = { "Tan_BD", 1.0 };
  hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Truck_02_kab_tan_co.paa),
    QPATHTO(data\vehicles\Truck_02_repair_tan_co.paa),
    "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa)
  };
  typicalCargo[] = {
    "I_BD_Soldier_Para_1_F",
    "I_BD_Soldier_Para_1_F"
  };

  scope = 2;
  scopeCurator = 2;
};

class I_BD_Truck_02_covered_F: I_Truck_02_covered_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Para_2_F";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Truck_02_covered_F.jpeg);
  textureList[] = { "Tan_BD", 1.0 };
  hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Truck_02_kab_tan_co.paa),
    QPATHTO(data\vehicles\Truck_02_kuz_tan_co.paa),
    "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa)
  };

  scope = 2;
  scopeCurator = 2;
};

class I_BD_Truck_02_fuel_F: I_Truck_02_fuel_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Para_2_F";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Truck_02_fuel_F.jpeg);
  textureList[] = { "Tan_BD", 1.0 };
  hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Truck_02_kab_tan_co.paa),
    QPATHTO(data\vehicles\Truck_02_fuel_tan_co.paa),
    "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa)
  };
  typicalCargo[] = {
    "I_BD_Soldier_Para_1_F",
    "I_BD_Soldier_Para_1_F"
  };

  scope = 2;
  scopeCurator = 2;
};

class I_BD_Truck_02_medical_F: I_Truck_02_medical_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Para_3_F";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Truck_02_medical_F.jpeg);
  textureList[] = { "Tan_BD", 1.0 };
  hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Truck_02_kab_tan_co.paa),
    QPATHTO(data\vehicles\Truck_02_kuz_tan_co.paa),
    "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa)
  };

  scope = 2;
  scopeCurator = 2;
};

class I_BD_Truck_02_transport_F: I_Truck_02_transport_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Para_2_F";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Truck_02_transport_F.jpeg);
  textureList[] = { "Tan_BD", 1.0 };
  hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Truck_02_kab_tan_co.paa),
    QPATHTO(data\vehicles\Truck_02_kuz_tan_co.paa),
    "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa)
  };

  scope = 2;
  scopeCurator = 2;
};

class I_BD_Truck_02_mrl_F: I_Truck_02_mrl_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Para_2_F";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Truck_02_mrl_F.jpeg);
  textureList[] = { "Tan_BD", 1.0 };
  hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Truck_02_kab_tan_co.paa),
    "\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTO(data\vehicles\Truck_02_mrl_tan_co.paa),
    QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa)
  };
  typicalCargo[] = {
    "I_BD_Soldier_Para_1_F",
    "I_BD_Soldier_Para_1_F"
  };

  scope = 2;
  scopeCurator = 2;
};
