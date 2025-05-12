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
      QADDONOF(red_tiger_vehicles_air),
      // JH UH1X
      "jj_uh1"
    };
    skipWhenMissingDependencies = 1;
    units[] = {
      "I_CX_uh1x_unarmed_jh",
      "I_CX_uh1x_gunship_jh"
    };
    weapons[] = {};
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};
