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
      QUOTE(ADDONOF(red_tiger_units)),
      QUOTE(ADDONOF(red_tiger_units_compat_lxws)),
      QUOTE(ADDONOF(red_tiger_vehicles_soft)),
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
