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
      QADDONOF(red_tiger_vehicles_static),
      "A3_Static_F_AA_01",
      "A3_Static_F_AT_01",
      "A3_Static_F_HMG_02",
      "A3_Static_F_Mortar_01"
    };
    units[] = {
      "I_BD_Static_AA_F",
      "I_BD_Static_AT_F",
      "I_BD_HMG_02_F",
      "I_BD_HMG_02_high_F",
      "I_BD_HMG_02_support_F",
      "I_BD_HMG_02_support_high_F",
      "I_BD_HMG_02_weapon_F",
      "I_BD_HMG_02_high_weapon_F",
      "I_BD_Mortar_01_F",
      "I_BD_Mortar_01_support_F",
      "I_BD_Mortar_01_weapon_F"
    };
    weapons[] = {};
  };
};

class CfgVehicles {
  #include "CfgVehicles.hpp"
};
