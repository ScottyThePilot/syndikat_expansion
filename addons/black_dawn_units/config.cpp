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
      "A3_Characters_F_Orange_Headgear",
      "A3_Characters_F_Tank_Headgear",
      "A3_Supplies_F_Exp",
      "A3_Weapons_F_Ammoboxes",
      "A3_Weapons_F_Enoch_Rifles_AK12",
      "A3_Weapons_F_Mark_LongRangeRifles_DMR_06",
      "A3_Weapons_F_Exp_Rifles_AKS"
    };
    units[] = {};
    weapons[] = {};
  };
};

class CfgFactionClasses {
  class IND_C_F;

  class IND_BD_F: IND_C_F {
    displayName = "$STR_sct_CfgFactionClasses_IND_BD_F";
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};

class CfgWeapons {
  #include "CfgWeapons.hpp"
};
