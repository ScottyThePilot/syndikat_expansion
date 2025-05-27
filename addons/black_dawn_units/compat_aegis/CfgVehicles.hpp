class I_C_Soldier_Camo_F;
class I_C_Soldier_Para_1_F;
class I_C_Soldier_Para_2_F;
class I_C_Soldier_Para_3_F;
class I_C_Soldier_Para_4_F;
class I_C_Soldier_Para_5_F;
class I_C_Soldier_Para_6_F;
class I_C_Soldier_Para_7_F;
class I_C_Soldier_Para_8_F;
class I_C_Soldier_base_unarmed_F;
class I_C_Sharpshooter_F;
class Aegis_I_C_Soldier_UAV_lxWS;
class Aegis_I_C_Soldier_TechSpec_F;
class Aegis_I_C_HeavyGunner_Para_F;
class Aegis_I_C_Soldier_M_Para_F;
class I_G_Soldier_base_F;



class I_C_Soldier_base_F: I_G_Soldier_base_F {
  // The western sahara items get re-added because we
  // overwrote the headgear list previously in another addon
  headgearList[] += {
    "H_PASGT_basic_sand_F", 3.0,
    "H_PASGT_goggles_sand_F", 1.5,
    "H_PASGT_basic_brown_F", 3.0,
    "lxWS_H_PASGT_goggles_brown_F", 1.5,
    "lxWS_H_ssh40_sand", 3.0
  };
};

class I_CX_Soldier_Para_Commander_F: I_C_Soldier_base_F {
  headgearList[] += {
    "H_PASGT_basic_sand_F", 3.0,
    "H_PASGT_goggles_sand_F", 1.5,
    "H_PASGT_basic_brown_F", 3.0,
    "lxWS_H_PASGT_goggles_brown_F", 1.5,
    "lxWS_H_ssh40_sand", 3.0
  };
};

class I_CX_Soldier_Elite_base_F: I_C_Soldier_base_F {
  headgearList[] += {
    "H_PASGT_basic_sand_F", 3.0,
    "H_PASGT_goggles_sand_F", 1.5,
    "H_PASGT_basic_brown_F", 3.0,
    "lxWS_H_PASGT_goggles_brown_F", 1.5,
    "lxWS_H_ssh40_sand", 3.0
  };
};

class I_BD_Soldier_Camo_F: I_C_Soldier_Camo_F {
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Camo_F.jpeg);

  linkedItems[] = { "V_TacVest_brn", "Aegis_H_MilCap_nohs_tan", BASE_ITEMS };
  respawnLinkedItems[] = { "V_TacVest_brn", "Aegis_H_MilCap_nohs_tan", BASE_ITEMS };
};

class I_BD_Soldier_Para_1_F: I_C_Soldier_Para_1_F {
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_1_F.jpeg);

  linkedItems[] = { "V_TacChestrig_cbr_F", BASE_ITEMS };
  respawnLinkedItems[] = { "V_TacChestrig_cbr_F", BASE_ITEMS };
};

class I_BD_Soldier_Para_2_F: I_C_Soldier_Para_2_F {
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_2_F.jpeg);
};

class I_BD_Soldier_Para_3_F: I_C_Soldier_Para_3_F {
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_3_F.jpeg);
};

class I_BD_Soldier_Para_4_F: I_C_Soldier_Para_4_F {
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_4_F.jpeg);
};

class I_BD_Soldier_Para_6_F: I_C_Soldier_Para_6_F {
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_6_F.jpeg);

  linkedItems[] = { "V_ChestrigF_khk", BASE_ITEMS };
  respawnLinkedItems[] = { "V_ChestrigF_khk", BASE_ITEMS };
};

class I_BD_Soldier_Para_7_F: I_C_Soldier_Para_7_F {
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_7_F.jpeg);

  linkedItems[] = { "V_TacChestrig_cbr_F", BASE_ITEMS };
  respawnLinkedItems[] = { "V_TacChestrig_cbr_F", BASE_ITEMS };
};

class I_BD_Soldier_Para_8_F: I_C_Soldier_Para_8_F {
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_8_F.jpeg);
};

class I_BD_Soldier_base_unarmed_F: I_C_Soldier_base_unarmed_F {
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_base_unarmed_F.jpeg);

  linkedItems[] = { "V_TacChestrig_cbr_F", BASE_ITEMS };
  respawnLinkedItems[] = { "V_TacChestrig_cbr_F", BASE_ITEMS };
};

class I_BD_Sharpshooter_F: I_C_Sharpshooter_F {
  side = 2;
  faction = "IND_BD_F";

  editorPreview = QPATHTO(data\editorpreviews\I_BD_Sharpshooter_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_2;

  headgearList[] = {
    "H_Booniehat_khk", 1.5,
    "H_Booniehat_oli", 1.5,
    "H_Booniehat_tan", 1.5,
    "H_Booniehat_IND_BD", 1.5,
    "H_Booniehat_IND_BD_hs", 1.5,
    "H_Hat_Safari_brown_F", 2.0,
    "H_Hat_Safari_olive_F", 2.0,
    "H_Hat_Safari_sand_F", 2.0
  };

  linkedItems[] = { "V_ChestrigF_khk", BASE_ITEMS };
  respawnLinkedItems[] = { "V_ChestrigF_khk", BASE_ITEMS };
};

class Aegis_I_BD_Soldier_UAV_lxWS: Aegis_I_C_Soldier_UAV_lxWS {
  side = 2;
  faction = "IND_BD_F";

  editorPreview = QPATHTO(data\editorpreviews\Aegis_I_BD_Soldier_UAV_lxWS.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_1;

  linkedItems[] = { "Aegis_V_ChestrigEast_khk_F", BASE_ITEMS };
  respawnLinkedItems[] = { "Aegis_V_ChestrigEast_khk_F", BASE_ITEMS };
};

class Aegis_I_BD_Soldier_TechSpec_F: Aegis_I_C_Soldier_TechSpec_F {
  side = 2;
  faction = "IND_BD_F";

  editorPreview = QPATHTO(data\editorpreviews\Aegis_I_BD_Soldier_TechSpec_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_SWEATER;

  backpack = "B_Kitbag_cbr_I_BD_TechSpec";
  linkedItems[] = { "Aegis_V_ChestrigEast_khk_F", "I_UAVTerminal", BASE_ITEMS };
  respawnLinkedItems[] = { "Aegis_V_ChestrigEast_khk_F", "I_UAVTerminal", BASE_ITEMS };
};

class Aegis_I_BD_HeavyGunner_Para_F: Aegis_I_C_HeavyGunner_Para_F {
  side = 2;
  faction = "IND_BD_F";

  editorPreview = QPATHTO(data\editorpreviews\Aegis_I_BD_HeavyGunner_Para_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_2;

  backpack = "Aegis_B_FieldPack_khk_I_BD_HG";
  linkedItems[] = { "V_ChestrigF_khk", "Aegis_H_MilCap_nohs_tan", "G_Aviator", BASE_ITEMS };
  respawnLinkedItems[] = { "V_ChestrigF_khk", "Aegis_H_MilCap_nohs_tan", "G_Aviator", BASE_ITEMS };
};

class Aegis_I_BD_Soldier_M_Para_F: Aegis_I_C_Soldier_M_Para_F {
  side = 2;
  faction = "IND_BD_F";

  editorPreview = QPATHTO(data\editorpreviews\Aegis_I_BD_Soldier_M_Para_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_2;

  headgearList[] = {
    "H_Booniehat_khk", 1.5,
    "H_Booniehat_oli", 1.5,
    "H_Booniehat_tan", 1.5,
    "H_Booniehat_IND_BD", 1.5,
    "H_Booniehat_IND_BD_hs", 1.5,
    "H_Hat_Safari_brown_F", 2.0,
    "H_Hat_Safari_olive_F", 2.0,
    "H_Hat_Safari_sand_F", 2.0
  };

  linkedItems[] = { "V_TacVest_brn", BASE_ITEMS };
  respawnLinkedItems[] = { "V_TacVest_brn", BASE_ITEMS };
};



class B_Kitbag_cbr;

class B_Kitbag_cbr_BD_Para_3_F: B_Kitbag_cbr {
  class TransportMagazines {
    delete _xx_30Rnd_762x39_Mag_F;
    class _xx_30Rnd_545x39_Mag_F {
      magazine = "30Rnd_545x39_Mag_F";
      count = 4;
    };
  };
};

class B_Kitbag_cbr_BD_Para_8_F: B_Kitbag_cbr {
  class TransportMagazines {
    delete _xx_30Rnd_762x39_Mag_F;
    class _xx_30Rnd_545x39_Mag_F {
      magazine = "30Rnd_545x39_Mag_F";
      count = 4;
    };
  };
};



class B_FieldPack_khk;

class Aegis_B_FieldPack_khk_I_BD_HG: B_FieldPack_khk {
  author = "ScottyThePilot";
  scope = 1;

  class TransportMagazines {
    class _xx_Aegis_200Rnd_762x51_MAG_Yellow_F {
      magazine = "Aegis_200Rnd_762x51_MAG_Yellow_F";
      count = 1;
    };

    class _xx_Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F {
      magazine = "Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F";
      count = 1;
    };
  };
};

class B_Kitbag_cbr_I_BD_TechSpec: B_Kitbag_cbr {
  author = "ScottyThePilot";
  scope = 1;

  class TransportItems {
    class _xx_ToolKit {
      name = "ToolKit";
      count = 1;
    };
  };
};
