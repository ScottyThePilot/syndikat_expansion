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
      QADDONOF(red_tiger_units),
      QADDONOF(red_tiger_units_compat_aegis),
      "A3_Aegis_Static_F_Aegis_AA_01",
      "A3_Aegis_Static_F_Aegis_AT_01",
      "A3_Aegis_Static_F_Aegis_ZU23"
    };
    skipWhenMissingDependencies = 1;
    units[] = {
      "I_CX_Static_AA_Aegis",
      "I_CX_Static_AT_Aegis"
    };
    weapons[] = {};
  };

  class ADDONOF(vehicles_static_compat_aegis): ADDON {
    units[] = {};
    weapons[] = {};
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};
