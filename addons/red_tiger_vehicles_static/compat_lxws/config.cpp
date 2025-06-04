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
      "Vehicles_F_lxWS_zu23"
    };
    skipWhenMissingDependencies = 1;
    units[] = {
      "I_CX_ZU23_lxWS"
    };
    weapons[] = {};
  };

  class ADDONOF(vehicles_static_compat_lxws): ADDON {
    units[] = {};
    weapons[] = {};
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};
