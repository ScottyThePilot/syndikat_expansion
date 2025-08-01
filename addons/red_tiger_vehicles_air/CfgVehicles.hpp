// Western Sahara apparently adds Texture Sources to the Pawnee and Hummingbird,
// as they do not have them in vanilla. The way they're set up here should be
// exactly the same as Western Sahara, so it should not break anything

class Helicopter_Base_F;

class Helicopter_Base_H: Helicopter_Base_F {
  // The original `Helicopter_Base_H/TextureSources` as defined in lxWS
  // doesn't inherit from anything, and is empty, so it should not break anything
  class TextureSources {};
};

class Heli_Light_01_base_F: Helicopter_Base_H {
  class EventHandlers;
};

class Heli_Light_01_unarmed_base_F: Heli_Light_01_base_F {
  class TextureSources: TextureSources {
    class Shadow {
      author = "$STR_A3_Bohemia_Interactive";
      displayName = "$STR_A3_TEXTURESOURCES_SHADOW0";
      factions[] = { "CIV_F", "IND_C_F" };
      textures[] = {
        "\A3\Air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"
      };
    };

    class Jungle_CX_01 {
      author = "ScottyThePilot";
      displayName = "$STR_sct_TextureSources_Jungle_01";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\Heli_Light_01_ext_jungle_01_co.paa)
      };
    };

    class Jungle_CX_02 {
      author = "ScottyThePilot";
      displayName = "$STR_sct_TextureSources_Jungle_02";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\Heli_Light_01_ext_jungle_02_co.paa)
      };
    };
  };
};

class Heli_Light_01_armed_base_F: Heli_Light_01_base_F {};

class Heli_Light_01_dynamicLoadout_base_F: Heli_Light_01_armed_base_F {
  class TextureSources: TextureSources {
    class Shadow {
      author = "$STR_A3_Bohemia_Interactive";
      displayName = "$STR_A3_TEXTURESOURCES_SHADOW0";
      factions[] = { "CIV_F","IND_C_F" };
      textures[] = {
        "\A3\Air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa",
        "\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"
      };
    };

    class Jungle_CX_01 {
      author = "ScottyThePilot";
      displayName = "$STR_sct_TextureSources_Jungle_01";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\Heli_Light_01_ext_jungle_01_co.paa),
        "\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"
      };
    };

    class Jungle_CX_02 {
      author = "ScottyThePilot";
      displayName = "$STR_sct_TextureSources_Jungle_02";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\Heli_Light_01_ext_jungle_02_co.paa),
        "\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"
      };
    };
  };
};

class B_Heli_Light_01_F: Heli_Light_01_unarmed_base_F {
  class EventHandlers;
};

class I_CX_Heli_Light_01_F: B_Heli_Light_01_F {
  author = "ScottyThePilot";
  crew = "I_C_Helipilot_F";
  side = 2;
  faction = "IND_C_F";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Heli_Light_01_F.jpeg);
  textureList[] = {
    "Jungle_CX_01", 1.0,
    "Jungle_CX_02", 1.0
  };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Heli_Light_01_ext_jungle_01_co.paa)
  };
  typicalCargo[] = { "I_C_Helipilot_F" };

  class EventHandlers: EventHandlers {
    postInit = "if (local (_this select 0)) then {[(_this select 0), '', [], false] call BIS_fnc_initVehicle;};";
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
    class _xx_30Rnd_762x39_AK12_Mag_F {
      magazine = "30Rnd_762x39_AK12_Mag_F";
      count = 4;
    };
  };

  class TransportWeapons {
    class _xx_arifle_AK12_F {
      weapon = "arifle_AK12_F";
      count = 2;
    };
  };

  scope = 2;
  scopeCurator = 2;
};

class B_Heli_Light_01_dynamicLoadout_F: Heli_Light_01_dynamicLoadout_base_F {};

class I_CX_Heli_Light_01_dynamicLoadout_F: B_Heli_Light_01_dynamicLoadout_F {
  author = "ScottyThePilot";
  crew = "I_C_Helipilot_F";
  side = 2;
  faction = "IND_C_F";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Heli_Light_01_dynamicLoadout_F.jpeg);
  textureList[] = {
    "Jungle_CX_01", 1.0,
    "Jungle_CX_02", 1.0
  };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Heli_Light_01_ext_jungle_01_co.paa),
    "\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"
  };
  typicalCargo[] = { "I_C_Helipilot_F" };
  forceInGarage = 0;
  magazines[] = {
    "5000Rnd_762x51_Yellow_Belt"
  };

  class EventHandlers: EventHandlers {
    postInit = "if (local (_this select 0)) then {[(_this select 0), '', [], false] call BIS_fnc_initVehicle;};";
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
    class _xx_30Rnd_762x39_AK12_Mag_F {
      magazine = "30Rnd_762x39_AK12_Mag_F";
      count = 4;
    };
  };

  class TransportWeapons {
    class _xx_arifle_AK12_F {
      weapon = "arifle_AK12_F";
      count = 2;
    };
  };

  scope = 2;
  scopeCurator = 2;
  scopeArsenal = 0;
};

class Heli_Light_01_civil_base_F: Heli_Light_01_unarmed_base_F {
  class TextureSources {
    class Shadow {
      factions[] += { "IND_C_F" };
    };

    class Jungle_CX_01 {
      author = "ScottyThePilot";
      displayName = "$STR_sct_TextureSources_Jungle_01";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\Heli_Light_01_ext_jungle_01_co.paa)
      };
    };

    class Jungle_CX_02 {
      author = "ScottyThePilot";
      displayName = "$STR_sct_TextureSources_Jungle_02";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\Heli_Light_01_ext_jungle_02_co.paa)
      };
    };
  };
};

class Plane_Base_F;

class Plane_Civil_01_base_F: Plane_Base_F {
  class TextureSources {
    class White_1 {
      author = "$STR_A3_Bohemia_Interactive";
      displayName = "$STR_sct_TextureSources_Plane_01_White_TanInterior";
      factions[] = { "CIV_F", "IND_C_F" };
      textures[] = {
        "\A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_co.paa",
        "\A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_co.paa",
        "\A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
        "\A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
      };
    };

    class White_2 {
      author = "$STR_A3_Bohemia_Interactive";
      displayName = "$STR_sct_TextureSources_Plane_01_White";
      factions[] = { "CIV_F", "IND_C_F" };
      textures[] = {
        "\A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_co.paa",
        "\A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_co.paa",
        "\A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
        "\A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
      };
    };
  };
};
