class Infantry {
  class I_CX_ParaMarksmanTeam {
    class Unit1 {
      vehicle = "I_C_Sharpshooter_F";
    };

    class Unit2 {
      vehicle = "I_CX_Soldier_Para_Marksman_F";
    };
  };

  class I_CX_ParaAssaultGroup {
    class Unit5 {
      vehicle = "I_C_Sharpshooter_F";
    };
  };
};

class Motorized {
  class I_CX_MotParaAssaultGroup {
    class Unit6 {
      vehicle = "I_C_Sharpshooter_F";
    };
  };

  class I_CX_MotParaShockTeam {
    name = "$STR_sct_group_I_CX_MotParaShockTeam";
    side = 2;
    faction = "IND_C_F";
    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

    class Unit0 {
      side = 2;
      vehicle = "I_C_Offroad_01_F";
      rank = "PRIVATE";
      position[] = { 0, 0, 0 };
    };

    class Unit1 {
      side = 2;
      vehicle = "I_C_Soldier_Para_6_F";
      rank = "SERGEANT";
      position[] = { 5, 0, 0 };
    };

    class Unit2 {
      side = 2;
      vehicle = "I_C_Soldier_Para_5_F";
      rank = "PRIVATE";
      position[] = { 5, -2, 0 };
    };

    class Unit3 {
      side = 2;
      vehicle = "I_C_Soldier_Para_7_F";
      rank = "CORPORAL";
      position[] = { 5, -4, 0 };
    };

    class Unit4 {
      side = 2;
      vehicle = "I_C_Soldier_Para_8_F";
      rank = "PRIVATE";
      position[] = { 5, -6, 0 };
    };
  };
};
