class Truck_02_base_F;

class Truck_02_aa_base_lxWS: Truck_02_base_F {
  class TextureSources {
    class Brown {
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
        QPATHTOP(data\vehicles\Truck_02_kab_tan_co.paa),
        QPATHTOE(red_tiger_vehicles_soft\compat_lxws,data\vehicles\Truck_02_cargo_co.paa),
        "a3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa),
        "lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa",
        "lxws\vehicles_f_lxws\zu23\data\zu23_co.paa",
        "lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa",
        "lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa",
        "lxws\vehicles_f_lxws\truck_02\data\addons_black_co.paa"
      };
    };
  };
};

class Truck_02_cargo_base_lxWS: Truck_02_base_F {
  class TextureSources {
    class Brown {
      factions[] += { "IND_BD_F" };
    };

    class Black {
      factions[] += { "IND_BD_F" };
    };

    class Green {
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
        QPATHTOP(data\vehicles\Truck_02_kab_tan_co.paa),
        QPATHTOE(red_tiger_vehicles_soft\compat_lxws,data\vehicles\Truck_02_cargo_co.paa),
        "a3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
        QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa),
        "lxws\vehicles_f_lxws\truck_02\data\addons_black_co.paa"
      };
    };
  };
};

class I_A_Truck_02_aa_lxWS;
class I_Truck_02_cargo_lxWS;
class I_Truck_02_flatbed_lxWS;

class I_BD_Truck_02_aa_lxWS: I_A_Truck_02_aa_lxWS {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Para_2_F";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Truck_02_aa_lxWS.jpeg);
  textureList[] = { "Tan_BD", 1.0 };
  hiddenSelectionsTextures[] = {
    QPATHTOP(data\vehicles\Truck_02_kab_tan_co.paa),
    QPATHTOE(red_tiger_vehicles_soft\compat_lxws,data\vehicles\Truck_02_cargo_co.paa),
    "a3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa),
    "lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa",
    "lxws\vehicles_f_lxws\zu23\data\zu23_co.paa",
    "lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa",
    "lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa",
    "lxws\vehicles_f_lxws\truck_02\data\addons_black_co.paa"
  };
  typicalCargo[] = {
    "I_BD_Soldier_Para_1_F"
  };

  scope = 2;
  scopeCurator = 2;
};

class I_BD_Truck_02_cargo_lxWS: I_Truck_02_cargo_lxWS {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Para_2_F";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Truck_02_cargo_lxWS.jpeg);
  textureList[] = { "Tan_BD", 1.0 };
  hiddenSelectionsTextures[] = {
    QPATHTOP(data\vehicles\Truck_02_kab_tan_co.paa),
    QPATHTOE(red_tiger_vehicles_soft\compat_lxws,data\vehicles\Truck_02_cargo_co.paa),
    "a3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa),
    "lxws\vehicles_f_lxws\truck_02\data\addons_black_co.paa"
  };
  typicalCargo[] = {
    "I_BD_Soldier_Para_1_F",
    "I_BD_Soldier_Para_1_F"
  };

  scope = 2;
  scopeCurator = 2;
};

class I_BD_Truck_02_flatbed_lxWS: I_Truck_02_flatbed_lxWS {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Para_2_F";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Truck_02_flatbed_lxWS.jpeg);
  textureList[] = { "Tan_BD", 1 };
  hiddenSelectionsTextures[] = {
    QPATHTOP(data\vehicles\Truck_02_kab_tan_co.paa),
    QPATHTOE(red_tiger_vehicles_soft\compat_lxws,data\vehicles\Truck_02_cargo_co.paa),
    "a3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
    QPATHTOE(red_tiger_vehicles_soft,data\vehicles\Truck_02_chassis_co.paa),
    "lxws\vehicles_f_lxws\truck_02\data\addons_black_co.paa"
  };
  typicalCargo[] = {
    "I_BD_Soldier_Para_1_F",
    "I_BD_Soldier_Para_1_F"
  };

  scope = 2;
  scopeCurator = 2;
};
