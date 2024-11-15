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
      QUOTE(ADDONOF(units)),
      "Characters_f_lxWS_headgear"
    };
    skipWhenMissingDependencies = 1;
    units[] = {};
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
