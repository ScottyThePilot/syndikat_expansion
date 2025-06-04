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
      QADDONOF(red_tiger_units),
      QADDONOF(red_tiger_units_compat_aegis),
      "A3_Aegis_Characters_F_Aegis",
      "A3_Aegis_Weapons_F_Aegis",
      "A3_Aegis_Weapons_F_Aegis_Rifles_AK12"
    };
    skipWhenMissingDependencies = 1;
    units[] = {};
    weapons[] = {};
  };

  class ADDONOF(vehicles_air_compat_aegis): ADDON {
    units[] = {};
    weapons[] = {};
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};
