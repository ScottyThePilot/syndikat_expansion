class Tank_F;

class APC_Tracked_03_base_F: Tank_F {
  class TextureSources {
    class Jungle_CX_01 {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_JUNGLE0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\APC_Tracked_03_ext1_jungle_co.paa),
        QPATHTO(data\vehicles\APC_Tracked_03_ext2_jungle_co.paa),
        "a3\armor_f\data\camonet_AAF_Digi_Jungle_CO.paa",
        "a3\armor_f\data\cage_csat_green_co.paa"
      };
    };
  };
};

class I_APC_Tracked_03_base_F: APC_Tracked_03_base_F {};
class I_APC_Tracked_03_cannon_F: I_APC_Tracked_03_base_F {};

class I_CX_APC_Tracked_03_F: I_APC_Tracked_03_cannon_F {
  author = "ScottyThePilot";
  crew = "I_CX_crew_F";
  side = 2;
  faction = "IND_C_F";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_APC_Tracked_03_F.jpeg);
  textureList[] = { "Jungle_CX_01", 1.0 };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\APC_Tracked_03_ext1_jungle_co.paa),
    QPATHTO(data\vehicles\APC_Tracked_03_ext2_jungle_co.paa),
    "a3\armor_f\data\camonet_AAF_Digi_Jungle_CO.paa",
    "a3\armor_f\data\cage_csat_green_co.paa"
  };

  class TransportBackpacks {};
  class TransportMagazines {};
  class TransportWeapons {};

  scope = 2;
  scopeCurator = 2;
};



class Wheeled_APC_F;

class APC_Wheeled_03_base_F: Wheeled_APC_F {
  class TextureSources {
    class Guerilla_01 {
      faction[] += { "IND_C_F" };
    };

    class Guerilla_02 {
      faction[] += { "IND_C_F" };
    };

    class Guerilla_03 {
      faction[] += { "IND_C_F" };
    };

    class Jungle_CX_01 {
      author = "ScottyThePilot";
      displayName = "$STR_A3_TEXTURESOURCES_JUNGLE0";
      factions[] = { "IND_F", "BLU_F_F", "OPF_G_F", "IND_G_F", "IND_C_F" };
      textures[] = {
        QPATHTO(data\vehicles\APC_Wheeled_03_ext1_jungle_co.paa),
        QPATHTO(data\vehicles\APC_Wheeled_03_ext2_jungle_co.paa),
        QPATHTO(data\vehicles\APC_Wheeled_03_rcws30_jungle_co.paa),
        QPATHTO(data\vehicles\APC_Wheeled_03_ext1_alpha_jungle_co.paa),
        "a3\armor_f\data\camonet_AAF_Digi_Jungle_CO.paa",
        "a3\armor_f\data\cage_csat_green_co.paa"
      };
    };
  };
};

class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F {};
class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F {};

class I_CX_APC_Wheeled_03_F: I_APC_Wheeled_03_cannon_F {
  author = "ScottyThePilot";
  crew = "I_CX_crew_F";
  side = 2;
  faction = "IND_C_F";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_APC_Wheeled_03_F.jpeg);
  textureList[] = { "Jungle_CX_01", 1.0 };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\vehicles\APC_Wheeled_03_ext1_jungle_co.paa),
    QPATHTO(data\vehicles\APC_Wheeled_03_ext2_jungle_co.paa),
    QPATHTO(data\vehicles\APC_Wheeled_03_rcws30_jungle_co.paa),
    QPATHTO(data\vehicles\APC_Wheeled_03_ext1_alpha_jungle_co.paa),
    "a3\armor_f\data\camonet_AAF_Digi_Jungle_CO.paa",
    "a3\armor_f\data\cage_csat_green_co.paa"
  };

  class TransportBackpacks {};
  class TransportMagazines {};
  class TransportWeapons {};

  scope = 2;
  scopeCurator = 2;
};
