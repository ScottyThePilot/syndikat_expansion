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
      QADDONOF(red_tiger_units_compat_lxws),
      "Characters_f_lxWS_headgear"
    };
    skipWhenMissingDependencies = 1;
    units[] = {};
    weapons[] = {
      "lxWS_H_PASGT_goggles_brown_F"
    };
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};

class CfgWeapons {
  #include "CfgWeapons.hpp"
};
