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
      QADDONOF(red_tiger_units)
    };
    units[] = {};
    weapons[] = {};
  };
};

class CfgFactionClasses {
  class IND_C_F;

  class IND_BD_F: IND_C_F {
    displayName = "$STR_sct_CfgFactionClasses_IND_BD_F";
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};

class CfgWeapons {
  #include "CfgWeapons.hpp"
};
