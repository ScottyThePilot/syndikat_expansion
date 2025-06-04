class Offroad_01_base_F;

class Offroad_01_military_base_F: Offroad_01_base_F {
  class TextureSources {
    class Tan_BD {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_TAN0";
      factions[] = {};
      materials[] = {
        "\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
        "\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
      };
      textures[] = {
        QPATHTO(data\vehicles\Offroad_01_ext_tan_co.paa),
        QPATHTO(data\vehicles\Offroad_01_ext_tan_co.paa)
      };
    };
  };
};

class I_C_Offroad_01_F;
class I_C_Offroad_01_AT_F;
class I_C_Offroad_01_armed_F;

class I_BD_Offroad_01_F: I_C_Offroad_01_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Bandit_7_F";
  typicalCargo[] = { "I_BD_Soldier_Bandit_7_F" };
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Offroad_01_F.jpeg);
  textureList[] = {
    "Tan_BD", 1,
    "Brown", 1
  };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Offroad_01_ext_tan_co.paa),
    QPATHTO(data\vehicles\Offroad_01_ext_tan_co.paa)
  };

  scope = 2;
};

class I_BD_Offroad_01_AT_F: I_C_Offroad_01_AT_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Bandit_7_F";
  typicalCargo[] = { "I_BD_Soldier_Bandit_7_F" };
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Offroad_01_AT_F.jpeg);
  textureList[] = {
    "Tan_BD", 1,
    "Brown", 1
  };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Offroad_01_ext_tan_co.paa),
    QPATHTO(data\vehicles\Offroad_01_ext_tan_co.paa)
  };

  scope = 2;
};

class I_BD_Offroad_01_armed_F: I_C_Offroad_01_armed_F {
  author = "ScottyThePilot";
  crew = "I_BD_Soldier_Bandit_7_F";
  typicalCargo[] = { "I_BD_Soldier_Bandit_7_F" };
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Offroad_01_armed_F.jpeg);
  textureList[] = {
    "Tan_BD", 1,
    "Brown", 1
  };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Offroad_01_ext_tan_co.paa),
    QPATHTO(data\vehicles\Offroad_01_ext_tan_co.paa)
  };

  scope = 2;
};
