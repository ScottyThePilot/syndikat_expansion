class Helicopter_Base_H;

class jj_uh1h_base: Helicopter_Base_H {
  class TextureSources {
    class Jungle_CX_01 {
      factions[] += { "IND_BD_F" };
    };

    class Green {
      factions[] += { "IND_BD_F" };
    };

    class Olive {
      factions[] += { "IND_BD_F" };
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

class I_BD_uh1x_unarmed_jh: jj_uh1h_ov {
  author = "ScottyThePilot";
  displayName = "$STR_sct_vehicle_I_CX_uh1x_unarmed_jh";
  crew = "I_BD_Helipilot_F";
  side = 2;
  faction = "IND_BD_F";
  forceInGarage = 1;
  editorPreview = QPATHTO(data\editorpreviews\I_BD_uh1x_unarmed_jh.jpeg);
  textureList[] = { "Olive", 1.0 };
  hiddenSelectionsTextures[] = {
    "JH_UH1X\data\uh1_ext_01_co.paa",
    "JH_UH1X\data\uh1_int_01_co.paa",
    "JH_UH1X\data\uh1_int_02_co.paa",
    "JH_UH1X\data\uh1_ext_02_co.paa",
    "JH_UH1X\data\uh1_int_03_co.paa",
    "JH_UH1X\data\uh1_int_04_co.paa",
    "JH_UH1X\data\35\Nose_co.paa",
    "JH_UH1X\data\uh1_ext_03_ca.paa"
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

class I_BD_uh1x_gunship_jh: jj_uh1h_doorgunner_ov {
  author = "ScottyThePilot";
  displayName = "$STR_sct_vehicle_I_CX_uh1x_gunship_jh";
  crew = "I_BD_Helipilot_F";
  side = 2;
  faction = "IND_BD_F";
  forceInGarage = 1;
  editorPreview = QPATHTO(data\editorpreviews\I_BD_uh1x_gunship_jh.jpeg);
  textureList[] = { "Olive", 1.0 };
  hiddenSelectionsTextures[] = {
    "JH_UH1X\data\uh1_ext_01_co.paa",
    "JH_UH1X\data\uh1_int_01_co.paa",
    "JH_UH1X\data\uh1_int_02_co.paa",
    "JH_UH1X\data\uh1_ext_02_co.paa",
    "JH_UH1X\data\uh1_int_03_co.paa",
    "JH_UH1X\data\uh1_int_04_co.paa",
    "JH_UH1X\data\35\Nose_co.paa",
    "JH_UH1X\data\uh1_ext_03_ca.paa"
  };
  typicalCargo[] = {
    "I_BD_Helipilot_F"
  };

  class Turrets: Turrets {
    class uh1_CopilotTurret: uh1_CopilotTurret {};
    class uh1_LeftDoorGun: uh1_LeftDoorGun {
      gunnerType = "I_BD_Soldier_Para_1_F";
    };
    class uh1_RightDoorGun: uh1_RightDoorGun {
      gunnerType = "I_BD_Soldier_Para_1_F";
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
