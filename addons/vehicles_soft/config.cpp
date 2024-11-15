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
      "A3_Soft_F_Beta_Truck_02",
      "A3_Soft_F_Gamma_Truck_02"
    };
    units[] = {
      "I_CX_Truck_02_ammo_F",
      "I_CX_Truck_02_box_F",
      "I_CX_Truck_02_covered_F",
      "I_CX_Truck_02_fuel_F",
      "I_CX_Truck_02_medical_F",
      "I_CX_Truck_02_transport_F",
      "I_CX_Truck_02_mrl_F"
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
