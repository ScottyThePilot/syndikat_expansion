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
      QADDON_SIBLING(compat_lxws),
      QADDONOF(black_dawn_units),
      QADDONOF(black_dawn_units_compat_lxws),
      QADDONOF(black_dawn_units_compat_aegis),
      QADDONOF(red_tiger_units),
      QADDONOF(red_tiger_units_compat_lxws),
      QADDONOF(red_tiger_units_compat_aegis),
      QADDONOF(red_tiger_vehicles_soft),
      QADDONOF(red_tiger_vehicles_soft_compat_lxws),
      "A3_Aegis_Soft_F_Aegis_Offroad_01"
    };
    skipWhenMissingDependencies = 1;
    units[] = {
      "I_BD_Offroad_01_F",
      "I_BD_Offroad_01_AT_F",
      "I_BD_Offroad_01_armed_F"
    };
    weapons[] = {};
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};
