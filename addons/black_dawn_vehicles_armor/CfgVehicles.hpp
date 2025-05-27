class Tank;

class Tank_F: Tank {
  class EventHandlers;
};

class APC_Tracked_03_base_F: Tank_F {
  class TextureSources {
    class Jungle_CX_01 {
      factions[] += { "IND_BD_F" };
    };

    class Jungle_CX_02 {
      factions[] += { "IND_BD_F" };
    };

    class Arid_BD_01 {
      author = "ScottyThePilot";
      displayName = "$STR_sct_TextureSources_Arid_01";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_BD_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\APC_Tracked_03_ext1_arid_01_co.paa),
        QPATHTO(data\vehicles\APC_Tracked_03_ext2_arid_01_co.paa),
        QPATHTO(data\vehicles\camonet_arid_co.paa),
        QPATHTO(data\vehicles\cage_arid_co.paa)
      };
    };

    class Arid_BD_02 {
      author = "ScottyThePilot";
      displayName = "$STR_sct_TextureSources_Arid_02";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_BD_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\APC_Tracked_03_ext1_arid_02_co.paa),
        QPATHTO(data\vehicles\APC_Tracked_03_ext2_arid_02_co.paa),
        QPATHTO(data\vehicles\camonet_arid_co.paa),
        QPATHTO(data\vehicles\cage_arid_co.paa)
      };
    };
  };
};

class I_APC_Tracked_03_base_F: APC_Tracked_03_base_F {};
class I_APC_Tracked_03_cannon_F: I_APC_Tracked_03_base_F {};

class I_BD_APC_Tracked_03_F: I_APC_Tracked_03_cannon_F {
  author = "ScottyThePilot";
  crew = "I_BD_crew_F";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_APC_Tracked_03_F.jpeg);
  textureList[] = {
    "Arid_BD_01", 1.0,
    "Arid_BD_02", 1.0
  };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\APC_Tracked_03_ext1_arid_01_co.paa),
    QPATHTO(data\vehicles\APC_Tracked_03_ext2_arid_01_co.paa),
    QPATHTO(data\vehicles\camonet_arid_co.paa),
    QPATHTO(data\vehicles\cage_arid_co.paa)
  };

  class EventHandlers: EventHandlers {
    postInit = "if (local (_this select 0)) then {[(_this select 0), '', [], false] call BIS_fnc_initVehicle;};";
  };

  class TransportMagazines {
    class _xx_30Rnd_762x39_AK12_Mag_F {
      magazine = "30Rnd_762x39_AK12_Mag_F";
      count = 12;
    };
    class _xx_200Rnd_556x45_Box_F {
      magazine = "200Rnd_556x45_Box_F";
      count = 6;
    };
    class _xx_HandGrenade {
      magazine = "HandGrenade";
      count = 6;
    };
    class _xx_MiniGrenade {
      magazine = "MiniGrenade";
      count = 6;
    };
    class _xx_1Rnd_HE_Grenade_shell {
      magazine = "1Rnd_HE_Grenade_shell";
      count = 6;
    };
    class _xx_1Rnd_Smoke_Grenade_shell {
      magazine = "1Rnd_Smoke_Grenade_shell";
      count = 3;
    };
    class _xx_1Rnd_SmokeGreen_Grenade_shell {
      magazine = "1Rnd_SmokeGreen_Grenade_shell";
      count = 3;
    };
    class _xx_SmokeShell {
      magazine = "SmokeShell";
      count = 8;
    };
    class _xx_SmokeShellGreen {
      magazine = "SmokeShellGreen";
      count = 8;
    };
    class _xx_RPG7_F {
      magazine = "RPG7_F";
      count = 5;
    };
  };

  class TransportWeapons {
    class _xx_arifle_AK12_F {
      weapon = "arifle_AK12_F";
      count = 2;
    };
    class _xx_LMG_03_F {
      weapon = "LMG_03_F";
      count = 1;
    };
    class _xx_launch_RPG7_F {
      weapon = "launch_RPG7_F";
      count = 1;
    };
  };

  class TransportBackpacks {
    class _xx_B_Kitbag_rgr {
      backpack = "B_Kitbag_rgr";
      count = 2;
    };
  };

  scope = 2;
  scopeCurator = 2;
};



class Wheeled_APC_F;

class APC_Wheeled_03_base_F: Wheeled_APC_F {
  class TextureSources {
    class Guerilla_01 {
      factions[] += { "IND_BD_F" };
    };

    class Guerilla_02 {
      factions[] += { "IND_BD_F" };
    };

    class Guerilla_03 {
      factions[] += { "IND_BD_F" };
    };

    class Jungle_CX_01 {
      factions[] += { "IND_BD_F" };
    };

    class Jungle_CX_02 {
      factions[] += { "IND_BD_F" };
    };

    class Arid_BD_01 {
      author = "ScottyThePilot";
      displayName = "$STR_sct_TextureSources_Arid_01";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_BD_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\APC_Wheeled_03_ext1_arid_01_co.paa),
        QPATHTO(data\vehicles\APC_Wheeled_03_ext2_arid_01_co.paa),
        QPATHTO(data\vehicles\APC_Wheeled_03_rcws30_arid_01_co.paa),
        QPATHTO(data\vehicles\APC_Wheeled_03_ext_alpha_arid_01_co.paa),
        QPATHTO(data\vehicles\camonet_arid_co.paa),
        QPATHTO(data\vehicles\cage_arid_co.paa)
      };
    };

    class Arid_BD_02 {
      author = "ScottyThePilot";
      displayName = "$STR_sct_TextureSources_Arid_02";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_BD_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\APC_Wheeled_03_ext1_arid_02_co.paa),
        QPATHTO(data\vehicles\APC_Wheeled_03_ext2_arid_02_co.paa),
        QPATHTO(data\vehicles\APC_Wheeled_03_rcws30_arid_02_co.paa),
        QPATHTO(data\vehicles\APC_Wheeled_03_ext_alpha_arid_02_co.paa),
        QPATHTO(data\vehicles\camonet_arid_co.paa),
        QPATHTO(data\vehicles\cage_arid_co.paa)
      };
    };
  };

  class EventHandlers;
};

class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F {};
class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F {};

class I_BD_APC_Wheeled_03_F: I_APC_Wheeled_03_cannon_F {
  author = "ScottyThePilot";
  crew = "I_BD_crew_F";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_APC_Wheeled_03_F.jpeg);
  textureList[] = {
    "Arid_BD_01", 1.0,
    "Arid_BD_02", 1.0
  };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\APC_Wheeled_03_ext1_arid_01_co.paa),
    QPATHTO(data\vehicles\APC_Wheeled_03_ext2_arid_01_co.paa),
    QPATHTO(data\vehicles\APC_Wheeled_03_rcws30_arid_01_co.paa),
    QPATHTO(data\vehicles\APC_Wheeled_03_ext_alpha_arid_01_co.paa),
    QPATHTO(data\vehicles\camonet_arid_co.paa),
    QPATHTO(data\vehicles\cage_arid_co.paa)
  };

  class EventHandlers: EventHandlers {
    postInit = "if (local (_this select 0)) then {[(_this select 0), '', [], false] call BIS_fnc_initVehicle;};";
  };

  class TransportMagazines {
    class _xx_30Rnd_762x39_AK12_Mag_F {
      magazine = "30Rnd_762x39_AK12_Mag_F";
      count = 12;
    };
    class _xx_200Rnd_556x45_Box_F {
      magazine = "200Rnd_556x45_Box_F";
      count = 3;
    };
    class _xx_HandGrenade {
      magazine = "HandGrenade";
      count = 6;
    };
    class _xx_MiniGrenade {
      magazine = "MiniGrenade";
      count = 6;
    };
    class _xx_1Rnd_HE_Grenade_shell {
      magazine = "1Rnd_HE_Grenade_shell";
      count = 6;
    };
    class _xx_1Rnd_Smoke_Grenade_shell {
      magazine = "1Rnd_Smoke_Grenade_shell";
      count = 3;
    };
    class _xx_1Rnd_SmokeGreen_Grenade_shell {
      magazine = "1Rnd_SmokeGreen_Grenade_shell";
      count = 3;
    };
    class _xx_SmokeShell {
      magazine = "SmokeShell";
      count = 8;
    };
    class _xx_SmokeShellGreen {
      magazine = "SmokeShellGreen";
      count = 8;
    };
    class _xx_RPG7_F {
      magazine = "RPG7_F";
      count = 5;
    };
  };
  class TransportWeapons {
    class _xx_arifle_AK12_F {
      weapon = "arifle_AK12_F";
      count = 2;
    };
  };
  class TransportBackpacks {
    class _xx_B_Kitbag_rgr {
      backpack = "B_Kitbag_rgr";
      count = 2;
    };
  };

  scope = 2;
  scopeCurator = 2;
};
