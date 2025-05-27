#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = ADDON_NAME;
    author = "ScottyThePilot";
    authors[] = { "ScottyThePilot" };
    url = "";
    VERSION_CONFIG;
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      QADDON_MAIN,
      "A3_Characters_F",
      "A3_Characters_F_Exp",
      "A3_Characters_F_Exp_Vests",
      "A3_Characters_F_Orange_Headgear",
      "A3_Characters_F_Tank_Headgear",
      "A3_Supplies_F_Exp",
      "A3_Supplies_F_Enoch_Bags",
      "A3_Weapons_F_Ammoboxes",
      "A3_Weapons_F_Enoch_Rifles_AK12",
      "A3_Weapons_F_Mark_LongRangeRifles_DMR_06",
      "A3_Weapons_F_Exp_Rifles_AKS"
    };
    units[] = {
      "I_C_Soldier_Camo_F",
      "I_C_Soldier_Para_1_F",
      "I_C_Soldier_Para_2_F",
      "I_C_Soldier_Para_3_F",
      "I_C_Soldier_Para_4_F",
      "I_C_Soldier_Para_5_F",
      "I_C_Soldier_Para_6_F",
      "I_C_Soldier_Para_7_F",
      "I_C_Soldier_Para_8_F",
      "I_C_Soldier_base_unarmed_F",
      "I_CX_Soldier_Para_Sweater_F",
      "I_CX_Soldier_Para_Commander_F",
      "I_CX_Soldier_Para_Marksman_F",
      "I_CX_Soldier_Para_Autorifleman_F",
      "I_CX_Soldier_Para_AT_F",
      "I_CX_Soldier_Para_AA_F",
      "I_CX_Crew_F",
      "I_CX_Soldier_Elite_base_F",
      "I_CX_Soldier_Elite_Officer_F",
      "I_CX_Soldier_Elite_TeamLeader_F",
      "I_CX_Soldier_Elite_Gunner_F",
      "I_CX_Soldier_Elite_Sniper_F",
      "I_CX_Soldier_Elite_Scout_F",
      "I_CX_Soldier_Elite_Scout_LAT_F"
    };
    weapons[] = {
      "U_I_C_Soldier_Camo_F",
      "U_I_CX_Soldier_Para_Sweater_F",
      "H_PASGT_basic_red_F",
      "H_Hat_Safari_brown_F",
      "H_Booniehat_IND_CX",
      "H_Booniehat_IND_CX_hs"
    };
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};

class CfgWeapons {
  #include "CfgWeapons.hpp"
};

class CfgGroups {
  class Indep {
    class IND_C_F {
      #include "CfgGroups.hpp"
    };
  };
};
