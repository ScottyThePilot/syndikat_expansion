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
      QADDONOF(red_tiger_vehicles_air),
      "A3_Air_F_Heli_Light_01",
      "A3_Air_F_Exp_Plane_Civil_01"
    };
    units[] = {
      "I_BD_Heli_Light_01_F",
      "I_BD_Heli_Light_01_dynamicLoadout_F",
      "I_BD_Heli_Light_01_civil_F",
      "I_BD_Plane_Civil_01_F"
    };
    weapons[] = {};
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};
