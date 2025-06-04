class Helicopter_Base_H;

class jh_uh1h_base: Helicopter_Base_H {
  class TextureSources {
    class Jungle_CX_01 {
      factions[] += { "IND_BD_F" };
    };

    class US_35_green {
      factions[] += { "IND_BD_F" };
    };

    class Olive {
      factions[] += { "IND_BD_F" };
    };
  };

  class Turrets;
};

class jh_uh1h_unarmed_base: jh_uh1h_base {};
class jh_uh1h_ov: jh_uh1h_unarmed_base {};

class I_BD_uh1h_unarmed_jh: jh_uh1h_ov {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgVehicles_I_CX_uh1h_unarmed_jh";
  crew = "I_BD_Helipilot_F";
  side = 2;
  faction = "IND_BD_F";
  forceInGarage = 1;
  editorPreview = QPATHTO(data\editorpreviews\I_BD_uh1h_unarmed_jh.jpeg);
  textureList[] = { "Olive", 1.0 };
  hiddenSelectionsTextures[] = {
    "JH_UH1H\data\skins\uh1_ext_01_us_co.paa",
    "JH_UH1H\data\uh1_int_01_co.paa",
    "JH_UH1H\data\uh1_int_02_co.paa",
    "JH_UH1H\data\uh1_ext_02_co.paa",
    "JH_UH1H\data\uh1_int_03_co.paa",
    "JH_UH1H\data\uh1_int_04_co.paa",
    "JH_UH1H\data\uh1_ext_03_ca.paa"
  };
  typicalCargo[] = {
    "I_BD_Helipilot_F"
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
