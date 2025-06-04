class Helicopter_Base_H;

class jh_uh1h_base: Helicopter_Base_H {
  class TextureSources {
    class Jungle_CX_01 {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_JUNGLE0";
      factions[] = { "BLU_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\uh1h_ext_01_jungle_co.paa),
        "JH_UH1H\data\uh1_int_01_co.paa",
        "JH_UH1H\data\uh1_int_02_co.paa",
        "JH_UH1H\data\uh1_ext_02_co.paa",
        "JH_UH1H\data\uh1_int_03_co.paa",
        "JH_UH1H\data\uh1_int_04_co.paa",
        "JH_UH1H\data\uh1_ext_03_ca.paa"
      };
    };

    class US_35_green {
      factions[] += { "IND_C_F" };
    };

    class Olive {
      factions[] += { "IND_C_F" };
    };
  };

  class Turrets;
};

class jh_uh1h_unarmed_base: jh_uh1h_base {};
class jh_uh1h_ov: jh_uh1h_unarmed_base {};

class I_CX_uh1h_unarmed_jh: jh_uh1h_ov {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgVehicles_I_CX_uh1h_unarmed_jh";
  crew = "I_C_Helipilot_F";
  side = 2;
  faction = "IND_C_F";
  forceInGarage = 1;
  editorPreview = QPATHTO(data\editorpreviews\I_CX_uh1h_unarmed_jh.jpeg);
  textureList[] = { "Jungle_CX_01", 1.0 };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\uh1h_ext_01_jungle_co.paa),
    "JH_UH1H\data\uh1_int_01_co.paa",
    "JH_UH1H\data\uh1_int_02_co.paa",
    "JH_UH1H\data\uh1_ext_02_co.paa",
    "JH_UH1H\data\uh1_int_03_co.paa",
    "JH_UH1H\data\uh1_int_04_co.paa",
    "JH_UH1H\data\uh1_ext_03_ca.paa"
  };
  typicalCargo[] = {
    "I_C_Helipilot_F"
  };

  class TransportMagazines {
    class _xx_SmokeShell {
      magazine = "SmokeShell";
      count = 2;
    };
    class _xx_SmokeShellGreen {
      magazine = "SmokeShellGreen";
      count = 2;
    };
  };
  class TransportWeapons {};

  scope = 2;
  scopeCurator = 2;
  scopeArsenal = 2;
};
