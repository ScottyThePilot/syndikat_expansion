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
    "H_Hat_Safari_brown_F", 2.0,
    "H_Hat_Safari_olive_F", 2.0,
    "H_Hat_Safari_sand_F", 2.0,
    "H_PASGT_basic_black_F", 3.0,
    "H_PASGT_basic_olive_F", 3.0,
    "H_PASGT_basic_red_F", 3.0
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

class I_C_Soldier_Camo_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Camo_F.jpeg);

  camouflage = 1.6;
  cost = 250000;
  role = "Rifleman";
  icon = "iconManOfficer";

  nameSound = "veh_infantry_officer_s";
  textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
  textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
  class SpeechVariants {
    class Default {
      speechSingular[] = { "veh_infantry_officer_s" };
      speechPlural[] = { "veh_infantry_officer_p" };
    };
  };

  linkedItems[] = { "V_TacVest_blk", "H_MilCap_gry", BASE_ITEMS };
  respawnLinkedItems[] = { "V_TacVest_blk", "H_MilCap_gry", BASE_ITEMS };
};

class I_C_Soldier_Para_1_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_1_F.jpeg);

  linkedItems[] = { "V_Chestrig_rgr", BASE_ITEMS };
  respawnLinkedItems[] = { "V_Chestrig_rgr", BASE_ITEMS };
};

class I_C_Soldier_Para_2_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_2_F.jpeg);
};

class I_C_Soldier_Para_3_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_3_F.jpeg);
};

class I_C_Soldier_Para_4_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_4_F.jpeg);
};

class I_C_Soldier_Para_5_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_5_F.jpeg);

  backpack = "B_Kitbag_rgr_CX_Para_5_F";
};

class I_C_Soldier_Para_6_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_6_F.jpeg);

  linkedItems[] = { "V_Chestrig_rgr", BASE_ITEMS };
  respawnLinkedItems[] = { "V_Chestrig_rgr", BASE_ITEMS };
};

class I_C_Soldier_Para_7_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_7_F.jpeg);

  linkedItems[] = { "V_Chestrig_rgr", BASE_ITEMS };
  respawnLinkedItems[] = { "V_Chestrig_rgr", BASE_ITEMS };
};

class I_C_Soldier_Para_8_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_8_F.jpeg);
};

class I_C_Soldier_base_unarmed_F: I_C_Soldier_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgVehicles_I_C_Soldier_base_unarmed_F";
  side = 2;
  faction = "IND_C_F";
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_8_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_1;

  linkedItems[] = { "V_Chestrig_rgr", BASE_ITEMS };
  respawnLinkedItems[] = { "V_Chestrig_rgr", BASE_ITEMS };

  scope = 2;
  scopeCurator = 2;
};

// Not really sure why these extra "Soldier (Rifle)" and "Soldier" units
// show up in Zeus but not 3DEN, so we're just gonna hide him in Zeus

class SyndikatSoldier_Default: I_C_Soldier_Para_1_F {
  scopeCurator = 0;
};

class I_C_Soldier_universal_F: I_C_Soldier_Para_1_F {
  scopeCurator = 0;
};

class I_CX_Soldier_Para_Sweater_F: I_C_Soldier_base_F {
  author = "ScottyThePilot";
  UNIFORM_PROPERTIES_SOLDIER_SWEATER;

  scope = 1;
  scopeCurator = 1;
};

class I_CX_Soldier_Para_Commander_F: I_C_Soldier_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgVehicles_I_CX_Soldier_Para_Commander_F";
  side = 2;
  faction = "IND_C_F";
  editorSubcategory = "EdSubcat_Personnel_Paramilitary";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Para_Commander_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_1;
  camouflage = 1.4;
  cost = 250000;
  role = "Grenadier";
  icon = "iconManLeader";

  weapons[] = { "arifle_AK12_GL_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_762x39_AK12_Mag_F"), LIST6("1Rnd_HE_Grenade_shell") };
  linkedItems[] = { "H_PASGT_basic_olive_F", "V_TacVest_blk", BASE_ITEMS };

  respawnWeapons[] = { "arifle_AK12_GL_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_762x39_AK12_Mag_F"), LIST6("1Rnd_HE_Grenade_shell") };
  respawnLinkedItems[] = { "H_PASGT_basic_olive_F", "V_TacVest_blk", BASE_ITEMS };

  headgearList[] = {
    "H_PASGT_basic_black_F", 3.0,
    "H_PASGT_basic_olive_F", 3.0,
    "H_PASGT_basic_red_F", 3.0
  };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Soldier_Para_Marksman_F: I_C_Soldier_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgVehicles_I_CX_Soldier_Para_Marksman_F";
  side = 2;
  faction = "IND_C_F";
  editorSubcategory = "EdSubcat_Personnel_Paramilitary";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Para_Marksman_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_SWEATER;
  cost = 250000;
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
    "H_Booniehat_IND_CX", 1.5,
    "H_Booniehat_IND_CX_hs", 1.5,
    "H_Hat_Safari_brown_F", 2.0,
    "H_Hat_Safari_olive_F", 2.0,
    "H_Hat_Safari_sand_F", 2.0
  };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Soldier_Para_Autorifleman_F: I_C_Soldier_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgVehicles_I_CX_Soldier_Para_Autorifleman_F";
  side = 2;
  faction = "IND_C_F";
  editorSubcategory = "EdSubcat_Personnel_Paramilitary";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Para_Autorifleman_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_1;
  role = "MachineGunner";
  icon = "iconManMG";

  nameSound = "veh_infantry_MG_s";
  textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
  textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
  class SpeechVariants {
    class Default {
      speechSingular[] = { "veh_infantry_MG_s" };
      speechPlural[] = { "veh_infantry_MG_p" };
    };
  };

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
  displayName = "$STR_sct_CfgVehicles_I_CX_Soldier_Para_AT_F";
  side = 2;
  faction = "IND_C_F";
  editorSubcategory = "EdSubcat_Personnel_Paramilitary";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Para_AT_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_3;
  cost = 130000;
  threat[] = { 0.8, 0.8, 0.3 };
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
  displayName = "$STR_sct_CfgVehicles_I_CX_Soldier_Para_AA_F";
  side = 2;
  faction = "IND_C_F";
  editorSubcategory = "EdSubcat_Personnel_Paramilitary";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Para_AA_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_3;
  cost = 130000;
  threat[] = { 0.8, 0.1, 1 };
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
  UNIFORM_PROPERTIES_SOLDIER_PARA_1;
  camouflage = 1.6;
  cost = 93000;
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

class I_CX_Soldier_Elite_base_F: I_C_Soldier_base_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_C_F";
  editorSubcategory = "EdSubcat_Personnel_SpecialForces";

  headgearList[] = {
    "H_PASGT_basic_black_F", 3.0,
    "H_PASGT_basic_olive_F", 3.0,
    "H_PASGT_basic_red_F", 3.0
  };

  scope = 0;
  scopeCurator = 0;
};

class I_CX_Soldier_Elite_Officer_F: I_CX_Soldier_Elite_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_Lieutenant";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Elite_Officer_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_CAMO;
  camouflage = 1.6;
  cost = 250000;
  role = "Rifleman";
  icon = "iconManOfficer";

  nameSound = "veh_infantry_officer_s";
  textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
  textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
  class SpeechVariants {
    class Default {
      speechSingular[] = { "veh_infantry_officer_s" };
      speechPlural[] = { "veh_infantry_officer_p" };
    };
  };

  backpack = "B_RadioBag_01_black_F";
  weapons[] = { "arifle_AK12U_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_762x39_AK12_Mag_F"), LIST2("HandGrenade") };
  linkedItems[] = { "H_BeretPeaked_red", "V_TacVest_blk", BASE_ITEMS };

  respawnWeapons[] = { "arifle_AK12U_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_762x39_AK12_Mag_F"), LIST2("HandGrenade") };
  respawnLinkedItems[] = { "H_BeretPeaked_red", "V_TacVest_blk", BASE_ITEMS };

  class EventHandlers: EventHandlers {
    init = "";
  };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Soldier_Elite_TeamLeader_F: I_CX_Soldier_Elite_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_Sergeant";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Elite_TeamLeader_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_2;
  camouflage = 1.4;
  cost = 250000;
  role = "Grenadier";
  icon = "iconManLeader";

  weapons[] = { "arifle_AK12_GL_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_762x39_AK12_Mag_F"), LIST6("1Rnd_HE_Grenade_shell") };
  linkedItems[] = { "H_PASGT_basic_olive_F", "V_PlateCarrier2_IND_CX", BASE_ITEMS };

  respawnWeapons[] = { "arifle_AK12_GL_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_762x39_AK12_Mag_F"), LIST6("1Rnd_HE_Grenade_shell") };
  respawnLinkedItems[] = { "H_PASGT_basic_olive_F", "V_PlateCarrier2_IND_CX", BASE_ITEMS };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Soldier_Elite_Gunner_F: I_CX_Soldier_Elite_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_A3_CfgVehicles_B_Patrol_Soldier_MG_F0";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Elite_Gunner_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_1;
  cost = 220000;
  role = "MachineGunner";
  icon = "iconManMG";

  nameSound = "veh_infantry_MG_s";
  textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
  textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
  class SpeechVariants {
    class Default {
      speechSingular[] = { "veh_infantry_MG_s" };
      speechPlural[] = { "veh_infantry_MG_p" };
    };
  };

  weapons[] = { "arifle_RPK12_F", "hgun_Pistol_01_F", "Throw", "Put" };
  magazines[] = { LIST4("75rnd_762x39_AK12_Mag_Tracer_F"), LIST3("10Rnd_9x21_Mag"), "HandGrenade" };
  linkedItems[] = { "H_PASGT_basic_olive_F", "V_PlateCarrier2_IND_CX", BASE_ITEMS };

  respawnWeapons[] = { "arifle_RPK12_F", "hgun_Pistol_01_F", "Throw", "Put" };
  respawnMagazines[] = { LIST4("75rnd_762x39_AK12_Mag_Tracer_F"), LIST3("10Rnd_9x21_Mag"), "HandGrenade" };
  respawnLinkedItems[] = { "H_PASGT_basic_olive_F", "V_PlateCarrier2_IND_CX", BASE_ITEMS };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Soldier_Elite_Sniper_F: I_CX_Soldier_Elite_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_A3_cfgVehicles_B_Sharpshooter_F0";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Elite_Sniper_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_SWEATER;
  role = "Marksman";

  nameSound = "veh_infantry_sniper_s";
  textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
  textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
  class SpeechVariants {
    class Default {
      speechSingular[] = { "veh_infantry_sniper_s" };
      speechPlural[] = { "veh_infantry_sniper_p" };
    };
  };

  weapons[] = { "srifle_DMR_06_camo_khs_F", "Throw", "Put", "Binocular" };
  magazines[] = { LIST6("20Rnd_762x51_Mag"), "HandGrenade" };
  linkedItems[] = { "H_PASGT_basic_olive_F", "V_PlateCarrier1_IND_CX", BASE_ITEMS };

  respawnWeapons[] = { "srifle_DMR_06_camo_khs_F", "Throw", "Put", "Binocular" };
  respawnMagazines[] = { LIST6("20Rnd_762x51_Mag"), "HandGrenade" };
  respawnLinkedItems[] = { "H_PASGT_basic_olive_F", "V_PlateCarrier1_IND_CX", BASE_ITEMS };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Soldier_Elite_Scout_F: I_CX_Soldier_Elite_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_A3_B_CTRG_Soldier_tna_F0";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Elite_Scout_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_3;
  role = "Rifleman";

  weapons[] = { "arifle_AK12_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_762x39_AK12_Mag_F"), LIST2("HandGrenade") };
  linkedItems[] = { "H_PASGT_basic_olive_F", "V_PlateCarrier1_IND_CX", BASE_ITEMS };

  respawnWeapons[] = { "arifle_AK12_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_762x39_AK12_Mag_F"), LIST2("HandGrenade") };
  respawnLinkedItems[] = { "H_PASGT_basic_olive_F", "V_PlateCarrier1_IND_CX", BASE_ITEMS };

  scope = 2;
  scopeCurator = 2;
};

class I_CX_Soldier_Elite_Scout_LAT_F: I_CX_Soldier_Elite_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_A3_B_CTRG_Soldier_LAT_tna_F0";
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Elite_Scout_LAT_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_3;
  cost = 130000;
  threat[] = { 0.8, 0.8, 0.3 };
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

  backpack = "B_Kitbag_rgr_CX_Para_5_F";
  weapons[] = { "arifle_AK12U_F", "launch_RPG7_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_762x39_AK12_Mag_F"), LIST2("HandGrenade") };
  linkedItems[] = { "H_PASGT_basic_olive_F", "V_PlateCarrier1_IND_CX", BASE_ITEMS };

  respawnWeapons[] = { "arifle_AK12U_F", "launch_RPG7_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_762x39_AK12_Mag_F"), LIST2("HandGrenade") };
  respawnLinkedItems[] = { "H_PASGT_basic_olive_F", "V_PlateCarrier1_IND_CX", BASE_ITEMS };

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

class B_Kitbag_rgr;

class B_Kitbag_rgr_CX_Para_5_F: B_Kitbag_rgr {
  author = "ScottyThePilot";
  scope = 1;

  class TransportMagazines {
    class _xx_30Rnd_545x39_Mag_F {
      magazine = "30Rnd_545x39_Mag_F";
      count = 4;
    };

    class _xx_RPG7_F {
      magazine = "RPG7_F";
      count = 3;
    };
  };
};
