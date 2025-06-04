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
      QADDON_PARENT,
      QADDON_SIBLING(compat_lxws),
      "A3_Aegis_Characters_F_Aegis",
      "A3_Aegis_Weapons_F_Aegis",
      "A3_Aegis_Weapons_F_Aegis_Rifles_AK12",
      "A3_Aegis_Supplies_F_Aegis_Bags"
    };
    skipWhenMissingDependencies = 1;
    units[] = {
      "I_C_Soldier_Bandit_4_F",
      "I_C_Soldier_Bandit_5_F",
      "I_C_Soldier_Bandit_6_F",
      "I_C_Sharpshooter_F",
      "Aegis_I_C_Soldier_UAV_lxWS",
      "Aegis_I_C_Soldier_TechSpec_F",
      "Aegis_I_C_HeavyGunner_Para_F",
      "Aegis_I_C_Soldier_M_Para_F"
    };
    weapons[] = {};
  };

  class ADDONOF(units_compat_aegis): ADDON {
    units[] = {};
    weapons[] = {};
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};

class CfgGroups {
  class Indep {
    class IND_C_F {
      #include "CfgGroups.hpp"
    };
  };
};
