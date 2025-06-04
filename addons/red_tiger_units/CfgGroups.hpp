class Infantry {
  name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";

  class ParaCombatGroup {
    class Unit0 {
      vehicle = "I_CX_Soldier_Para_Commander_F";
    };

    class Unit4 {
      vehicle = "I_CX_Soldier_Para_Marksman_F";
    };
  };

  class ParaFireTeam {
    class Unit1 {
      vehicle = "I_CX_Soldier_Para_Autorifleman_F";
    };
  };

  class I_CX_ParaMarksmanTeam {
    name = "$STR_sct_CfgGroups_I_CX_ParaMarksmanTeam";
    side = 2;
    faction = "IND_C_F";
    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

    class Unit0 {
      side = 2;
      vehicle = "I_CX_Soldier_Para_Commander_F";
      rank = "SERGEANT";
      position[] = { 0, 0, 0 };
    };

    class Unit1 {
      side = 2;
      vehicle = "I_CX_Soldier_Para_Marksman_F";
      rank = "CORPORAL";
      position[] = { 5, -5, 0 };
    };

    class Unit2 {
      side = 2;
      vehicle = "I_C_Soldier_Para_7_F";
      rank = "PRIVATE";
      position[] = { -5, -5, 0};
    };

    class Unit3 {
      side = 2;
      vehicle = "I_C_Soldier_Para_3_F";
      rank = "PRIVATE";
      position[] = { 10, -10, 0};
    };
  };

  class I_CX_ParaTeamAA {
    name = "$STR_sct_CfgGroups_I_CX_ParaTeamAA";
    side = 2;
    faction = "IND_C_F";
    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

    class Unit0 {
      side = 2;
      vehicle = "I_C_Soldier_Para_2_F";
      rank = "SERGEANT";
      position[] = { 0, 0, 0 };
    };

    class Unit1 {
      side = 2;
      vehicle = "I_CX_Soldier_Para_AA_F";
      rank = "CORPORAL";
      position[] = { 5, -5, 0 };
    };

    class Unit2 {
      side = 2;
      vehicle = "I_CX_Soldier_Para_AA_F";
      rank = "PRIVATE";
      position[] = { -5, -5, 0 };
    };

    class Unit3 {
      side = 2;
      vehicle = "I_C_Soldier_Para_7_F";
      rank = "PRIVATE";
      position[] = { 10, -10, 0 };
    };
  };

  class I_CX_ParaTeamAT {
    name = "$STR_sct_CfgGroups_I_CX_ParaTeamAT";
    side = 2;
    faction = "IND_C_F";
    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

    class Unit0 {
      side = 2;
      vehicle = "I_C_Soldier_Para_2_F";
      rank = "SERGEANT";
      position[] = { 0, 0, 0 };
    };

    class Unit1 {
      side = 2;
      vehicle = "I_CX_Soldier_Para_AT_F";
      rank = "CORPORAL";
      position[] = { 5, -5, 0 };
    };

    class Unit2 {
      side = 2;
      vehicle = "I_CX_Soldier_Para_AT_F";
      rank = "PRIVATE";
      position[] = { -5, -5, 0 };
    };

    class Unit3 {
      side = 2;
      vehicle = "I_C_Soldier_Para_7_F";
      rank = "PRIVATE";
      position[] = { 10, -10, 0 };
    };
  };

  class I_CX_ParaAssaultGroup {
    name = "$STR_sct_CfgGroups_I_CX_ParaAssaultGroup";
    side = 2;
    faction = "IND_C_F";
    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

    class Unit0 {
      side = 2;
      vehicle = "I_CX_Soldier_Para_Commander_F";
      rank = "SERGEANT";
      position[] = { 0, 0, 0 };
    };

    class Unit1 {
      side = 2;
      vehicle = "I_CX_Soldier_Para_Autorifleman_F";
      rank = "PRIVATE";
      position[] = { 5, -5, 0 };
    };

    class Unit2 {
      side = 2;
      vehicle = "I_C_Soldier_Para_4_F";
      rank = "CORPORAL";
      position[] = { -5, -5, 0 };
    };

    class Unit3 {
      side = 2;
      vehicle = "I_C_Soldier_Para_6_F";
      rank = "PRIVATE";
      position[] = { 10, -10, 0 };
    };

    class Unit4 {
      side = 2;
      vehicle = "I_CX_Soldier_Para_Marksman_F";
      rank = "PRIVATE";
      position[] = { -10, -10, 0 };
    };

    class Unit5 {
      side = 2;
      vehicle = "I_C_Soldier_Para_8_F";
      rank = "CORPORAL";
      position[] = { 15, -15, 0 };
    };

    class Unit6 {
      side = 2;
      vehicle = "I_C_Soldier_Para_5_F";
      rank = "PRIVATE";
      position[] = { -15, -15, 0 };
    };

    class Unit7 {
      side = 2;
      vehicle = "I_C_Soldier_Para_3_F";
      rank = "PRIVATE";
      position[] = { 20, -20, 0 };
    };
  };
};

class SpecOps {
  name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps0";

  class I_CX_EliteGroup {
    name = "$STR_sct_CfgGroups_I_CX_EliteGroup";
    side = 2;
    faction = "IND_C_F";
    icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";

    class Unit0 {
      side = 2;
      vehicle = "I_CX_Soldier_Elite_TeamLeader_F";
      rank = "SERGEANT";
      position[] = { 0, 0, 0 };
    };

    class Unit1 {
      side = 2;
      vehicle = "I_CX_Soldier_Elite_Sniper_F";
      rank = "CORPORAL";
      position[] = { 5, -5, 0 };
    };

    class Unit2 {
      side = 2;
      vehicle = "I_CX_Soldier_Elite_Gunner_F";
      rank = "PRIVATE";
      position[] = { -5, -5, 0 };
    };

    class Unit3 {
      side = 2;
      vehicle = "I_CX_Soldier_Elite_Scout_LAT_F";
      rank = "PRIVATE";
      position[] = { 10, -10, 0 };
    };
  };

  class I_CX_EliteSentry {
    name = "$STR_sct_CfgGroups_I_CX_EliteSentry";
    side = 2;
    faction = "IND_C_F";
    icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";

    class Unit0 {
      side = 2;
      vehicle = "I_CX_Soldier_Elite_Scout_LAT_F";
      rank = "CORPORAL";
      position[] = { 0, 0, 0 };
    };

    class Unit1 {
      side = 2;
      vehicle = "I_CX_Soldier_Elite_Scout_F";
      rank = "PRIVATE";
      position[] = { 5, -5, 0 };
    };
  };
};

class Motorized {
  name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";

  class I_CX_MotParaAssaultGroup {
    name = "$STR_sct_CfgGroups_I_CX_MotParaAssaultGroup";
    side = 2;
    faction = "IND_C_F";
    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

    class Unit0 {
      side = 2;
      vehicle = "I_CX_Truck_02_transport_F";
      rank = "PRIVATE";
      position[] = { 0, 0, 0 };
    };

    class Unit1 {
      side = 2;
      vehicle = "I_CX_Soldier_Para_Commander_F";
      rank = "SERGEANT";
      position[] = { 5, 0, 0 };
    };

    class Unit2 {
      side = 2;
      vehicle = "I_CX_Soldier_Para_Autorifleman_F";
      rank = "PRIVATE";
      position[] = { 5, -2, 0 };
    };

    class Unit3 {
      side = 2;
      vehicle = "I_C_Soldier_Para_4_F";
      rank = "CORPORAL";
      position[] = { 5, -4, 0 };
    };

    class Unit4 {
      side = 2;
      vehicle = "I_C_Soldier_Para_6_F";
      rank = "PRIVATE";
      position[] = { 5, -6, 0 };
    };

    class Unit5 {
      side = 2;
      vehicle = "I_CX_Soldier_Para_Marksman_F";
      rank = "PRIVATE";
      position[] = { 5, -8, 0 };
    };

    class Unit6 {
      side = 2;
      vehicle = "I_C_Soldier_Para_8_F";
      rank = "CORPORAL";
      position[] = { 5, -10, 0 };
    };

    class Unit7 {
      side = 2;
      vehicle = "I_C_Soldier_Para_5_F";
      rank = "PRIVATE";
      position[] = { 5, -12, 0 };
    };

    class Unit8 {
      side = 2;
      vehicle = "I_C_Soldier_Para_3_F";
      rank = "PRIVATE";
      position[] = { 5, -14, 0 };
    };
  };

  class I_CX_MotParaCombatGroup {
    name = "$STR_sct_CfgGroups_I_CX_MotParaCombatGroup";
    side = 2;
    faction = "IND_C_F";
    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

    class Unit0 {
      side = 2;
      vehicle = "I_CX_Truck_02_transport_F";
      rank = "PRIVATE";
      position[] = { 0, 0, 0 };
    };

    class Unit1 {
      side = 2;
      vehicle = "I_CX_Soldier_Para_Commander_F";
      rank = "SERGEANT";
      position[] = { 5, 0, 0 };
    };

    class Unit2 {
      side = 2;
      vehicle = "I_C_Soldier_Para_4_F";
      rank = "PRIVATE";
      position[] = { 5, -2, 0 };
    };

    class Unit3 {
      side = 2;
      vehicle = "I_C_Soldier_Para_6_F";
      rank = "SERGEANT";
      position[] = { 5, -4, 0 };
    };

    class Unit4 {
      side = 2;
      vehicle = "I_C_Soldier_Para_1_F";
      rank = "CORPORAL";
      position[] = { 5, -6, 0 };
    };

    class Unit5 {
      side = 2;
      rank = "CORPORAL";
      position[] = { 5, -8, 0 };
      vehicle = "I_CX_Soldier_Para_Marksman_F";
    };

    class Unit6 {
      side = 2;
      vehicle = "I_C_Soldier_Para_5_F";
      rank = "PRIVATE";
      position[] = { 5, -10, 0 };
    };

    class Unit7 {
      side = 2;
      vehicle = "I_C_Soldier_Para_8_F";
      rank = "PRIVATE";
      position[] = { 5, -12, 0 };
    };

    class Unit8 {
      side = 2;
      vehicle = "I_C_Soldier_Para_3_F";
      rank = "PRIVATE";
      position[] = { 5, -14, 0 };
    };
  };

  class I_CX_MotParaReinforcements {
    name = "$STR_sct_CfgGroups_I_CX_MotParaReinforcements";
    side = 2;
    faction = "IND_C_F";
    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

    class Unit0 {
      side = 2;
      vehicle = "I_CX_Truck_02_transport_F";
      rank = "PRIVATE";
      position[] = { 0, 0, 0 };
    };

    class Unit1 {
      side = 2;
      vehicle = "I_CX_Soldier_Para_Commander_F";
      rank = "SERGEANT";
      position[] = { 5, 0, 0 };
    };

    class Unit2 {
      side = 2;
      vehicle = "I_C_Soldier_Para_4_F";
      rank = "PRIVATE";
      position[] = { 5, -2, 0 };
    };

    class Unit3 {
      side = 2;
      vehicle = "I_C_Soldier_Para_6_F";
      rank = "SERGEANT";
      position[] = { 5, -4, 0 };
    };

    class Unit4 {
      side = 2;
      vehicle = "I_C_Soldier_Para_1_F";
      rank = "CORPORAL";
      position[] = { 5, -6, 0 };
    };

    class Unit5 {
      side = 2;
      rank = "CORPORAL";
      position[] = { 5, -8, 0 };
      vehicle = "I_CX_Soldier_Para_Marksman_F";
    };

    class Unit6 {
      side = 2;
      vehicle = "I_C_Soldier_Para_5_F";
      rank = "PRIVATE";
      position[] = { 5, -10, 0 };
    };

    class Unit7 {
      side = 2;
      vehicle = "I_C_Soldier_Para_8_F";
      rank = "PRIVATE";
      position[] = { 5, -12, 0 };
    };

    class Unit8 {
      side = 2;
      vehicle = "I_C_Soldier_Para_3_F";
      rank = "PRIVATE";
      position[] = { 5, -14, 0 };
    };

    class Unit9 {
      side = 2;
      vehicle = "I_CX_Soldier_Para_Commander_F";
      rank = "SERGEANT";
      position[] = { -5, 0, 0 };
    };

    class Unit10 {
      side = 2;
      vehicle = "I_C_Soldier_Para_4_F";
      rank = "PRIVATE";
      position[] = { -5, -2, 0 };
    };

    class Unit11 {
      side = 2;
      vehicle = "I_C_Soldier_Para_6_F";
      rank = "SERGEANT";
      position[] = { -5, -4, 0 };
    };

    class Unit12 {
      side = 2;
      vehicle = "I_C_Soldier_Para_1_F";
      rank = "CORPORAL";
      position[] = { -5, -6, 0 };
    };

    class Unit13 {
      side = 2;
      rank = "CORPORAL";
      position[] = { -5, -8, 0 };
      vehicle = "I_CX_Soldier_Para_Marksman_F";
    };

    class Unit14 {
      side = 2;
      vehicle = "I_C_Soldier_Para_5_F";
      rank = "PRIVATE";
      position[] = { -5, -10, 0 };
    };

    class Unit15 {
      side = 2;
      vehicle = "I_C_Soldier_Para_8_F";
      rank = "PRIVATE";
      position[] = { -5, -12, 0 };
    };

    class Unit16 {
      side = 2;
      vehicle = "I_C_Soldier_Para_3_F";
      rank = "PRIVATE";
      position[] = { -5, -14, 0 };
    };
  };

  class I_CX_MotParaFireTeam {
    name = "$STR_sct_CfgGroups_I_CX_MotParaFireTeam";
    side = 2;
    faction = "IND_C_F";
    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

    class Unit0 {
      side = 2;
      vehicle = "I_C_Offroad_02_unarmed_F";
      rank = "PRIVATE";
      position[] = { 0, 0, 0 };
    };

    class Unit1 {
      side = 2;
      vehicle = "I_C_Soldier_Para_2_F";
      rank = "SERGEANT";
      position[] = { 5, 0, 0 };
    };

    class Unit2 {
      side = 2;
      rank = "CORPORAL";
      position[] = { 5, -2, 0 };
      vehicle = "I_CX_Soldier_Para_Autorifleman_F";
    };

    class Unit3 {
      side = 2;
      vehicle = "I_C_Soldier_Para_3_F";
      rank = "PRIVATE";
      position[] = { 5, -4, 0 };
    };
  };
};
