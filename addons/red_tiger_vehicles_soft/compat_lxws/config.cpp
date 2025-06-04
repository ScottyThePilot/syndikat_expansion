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
      "Vehicles_F_lxWS_Truck_02"
    };
    skipWhenMissingDependencies = 1;
    units[] = {
      "I_CX_Truck_02_aa_lxWS",
      "I_CX_Truck_02_cargo_lxWS",
      "I_CX_Truck_02_flatbed_lxWS"
    };
    weapons[] = {};
  };

  class ADDONOF(vehicles_soft_compat_lxws): ADDON {
    units[] = {};
    weapons[] = {};
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};
