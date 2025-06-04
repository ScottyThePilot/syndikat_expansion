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
      "A3_Static_F_HMG_02",
      "A3_Static_F_Mortar_01"
    };
    units[] = {
      "I_CX_Mortar_01_F",
      "I_CX_Mortar_01_support_F",
      "I_CX_Mortar_01_weapon_F"
    };
    weapons[] = {};
  };

  class ADDONOF(vehicles_static): ADDON {
    units[] = {};
    weapons[] = {};
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};
