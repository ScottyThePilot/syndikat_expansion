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
      QUOTE(ADDONOF(vehicles_static)),
      QUOTE(ADDONOF(vehicles_static_compat_lxws)),
      "A3_Aegis_Static_F_Aegis_ZU23"
    };
    skipWhenMissingDependencies = 1;
    units[] = {
      "I_CX_Static_AA_Aegis",
      "I_CX_Static_AT_Aegis"
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
