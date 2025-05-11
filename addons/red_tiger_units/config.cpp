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
      QUOTE(ADDON_MAIN),
      "A3_Characters_F",
      "A3_Characters_F_Exp",
      "A3_Characters_F_Orange_Headgear",
      "A3_Characters_F_Tank_Headgear",
      "A3_Supplies_F_Exp",
      "A3_Weapons_F_Ammoboxes",
      "A3_Weapons_F_Enoch_Rifles_AK12",
      "A3_Weapons_F_Mark_LongRangeRifles_DMR_06",
      "A3_Weapons_F_Exp_Rifles_AKS"
    };
    units[] = {
      "I_CX_Soldier_Para_Commander_F",
      "I_CX_Soldier_Para_Marksman_F",
      "I_CX_Soldier_Para_Autorifleman_F",
      "I_CX_Soldier_Para_AT_F",
      "I_CX_Soldier_Para_AA_F",
      "I_CX_Crew_F"
    };
    weapons[] = {};
  };
};

class CfgSettings {
  class CBA {
    class Versioning {
      class ADDON {
        main_addon = QUOTE(ADDON_MAIN);
      };
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
      #include "CfgGroupsSyndikat.hpp"
    };
  };
};
