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
      QADDONOF(red_tiger_units),
      "A3_Characters_F",
      "A3_Characters_F_Exp",
      "A3_Characters_F_Exp_Vests",
      "A3_Characters_F_Orange_Headgear",
      "A3_Characters_F_Tank_Headgear",
      "A3_Supplies_F_Exp",
      "A3_Weapons_F_Ammoboxes",
      "A3_Weapons_F_Enoch_Rifles_AK12",
      "A3_Weapons_F_Mark_LongRangeRifles_DMR_06",
      "A3_Weapons_F_Exp_Rifles_AKS"
    };
    units[] = {
      "I_BD_Soldier_Camo_F",
      "I_BD_Soldier_Para_1_F",
      "I_BD_Soldier_Para_2_F",
      "I_BD_Soldier_Para_3_F",
      "I_BD_Soldier_Para_4_F",
      "I_BD_Soldier_Para_5_F",
      "I_BD_Soldier_Para_6_F",
      "I_BD_Soldier_Para_7_F",
      "I_BD_Soldier_Para_8_F",
      "I_BD_Helipilot_F",
      "I_BD_Soldier_base_unarmed_F",
      "I_BD_Soldier_Para_Sweater_F",
      "I_BD_Soldier_Para_Commander_F",
      "I_BD_Soldier_Para_Marksman_F",
      "I_BD_Soldier_Para_Autorifleman_F",
      "I_BD_Soldier_Para_AT_F",
      "I_BD_Soldier_Para_AA_F",
      "I_BD_Crew_F"
    };
    weapons[] = {
      "U_I_BD_Soldier_Camo_F",
      "U_I_BD_Soldier_Para_1_F",
      "U_I_BD_Soldier_Para_2_F",
      "U_I_BD_Soldier_Para_3_F",
      "U_I_BD_Soldier_Para_4_F",
      "U_I_BD_Soldier_Para_5_F",
      "U_I_BD_Soldier_Para_Sweater_F",
      "H_PASGT_basic_brown_F",
      "H_Booniehat_IND_BD",
      "H_Booniehat_IND_BD_hs"
    };
  };
};

class CfgFactionClasses {
  class IND_C_F;

  class IND_BD_F: IND_C_F {
    displayName = "$STR_sct_CfgFactionClasses_IND_BD_F";
    // TODO: Change icon and flag
    icon = "\A3\Data_F_Exp\FactionIcons\icon_SYND_CA.paa";
    flag = "\A3\Data_F_Exp\Flags\flag_SYND_CO.paa";
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
    class IND_BD_F {
      name = "$STR_sct_CfgFactionClasses_IND_BD_F";
      #include "CfgGroups.hpp"
    };
  };
};
