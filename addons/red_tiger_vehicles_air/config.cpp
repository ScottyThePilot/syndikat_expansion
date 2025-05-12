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
      "A3_Air_F_Heli_Light_01"
    };
    units[] = {
      "I_CX_Heli_Light_01_F",
      "I_CX_Heli_Light_01_dynamicLoadout_F"
    };
    weapons[] = {};
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};
