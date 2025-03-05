#define BASE_ITEMS "ItemMap","ItemCompass","ItemWatch","ItemRadio"

class I_G_Soldier_base_F;

class I_C_Soldier_base_F: I_G_Soldier_base_F {
  class EventHandlers;

  headgearList[] = {
    "", 6.0,
    "H_Bandanna_gry", 0.5,
    "H_Bandanna_blu", 0.5,
    "H_Bandanna_cbr", 0.5,
    "H_Bandanna_khk", 0.5,
    "H_Bandanna_sgg", 0.5,
    "H_Bandanna_sand", 0.5,
    "H_Bandanna_surfer", 0.5,
    "H_Bandanna_surfer_blk", 0.5,
    "H_Bandanna_surfer_grn", 0.5,
    "H_Bandanna_camo", 0.5,
    "H_Cap_surfer", 1.0,
    "H_Cap_blk", 1.0,
    "H_Cap_grn", 1.0,
    "H_Cap_oli", 1.0,
    "H_Cap_tan", 1.0,
    "H_Booniehat_khk", 1.5,
    "H_Booniehat_oli", 1.5,
    "H_Booniehat_tan", 1.5,
    "H_Hat_Safari_olive_F", 2.0,
    "H_Hat_Safari_sand_F", 2.0,
    "H_PASGT_basic_black_F", 3.0,
    "H_PASGT_basic_olive_F", 3.0
  };

  CBA_facewearList[] = {
    "", 6.0,
    "G_Aviator", 3.0,
    "G_Bandanna_aviator", 2.0,
    "G_Bandanna_beast", 1.0,
    "G_Bandanna_blk", 1.0,
    "G_Bandanna_khk", 1.0,
    "G_Bandanna_oli", 1.0,
    "G_Bandanna_shades", 1.0,
    "G_Bandanna_sport", 1.0,
    "G_Bandanna_tan", 1.0,
    "G_Bandanna_Skull1", 1.0,
    "G_Bandanna_Skull2", 1.0,
    "G_Bandanna_Syndikat1", 1.0,
    "G_Bandanna_Syndikat2", 1.0,
    "G_Shades_Black", 1.0,
    "G_Shades_Blue", 1.0,
    "G_Shades_Red", 1.0,
    "G_Shades_Green", 1.0
  };
};

class I_CX_Soldier_Para_Sweater_F: I_C_Soldier_base_F {
  author = "ScottyThePilot";

  model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
  hiddenSelections[] = { "camo", "insignia" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\uniforms\Soldier_Para_Sweater_co.paa)
  };

  uniformClass = "U_I_CX_Soldier_Para_Sweater_F";

  scope = 1;
  scopeCurator = 1;
};

class I_CX_Soldier_Para_Commander_F: I_C_Soldier_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_unit_I_CX_Soldier_Para_Commander_F";
  side = 2;
  faction = "IND_C_F";
  editorSubcategory = "EdSubcat_Personnel_Paramilitary";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Para_Commander_F.jpeg);
  model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_1_F.p3d";
  hiddenSelectionsTextures[] = {
    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa",
    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"
  };

  cost = 200000;
  uniformClass = "U_I_C_Soldier_Para_1_F";
  role = "Grenadier";

  weapons[] = { "arifle_AK12_GL_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_762x39_AK12_Mag_F"), LIST6("1Rnd_HE_Grenade_shell") };
  linkedItems[] = { "H_PASGT_basic_olive_F", "V_TacVest_blk", BASE_ITEMS };

  respawnWeapons[] = { "arifle_AK12_GL_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_762x39_AK12_Mag_F"), LIST6("1Rnd_HE_Grenade_shell") };
  respawnLinkedItems[] = { "H_PASGT_basic_olive_F", "V_TacVest_blk", BASE_ITEMS };

  headgearList[] = {
    "H_PASGT_basic_black_F", 3.0,
    "H_PASGT_basic_olive_F", 3.0
  };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Soldier_Para_Marksman_F: I_C_Soldier_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_unit_I_CX_Soldier_Para_Marksman_F";
  side = 2;
  faction = "IND_C_F";
  editorSubcategory = "EdSubcat_Personnel_Paramilitary";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Para_Marksman_F.jpeg);
  model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
  hiddenSelections[] = { "camo", "insignia" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\uniforms\Soldier_Para_Sweater_co.paa)
  };

  uniformClass = "U_I_CX_Soldier_Para_Sweater_F";
  role = "Marksman";

  weapons[] = { "srifle_DMR_06_olive_F", "Throw", "Put" };
  magazines[] = { LIST6("20Rnd_762x51_Mag"), "HandGrenade" };
  linkedItems[] = { "V_Chestrig_rgr", BASE_ITEMS };

  respawnWeapons[] = { "srifle_DMR_06_olive_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("20Rnd_762x51_Mag"), "HandGrenade" };
  respawnLinkedItems[] = { "V_Chestrig_rgr", BASE_ITEMS };

  headgearList[] = {
    "H_Booniehat_khk", 1.5,
    "H_Booniehat_oli", 1.5,
    "H_Booniehat_tan", 1.5,
    "H_Hat_Safari_olive_F", 2.0,
    "H_Hat_Safari_sand_F", 2.0
  };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Soldier_Para_Autorifleman_F: I_C_Soldier_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_unit_I_CX_Soldier_Para_Autorifleman_F";
  side = 2;
  faction = "IND_C_F";
  editorSubcategory = "EdSubcat_Personnel_Paramilitary";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Para_Autorifleman_F.jpeg);
  model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_1_F.p3d";
  hiddenSelectionsTextures[] = {
    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa",
    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"
  };

  uniformClass = "U_I_C_Soldier_Para_1_F";
  role = "MachineGunner";
  icon = "iconManMG";

  weapons[] = { "arifle_RPK12_F", "hgun_Pistol_01_F", "Throw", "Put" };
  magazines[] = { LIST4("75rnd_762x39_AK12_Mag_Tracer_F"), LIST3("10Rnd_9x21_Mag"), "HandGrenade" };
  linkedItems[] = { "V_TacChestrig_grn_F", BASE_ITEMS };

  respawnWeapons[] = { "arifle_RPK12_F", "hgun_Pistol_01_F", "Throw", "Put" };
  respawnMagazines[] = { LIST4("75rnd_762x39_AK12_Mag_Tracer_F"), LIST3("10Rnd_9x21_Mag"), "HandGrenade" };
  respawnLinkedItems[] = { "V_TacChestrig_grn_F", BASE_ITEMS };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Soldier_Para_AT_F: I_C_Soldier_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_unit_I_CX_Soldier_Para_AT_F";
  side = 2;
  faction = "IND_C_F";
  editorSubcategory = "EdSubcat_Personnel_Paramilitary";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Para_AT_F.jpeg);
  model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_3_F.p3d";
  hiddenSelectionsTextures[] = {
    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_3_F_1_co.paa",
    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"
  };

  cost = 130000;
  threat[] = { 0.8, 0.8, 0.3 };
  uniformClass = "U_I_C_Soldier_Para_3_F";
  role = "MissileSpecialist";
  icon = "iconManAT";

  nameSound = "veh_infantry_AT_s";
  textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
  textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
  class SpeechVariants {
    class Default {
      speechSingular[] = { "veh_infantry_AT_s" };
      speechPlural[] = { "veh_infantry_AT_p" };
    };
  };

  backpack = "B_Kitbag_sgg_CX_Para_AT";
  weapons[] = { "arifle_AKS_F", "launch_O_Titan_short_ghex_F", "Throw", "Put" };
  magazines[] = { LIST2("30Rnd_545x39_Mag_F"), "Titan_AT" };
  linkedItems[] = { BASE_ITEMS };

  respawnWeapons[] = { "arifle_AKS_F", "launch_O_Titan_short_ghex_F", "Throw", "Put" };
  respawnMagazines[] = { LIST2("30Rnd_545x39_Mag_F"), "Titan_AT" };
  respawnLinkedItems[] = { BASE_ITEMS };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Soldier_Para_AA_F: I_C_Soldier_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_unit_I_CX_Soldier_Para_AA_F";
  side = 2;
  faction = "IND_C_F";
  editorSubcategory = "EdSubcat_Personnel_Paramilitary";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Para_AA_F.jpeg);
  model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_3_F.p3d";
  hiddenSelectionsTextures[] = {
    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_3_F_1_co.paa",
    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"
  };

  cost = 130000;
  threat[] = { 0.8, 0.1, 1 };
  uniformClass = "U_I_C_Soldier_Para_3_F";
  role = "MissileSpecialist";
  icon = "iconManAT";

  nameSound = "veh_infantry_AT_s";
  textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
  textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
  class SpeechVariants {
    class Default {
      speechSingular[] = { "veh_infantry_AT_s" };
      speechPlural[] = { "veh_infantry_AT_p" };
    };
  };

  backpack = "B_Kitbag_sgg_CX_Para_AA";
  weapons[] = { "arifle_AKS_F", "launch_O_Titan_ghex_F", "Throw", "Put" };
  magazines[] = { LIST2("30Rnd_545x39_Mag_F"), "Titan_AA" };
  linkedItems[] = { BASE_ITEMS };

  respawnWeapons[] = { "arifle_AKS_F", "launch_O_Titan_ghex_F", "Throw", "Put" };
  respawnMagazines[] = { LIST2("30Rnd_545x39_Mag_F"), "Titan_AA" };
  respawnLinkedItems[] = { BASE_ITEMS };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Crew_F: I_C_Soldier_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_B_crew_F0";
  side = 2;
  faction = "IND_C_F";
  editorSubcategory = "EdSubcat_Personnel_Paramilitary";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Crew_F.jpeg);
  model = "a3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_1_F.p3d";
  hiddenSelectionsTextures[] = {
    "a3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa",
    "a3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"
  };

  camouflage = 1.6;
  cost = 93000;
  uniformClass = "U_I_C_Soldier_Para_1_F";
  role = "Crewman";

  items[] = {};
  weapons[] = { "arifle_AKS_F", "Throw", "Put" };
  magazines[] = { LIST2("30Rnd_545x39_Mag_F") };
  linkedItems[] = { "H_Tank_black_F", BASE_ITEMS };

  respawnItems[] = {};
  respawnWeapons[] = { "arifle_AKS_F", "Throw", "Put" };
  respawnMagazines[] = { LIST2("30Rnd_545x39_Mag_F") };
  respawnLinkedItems[] = { "H_Tank_black_F", BASE_ITEMS };

  class EventHandlers: EventHandlers {
    init = "";
  };

  scope = 2;
  scopeCurator = 2;
};



class B_Kitbag_sgg;

class B_Kitbag_sgg_CX_Para_AT: B_Kitbag_sgg {
  author = "ScottyThePilot";
  scope = 1;
  class TransportMagazines {
    class _xx_30Rnd_545x39_Mag_F {
      count = 4;
      magazine = "30Rnd_545x39_Mag_F";
    };

    class _xx_Titan_AT {
      count = 2;
      magazine = "Titan_AT";
    };
  };
};

class B_Kitbag_sgg_CX_Para_AA: B_Kitbag_sgg {
  author = "ScottyThePilot";
  scope = 1;
  class TransportMagazines {
    class _xx_30Rnd_545x39_Mag_F {
      count = 4;
      magazine = "30Rnd_545x39_Mag_F";
    };

    class _xx_Titan_AA {
      count = 2;
      magazine = "Titan_AA";
    };
  };
};
