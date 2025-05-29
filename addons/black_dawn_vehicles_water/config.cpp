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
      QADDONOF(black_dawn_units),
      QADDONOF(red_tiger_units),
      "A3_Boat_F_Exp_Boat_Transport_01",
      "A3_Boat_F_Exp_Boat_Transport_02"
    };
    units[] = {
      "I_BD_Boat_Transport_01_F",
      "I_BD_Boat_Transport_02_F"
    };
    weapons[] = {};
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};
