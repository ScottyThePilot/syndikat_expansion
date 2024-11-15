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
      "A3_Armor_F_Gamma_APC_Wheeled_03",
      "A3_Armor_F_EPB_APC_Tracked_03"
    };
    units[] = {
      "I_CX_APC_Tracked_03_F",
      "I_CX_APC_Wheeled_03_F"
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
