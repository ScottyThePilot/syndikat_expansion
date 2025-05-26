class I_G_Soldier_base_F;

class I_C_Soldier_base_F: I_G_Soldier_base_F {
  // Aegis overwrites the headgear list, so we overwrite it again
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
    "H_Bandanna_camo_hs", 0.5,
    "H_Cap_surfer", 1.0,
    "H_Cap_blk", 1.0,
    "H_Cap_grn", 1.0,
    "H_Cap_oli", 1.0,
    "H_Cap_tan", 1.0,
    "H_Booniehat_khk", 1.5,
    "H_Booniehat_khk_hs", 1.5,
    "H_Booniehat_oli", 1.5,
    "H_Booniehat_oli_hs", 1.5,
    "H_Booniehat_tan", 1.5,
    "H_Hat_Safari_brown_F", 2.0,
    "H_Hat_Safari_olive_F", 2.0,
    "H_Hat_Safari_sand_F", 2.0,
    "H_PASGT_basic_black_F", 3.0,
    "H_PASGT_basic_olive_F", 3.0,
    "H_PASGT_basic_green_F", 3.0,
    "H_PASGT_basic_red_F", 3.0,
    "lxWS_H_PASGT_goggles_black_F", 1.5,
    "lxWS_H_PASGT_goggles_olive_F", 1.5,
    "lxWS_H_PASGT_goggles_green_F", 1.5,
    "lxWS_H_PASGT_goggles_red_F", 1.5,
    "lxWS_H_ssh40_black", 3.0,
    "lxWS_H_ssh40_green", 3.0
  };

  CBA_facewearList[] += {
    "G_Headset_light", 1.0,
    "G_Shemag_khk", 1.0,
    "G_Shemag_oli", 1.0,
    "G_Shemag_red", 1.0,
    "G_Shemag_shades", 1.0,
    "G_Shemag_tactical", 1.0,
    "G_Shemag_tan", 1.0,
    "G_Shemag_white", 1.0
  };
};

class I_CX_Soldier_Para_Commander_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Para_Commander_F.jpeg);

  headgearList[] = {
    "H_PASGT_basic_black_F", 3.0,
    "H_PASGT_basic_olive_F", 3.0,
    "H_PASGT_basic_green_F", 3.0,
    "H_PASGT_basic_red_F", 3.0,
    "lxWS_H_PASGT_goggles_black_F", 1.5,
    "lxWS_H_PASGT_goggles_olive_F", 1.5,
    "lxWS_H_PASGT_goggles_green_F", 1.5,
    "lxWS_H_PASGT_goggles_red_F", 1.5,
    "lxWS_H_ssh40_black", 3.0,
    "lxWS_H_ssh40_green", 3.0
  };

  weapons[] = { "arifle_AK12_GL_545_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST6("1Rnd_HE_Grenade_shell") };

  respawnWeapons[] = { "arifle_AK12_GL_545_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST6("1Rnd_HE_Grenade_shell") };
};

class I_CX_Soldier_Para_Autorifleman_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_CX_Soldier_Para_Autorifleman_F.jpeg);

  weapons[] = { "Aegis_arifle_RPK12_545_F", "hgun_Pistol_01_F", "Throw", "Put" };
  magazines[] = { LIST4("Aegis_60Rnd_545x39_Mag_F"), LIST3("10Rnd_9x21_Mag"), "HandGrenade_Guer" };

  respawnWeapons[] = { "Aegis_arifle_RPK12_545_F", "hgun_Pistol_01_F", "Throw", "Put" };
  respawnMagazines[] = { LIST4("Aegis_60Rnd_545x39_Mag_F"), LIST3("10Rnd_9x21_Mag"), "HandGrenade_Guer" };
};

class I_C_Soldier_Camo_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Camo_F.jpeg);

  linkedItems[] = { "V_TacVest_grn", "Aegis_H_Milcap_nohs_grn_F", BASE_ITEMS };
  respawnLinkedItems[] = { "V_TacVest_grn", "Aegis_H_Milcap_nohs_grn_F", BASE_ITEMS };
};

class I_C_Soldier_Para_1_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_1_F.jpeg);

  weapons[] = { "arifle_AK12_545_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST2("HandGrenade_Guer") };
  linkedItems[] = { "V_TacChestrig_grn_F", BASE_ITEMS };

  respawnWeapons[] = { "arifle_AK12_545_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST2("HandGrenade_Guer") };
  respawnLinkedItems[] = { "V_TacChestrig_grn_F", BASE_ITEMS };
};

class I_C_Soldier_Para_2_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_2_F.jpeg);

  weapons[] = { "arifle_AK12_545_F", "hgun_Pistol_01_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST2("10Rnd_9x21_Mag"), LIST2("HandGrenade_Guer") };

  respawnWeapons[] = { "arifle_AK12_545_F", "hgun_Pistol_01_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST2("10Rnd_9x21_Mag"), LIST2("HandGrenade_Guer") };
};

class I_C_Soldier_Para_3_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_3_F.jpeg);

  weapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  magazines[] = { LIST2("30Rnd_545x39_Mag_F") };

  respawnWeapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  respawnMagazines[] = { LIST2("30Rnd_545x39_Mag_F") };
};

class I_C_Soldier_Para_4_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_4_F.jpeg);

  linkedItems[] = { "V_ChestrigF_blk", BASE_ITEMS };
  respawnLinkedItems[] = { "V_ChestrigF_blk", BASE_ITEMS };

  class EventHandlers;
};

class I_C_Soldier_Para_6_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_6_F.jpeg);

  weapons[] = { "arifle_AK12_GL_545_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST4("1Rnd_HE_Grenade_shell"), LIST2("HandGrenade_Guer") };
  linkedItems[] = { "V_ChestrigF_oli", BASE_ITEMS };

  respawnWeapons[] = { "arifle_AK12_GL_545_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST4("1Rnd_HE_Grenade_shell"), LIST2("HandGrenade_Guer") };
  respawnLinkedItems[] = { "V_ChestrigF_oli", BASE_ITEMS };
};

class I_C_Soldier_Para_7_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_7_F.jpeg);

  weapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Mag_F"), LIST2("HandGrenade_Guer") };
  linkedItems[] = { "V_TacChestrig_grn_F", BASE_ITEMS };

  respawnWeapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Mag_F"), LIST2("HandGrenade_Guer") };
  respawnLinkedItems[] = { "V_TacChestrig_grn_F", BASE_ITEMS };
};

class I_C_Soldier_Para_8_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Para_8_F.jpeg);

  weapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  magazines[] = { LIST2("30Rnd_545x39_Mag_F") };

  respawnWeapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  respawnMagazines[] = { LIST2("30Rnd_545x39_Mag_F") };
};

class I_C_Soldier_Bandit_4_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Bandit_4_F.jpeg);

  weapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Mag_F"), LIST2("MiniGrenade") };

  respawnWeapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Mag_F"), LIST2("MiniGrenade") };

  class EventHandlers: EventHandlers {
    init = "";
  };
};

class I_C_Soldier_Bandit_5_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Bandit_5_F.jpeg);

  weapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Mag_F"), LIST2("MiniGrenade") };

  respawnWeapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Mag_F"), LIST2("MiniGrenade") };
};

class I_C_Soldier_Bandit_6_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Soldier_Bandit_6_F.jpeg);

  weapons[] = { "arifle_AK12_GL_545_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST6("1Rnd_HE_Grenade_shell") };

  respawnWeapons[] = { "arifle_AK12_GL_545_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST6("1Rnd_HE_Grenade_shell") };
};

class I_C_Soldier_base_unarmed_F: I_C_Soldier_base_F {
  linkedItems[] = { "V_TacChestrig_grn_F", BASE_ITEMS };
  respawnLinkedItems[] = { "V_TacChestrig_grn_F", BASE_ITEMS };
};

class I_C_Sharpshooter_F: I_C_Soldier_base_F {
  editorPreview = QPATHTO(data\editorpreviews\I_C_Sharpshooter_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_2;

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

  linkedItems[] = { "V_ChestrigF_oli", BASE_ITEMS };
  respawnLinkedItems[] = { "V_ChestrigF_oli", BASE_ITEMS };
};

class Aegis_I_C_Soldier_UAV_lxWS: I_C_Soldier_Para_1_F {
  editorPreview = QPATHTO(data\editorpreviews\Aegis_I_C_Soldier_UAV_lxWS.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_1;

  linkedItems[] = { "Aegis_V_ChestrigEast_oli_F", "I_UAVTerminal", BASE_ITEMS };
  respawnLinkedItems[] = { "Aegis_V_ChestrigEast_oli_F", "I_UAVTerminal", BASE_ITEMS };
};

class Aegis_I_C_Soldier_TechSpec_F: I_C_Soldier_Para_1_F {
  editorPreview = QPATHTO(data\editorpreviews\Aegis_I_C_Soldier_TechSpec_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_SWEATER;

  linkedItems[] = { "Aegis_V_ChestrigEast_oli_F", "I_UAVTerminal", BASE_ITEMS };
  respawnLinkedItems[] = { "Aegis_V_ChestrigEast_oli_F", "I_UAVTerminal", BASE_ITEMS };
};

class Aegis_I_C_HeavyGunner_Para_F: I_C_Soldier_Para_4_F {
  UNIFORM_PROPERTIES_SOLDIER_PARA_2;

  linkedItems[] = { "V_ChestrigF_oli", "Aegis_H_Milcap_nohs_grn_F", "G_Aviator", BASE_ITEMS };
  respawnLinkedItems[] = { "V_ChestrigF_oli", "Aegis_H_Milcap_nohs_grn_F", "G_Aviator", BASE_ITEMS };
};

class Aegis_I_C_Soldier_M_Para_F: I_C_Sharpshooter_F {
  UNIFORM_PROPERTIES_SOLDIER_PARA_2;

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

  linkedItems[] = { "V_TacVest_grn", BASE_ITEMS };
  respawnLinkedItems[] = { "V_TacVest_grn", BASE_ITEMS };
};



class B_Kitbag_rgr;

class B_Kitbag_rgr_Para_3_F: B_Kitbag_rgr {
  class TransportMagazines {
    delete _xx_30Rnd_762x39_Mag_F;
    class _xx_30Rnd_545x39_Mag_F {
      magazine = "30Rnd_545x39_Mag_F";
      count = 4;
    };
  };
};

class B_Kitbag_rgr_Para_8_F: B_Kitbag_rgr {
  class TransportMagazines {
    delete _xx_30Rnd_762x39_Mag_F;
    class _xx_30Rnd_545x39_Mag_F {
      magazine = "30Rnd_545x39_Mag_F";
      count = 4;
    };
  };
};
