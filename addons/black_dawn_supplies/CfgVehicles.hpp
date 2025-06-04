class FlagCarrier;

class Flag_BlackDawn_F: FlagCarrier {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgVehicles_Flag_BlackDawn_F";
  editorPreview = QPATHTO(data\editorpreviews\Flag_BlackDawn_F.jpeg);
  hiddenSelectionsMaterials[] = { "\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat" };
  hiddenSelectionsTextures[] = { "\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa" };

  class EventHandlers {
    init = QUOTE((_this select 0) setFlagTexture 'PATHTOE(black_dawn_units,data\flags\black_dawn_co.paa)');
  };

  class SimpleObject {
    animate[] = { { "flag", 0 } };
    eden = 0;
    hide[] = {};
    init = "''";
    verticalOffset = 3.977;
    verticalOffsetWorld = 0;
  };

  scope = 2;
  scopeCurator = 2;
};

class ReammoBox_F;

class Box_Syndicate_Ammo_F;
class Box_Syndicate_Wps_F;
class Box_Syndicate_WpsLaunch_F: ReammoBox_F {
  class TransportWeapons;
};

class Box_BlackDawn_Ammo_F: Box_Syndicate_Ammo_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgVehicles_Box_BlackDawn_Ammo_F";
};

class Box_BlackDawn_Wps_F: Box_Syndicate_Wps_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgVehicles_Box_BlackDawn_Wps_F";
};

class Box_BlackDawn_WpsLaunch_F: Box_Syndicate_WpsLaunch_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgVehicles_Box_BlackDawn_WpsLaunch_F";

  class TransportWeapons: TransportWeapons {
    delete _xx_launch_O_Titan_ghex_F;
    class _xx_launch_O_Titan_F {
      weapon = "launch_O_Titan_F";
      count = 1;
    };
    delete _xx_launch_O_Titan_short_ghex_F;
    class _xx_launch_O_Titan_short_F {
      weapon = "launch_O_Titan_short_F";
      count = 1;
    };
  };
};
