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
      QADDONOF(red_tiger_units_compat_lxws),
      QADDONOF(red_tiger_vehicles_static),
      "Vehicles_F_lxWS_zu23"
    };
    skipWhenMissingDependencies = 1;
    units[] = {
      "I_CX_ZU23_lxWS"
    };
    weapons[] = {};
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};
