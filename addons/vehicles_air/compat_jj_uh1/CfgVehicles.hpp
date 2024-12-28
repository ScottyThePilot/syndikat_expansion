class Helicopter_Base_H;

class jj_uh1h_base: Helicopter_Base_H {
  class TextureSources {
    class Jungle_CX_01 {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_JUNGLE0";
      factions[] = { "BLU_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\uh1x_ext_01_jungle_co.paa),
        "JH_UH1X\data\uh1_int_01_co.paa",
        "JH_UH1X\data\uh1_int_02_co.paa",
        "JH_UH1X\data\uh1_ext_02_co.paa",
        "JH_UH1X\data\uh1_int_03_co.paa",
        "JH_UH1X\data\uh1_int_04_co.paa",
        QPATHTO(data\vehicles\uh1x_nose_jungle_co.paa),
        "JH_UH1X\data\uh1_ext_03_ca.paa"
      };
    };

    class Green {
      factions[] += { "IND_C_F" };
    };

    class Olive {
      factions[] += { "IND_C_F" };
    };
  };

  class Turrets;
};

class jj_uh1h_unarmed_base: jj_uh1h_base {};

class jj_uh1h_doorgunner_base: jj_uh1h_base {
  class Turrets: Turrets {
    class uh1_CopilotTurret;
    class uh1_LeftDoorGun;
    class uh1_RightDoorGun;
    class uh1_CargoTurret_01;
    class uh1_CargoTurret_02;
    class uh1_CargoTurret_Right;
    class uh1_CargoTurret_Left;
  };
};

class jj_uh1h_ov: jj_uh1h_unarmed_base {};
class jj_uh1h_doorgunner_ov: jj_uh1h_doorgunner_base {};

class I_CX_uh1x_unarmed_ov_jj: jj_uh1h_ov {
  author = "ScottyThePilot";
  displayName = "UH-1X Unarmed";
  crew = "I_C_Helipilot_F";
  side = 2;
  faction = "IND_C_F";
  forceInGarage = 1;
  textureList[] = { "Jungle_CX_01", 1.0 };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\uh1x_ext_01_jungle_co.paa),
    "JH_UH1X\data\uh1_int_01_co.paa",
    "JH_UH1X\data\uh1_int_02_co.paa",
    "JH_UH1X\data\uh1_ext_02_co.paa",
    "JH_UH1X\data\uh1_int_03_co.paa",
    "JH_UH1X\data\uh1_int_04_co.paa",
    QPATHTO(data\vehicles\uh1x_nose_jungle_co.paa),
    "JH_UH1X\data\uh1_ext_03_ca.paa"
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

class I_CX_uh1x_gunship_ov_jj: jj_uh1h_doorgunner_ov {
  author = "ScottyThePilot";
  displayName = "UH-1X Gunship";
  crew = "I_C_Helipilot_F";
  side = 2;
  faction = "IND_C_F";
  forceInGarage = 1;
  textureList[] = { "Jungle_CX_01", 1.0 };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\uh1x_ext_01_jungle_co.paa),
    "JH_UH1X\data\uh1_int_01_co.paa",
    "JH_UH1X\data\uh1_int_02_co.paa",
    "JH_UH1X\data\uh1_ext_02_co.paa",
    "JH_UH1X\data\uh1_int_03_co.paa",
    "JH_UH1X\data\uh1_int_04_co.paa",
    QPATHTO(data\vehicles\uh1x_nose_jungle_co.paa),
    "JH_UH1X\data\uh1_ext_03_ca.paa"
  };
  typicalCargo[] = {
    "I_C_Helipilot_F"
  };

  class Turrets: Turrets {
    class uh1_CopilotTurret: uh1_CopilotTurret {};
    class uh1_LeftDoorGun: uh1_LeftDoorGun {
      gunnerType = "I_C_Soldier_Para_1_F";
    };
    class uh1_RightDoorGun: uh1_RightDoorGun {
      gunnerType = "I_C_Soldier_Para_1_F";
    };
    class uh1_CargoTurret_01: uh1_CargoTurret_01 {};
    class uh1_CargoTurret_02: uh1_CargoTurret_02 {};
    class uh1_CargoTurret_Right: uh1_CargoTurret_Right {};
    class uh1_CargoTurret_Left: uh1_CargoTurret_Left {};
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
