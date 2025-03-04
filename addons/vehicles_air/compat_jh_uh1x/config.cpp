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
      QUOTE(ADDONOF(vehicles_air)),
      // JH UH1X
      "jj_uh1"
    };
    skipWhenMissingDependencies = 1;
    units[] = {
      "I_CX_uh1x_unarmed_ov_jj",
      "I_CX_uh1x_gunship_ov_jj"
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
