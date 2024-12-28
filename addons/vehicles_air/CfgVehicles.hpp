// Western Sahara apparently adds Texture Sources to the Pawnee and Hummingbird,
// as they do not have them in vanilla. The way they're set up here should be
// exactly the same as Western Sahara, so it should not break anything

class Helicopter_Base_F;

class Helicopter_Base_H: Helicopter_Base_F {
  // The original `Helicopter_Base_H/TextureSources` as defined in lxWS
  // doesn't inherit from anything, and is empty, so it should not break anything
  class TextureSources {};
};

class Heli_Light_01_base_F: Helicopter_Base_H {};

class Heli_Light_01_unarmed_base_F: Heli_Light_01_base_F {
  class TextureSources: TextureSources {
    class Shadow {
      author = "$STR_A3_Bohemia_Interactive";
      displayName = "$STR_A3_TEXTURESOURCES_SHADOW0";
      factions[] = { "CIV_F","IND_C_F" };
      textures[] = {
        "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"
      };
    };

    class Jungle_CX_01 {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_JUNGLE0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\Heli_Light_01_ext_jungle_co.paa)
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
        "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa",
        "\a3\air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"
      };
    };

    class Jungle_CX_01 {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_JUNGLE0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\Heli_Light_01_ext_jungle_co.paa),
        "\a3\air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"
      };
    };
  };
};

class B_Heli_Light_01_F;
class B_Heli_Light_01_dynamicLoadout_F;

class I_CX_Heli_Light_01_F: B_Heli_Light_01_F {
  author = "ScottyThePilot";
  crew = "I_C_Helipilot_F";
  side = 2;
  faction = "IND_C_F";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Heli_Light_01_F.jpeg);
  textureList[] = { "Jungle_CX_01", 1.0 };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Heli_Light_01_ext_jungle_co.paa)
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

class I_CX_Heli_Light_01_dynamicLoadout_F: B_Heli_Light_01_dynamicLoadout_F {
  author = "ScottyThePilot";
  crew = "I_C_Helipilot_F";
  side = 2;
  faction = "IND_C_F";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Heli_Light_01_dynamicLoadout_F.jpeg);
  textureList[] = { "Jungle_CX_01", 1.0 };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\Heli_Light_01_ext_jungle_co.paa),
    "\a3\air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"
  };
  typicalCargo[] = {
    "I_C_Helipilot_F"
  };
  forceInGarage = 0;
  magazines[] = {
    "5000Rnd_762x51_Yellow_Belt"
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
