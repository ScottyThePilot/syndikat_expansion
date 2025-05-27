class I_C_Soldier_Camo_F;
class I_C_Soldier_Para_1_F;
class I_C_Soldier_Para_2_F;
class I_C_Soldier_Para_3_F;
class I_C_Soldier_Para_4_F;
class I_C_Soldier_Para_5_F;
class I_C_Soldier_Para_6_F;
class I_C_Soldier_Para_7_F;
class I_C_Soldier_Para_8_F;
class I_C_Helipilot_F;
class I_C_Soldier_base_unarmed_F;
class I_CX_Soldier_Para_Sweater_F;
class I_CX_Soldier_Para_Marksman_F;
class I_CX_Soldier_Para_Autorifleman_F;
class I_CX_Soldier_Para_AT_F;
class I_CX_Soldier_Para_AA_F;
class I_CX_Crew_F;
class I_G_Soldier_base_F;



class I_C_Soldier_base_F: I_G_Soldier_base_F {
  headgearList[] += {
    "H_PASGT_basic_brown_F", 3.0
  };
};

class I_CX_Soldier_Para_Commander_F: I_C_Soldier_base_F {
  headgearList[] += {
    "H_PASGT_basic_brown_F", 3.0
  };
};

class I_CX_Soldier_Elite_base_F: I_C_Soldier_base_F {
  headgearList[] += {
    "H_PASGT_basic_brown_F", 3.0
  };
};

class I_BD_Soldier_Camo_F: I_C_Soldier_Camo_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Camo_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_CAMO;

  linkedItems[] = { "V_TacVest_blk", "H_MilCap_gry", BASE_ITEMS };
  respawnLinkedItems[] = { "V_TacVest_blk", "H_MilCap_gry", BASE_ITEMS };
};

class I_BD_Soldier_Para_1_F: I_C_Soldier_Para_1_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_1_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_1;

  linkedItems[] = { "V_Chestrig_khk", BASE_ITEMS };
  respawnLinkedItems[] = { "V_Chestrig_khk", BASE_ITEMS };
};

class I_BD_Soldier_Para_2_F: I_C_Soldier_Para_2_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_2_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_2;

  linkedItems[] = { "V_TacVest_brn", BASE_ITEMS };
  respawnLinkedItems[] = { "V_TacVest_brn", BASE_ITEMS };
};

class I_BD_Soldier_Para_3_F: I_C_Soldier_Para_3_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_3_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_3;

  backpack = "B_Kitbag_cbr_BD_Para_3_F";
};

class I_BD_Soldier_Para_4_F: I_C_Soldier_Para_4_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_4_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_4;
};

class I_BD_Soldier_Para_5_F: I_C_Soldier_Para_5_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_5_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_5;

  backpack = "B_Kitbag_cbr_Para_5_F";
};

class I_BD_Soldier_Para_6_F: I_C_Soldier_Para_6_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_6_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_1;

  linkedItems[] = { "V_Chestrig_khk", BASE_ITEMS };
  respawnLinkedItems[] = { "V_Chestrig_khk", BASE_ITEMS };
};

class I_BD_Soldier_Para_7_F: I_C_Soldier_Para_7_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_7_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_4;

  linkedItems[] = { "V_Chestrig_khk", BASE_ITEMS };
  respawnLinkedItems[] = { "V_Chestrig_khk", BASE_ITEMS };
};

class I_BD_Soldier_Para_8_F: I_C_Soldier_Para_8_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_8_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_2;

  backpack = "B_Kitbag_cbr_BD_Para_8_F";
};

class I_BD_Helipilot_F: I_C_Helipilot_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Helipilot_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_1;
};

class I_BD_Soldier_base_unarmed_F: I_C_Soldier_base_unarmed_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_base_unarmed_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_1;

  linkedItems[] = { "V_Chestrig_khk", BASE_ITEMS };
  respawnLinkedItems[] = { "V_Chestrig_khk", BASE_ITEMS };

  scope = 2;
  scopeCurator = 2;
};

class I_BD_Soldier_Para_Sweater_F: I_CX_Soldier_Para_Sweater_F {
  author = "ScottyThePilot";
  UNIFORM_PROPERTIES_SOLDIER_SWEATER;

  scope = 1;
  scopeCurator = 1;
};

class I_BD_Soldier_Para_Commander_F: I_CX_Soldier_Para_Commander_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_Commander_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_1;

  linkedItems[] = { "H_PASGT_basic_brown_F", "V_TacVest_blk", BASE_ITEMS };
  respawnLinkedItems[] = { "H_PASGT_basic_brown_F", "V_TacVest_blk", BASE_ITEMS };
};

class I_BD_Soldier_Para_Marksman_F: I_CX_Soldier_Para_Marksman_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_Marksman_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_SWEATER;

  linkedItems[] = { "V_Chestrig_khk", BASE_ITEMS };
  respawnLinkedItems[] = { "V_Chestrig_khk", BASE_ITEMS };

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
};

class I_BD_Soldier_Para_Autorifleman_F: I_CX_Soldier_Para_Autorifleman_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_Autorifleman_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_1;

  linkedItems[] = { "V_TacChestrig_cbr_F", BASE_ITEMS };
  respawnLinkedItems[] = { "V_TacChestrig_cbr_F", BASE_ITEMS };
};

class I_BD_Soldier_Para_AT_F: I_CX_Soldier_Para_AT_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_AT_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_3;

  backpack = "B_Kitbag_tan_BD_Para_AT";
  weapons[] = { "arifle_AKS_F", "launch_O_Titan_short_F", "Throw", "Put" };
  respawnWeapons[] = { "arifle_AKS_F", "launch_O_Titan_short_F", "Throw", "Put" };
};

class I_BD_Soldier_Para_AA_F: I_CX_Soldier_Para_AA_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Soldier_Para_AA_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_3;

  backpack = "B_Kitbag_tan_BD_Para_AA";
  weapons[] = { "arifle_AKS_F", "launch_O_Titan_F", "Throw", "Put" };
  respawnWeapons[] = { "arifle_AKS_F", "launch_O_Titan_F", "Throw", "Put" };
};

class I_BD_Crew_F: I_CX_Crew_F {
  author = "ScottyThePilot";
  side = 2;
  faction = "IND_BD_F";
  editorPreview = QPATHTO(data\editorpreviews\I_BD_Crew_F.jpeg);
  UNIFORM_PROPERTIES_SOLDIER_PARA_1;
};



class B_Kitbag_tan;

class B_Kitbag_tan_BD_Para_AT: B_Kitbag_tan {
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

class B_Kitbag_tan_BD_Para_AA: B_Kitbag_tan {
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

class B_Kitbag_cbr;

class B_Kitbag_cbr_BD_Para_3_F: B_Kitbag_cbr {
  author = "ScottyThePilot";
  scope = 1;

  class TransportMagazines {
    class _xx_30Rnd_762x39_Mag_F {
      magazine = "30Rnd_762x39_Mag_F";
      count = 4;
    };
  };

  class TransportItems {
    class _xx_Medikit {
      name = "Medikit";
      count = 1;
    };

    class _xx_FirstAidKit {
      name = "FirstAidKit";
      count = 4;
    };
  };
};

class B_Kitbag_cbr_BD_Para_8_F: B_Kitbag_cbr {
  author = "ScottyThePilot";
  scope = 1;

  class TransportMagazines {
    class _xx_30Rnd_762x39_Mag_F {
      magazine = "30Rnd_762x39_Mag_F";
      count = 4;
    };

    class _xx_DemoCharge_Remote_Mag {
      magazine = "DemoCharge_Remote_Mag";
      count = 3;
    };

    class _xx_SatchelCharge_Remote_Mag {
      magazine = "SatchelCharge_Remote_Mag";
      count = 1;
    };
  };

  class TransportItems {
    class _xx_ToolKit {
      name = "ToolKit";
      count = 1;
    };
  };
};
