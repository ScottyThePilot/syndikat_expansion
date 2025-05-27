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
      QADDONOF(red_tiger_units),
      QADDONOF(red_tiger_units_compat_lxws),
      QADDONOF(red_tiger_units_compat_aegis),
      "A3_Aegis_Characters_F_Aegis",
      "A3_Aegis_Weapons_F_Aegis",
      "A3_Aegis_Weapons_F_Aegis_Rifles_AK12",
      "A3_Aegis_Supplies_F_Aegis_Bags"
    };
    skipWhenMissingDependencies = 1;
    units[] = {
      "I_BD_Sharpshooter_F",
      "Aegis_I_BD_Soldier_UAV_lxWS",
      "Aegis_I_BD_Soldier_TechSpec_F",
      "Aegis_I_BD_HeavyGunner_Para_F",
      "Aegis_I_BD_Soldier_M_Para_F"
    };
    weapons[] = {};
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};

class CfgGroups {
  class Indep {
    class IND_BD_F {
      #include "CfgGroups.hpp"
    };
  };
};
