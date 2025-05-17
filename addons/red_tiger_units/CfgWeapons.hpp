class Uniform_Base;
class UniformItem;

class U_I_C_Soldier_Camo_F: Uniform_Base {
  displayName = "$STR_sct_CfgWeapons_U_I_C_Soldier_Camo_F";
};

class U_I_CX_Soldier_Para_Sweater_F: Uniform_Base {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgWeapons_U_I_CX_Soldier_Para_Sweater_F";
  hiddenSelections[] = { "camo" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\uniforms\Soldier_Para_Sweater_co.paa)
  };

  class ItemInfo: UniformItem {
    containerClass = "Supply40";
    mass = 40;
    uniformClass = "I_CX_Soldier_Para_Sweater_F";
    uniformModel = "-";
  };

  model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
  picture = QPATHTO(data\uniforms\ui\icon_Soldier_Para_Sweater_ca.paa);

  scope = 2;
};

class H_PASGT_basic_base_F;
class H_Hat_Safari_base_F;
class H_Booniehat_khk;
class H_Booniehat_khk_hs;

class H_PASGT_basic_red_F: H_PASGT_basic_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgWeapons_H_PASGT_basic_red_F";
  hiddenSelectionsTextures[] = {
    QPATHTO(data\headgear\PASGT_red_co.paa)
  };
  picture = QPATHTO(data\headgear\ui\icon_PASGT_basic_red_ca.paa);

  scope = 2;
};

class H_Hat_Safari_brown_F: H_Hat_Safari_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgWeapons_H_Hat_Safari_brown_F";
  hiddenSelectionsTextures[] = {
    QPATHTO(data\headgear\Hat_Safari_brown_co.paa)
  };
  picture = QPATHTO(data\headgear\ui\icon_Hat_Safari_brown_ca.paa);

  scope = 2;
};

class H_Booniehat_IND_CX: H_Booniehat_khk {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgWeapons_H_Booniehat_IND_CX";
  hiddenSelectionsTextures[] = {
    QPATHTO(data\headgear\Hat_Boonie_co.paa)
  };
  picture = QPATHTO(data\headgear\ui\icon_Hat_Boonie_ca.paa);

  scope = 2;
};

class H_Booniehat_IND_CX_hs: H_Booniehat_khk_hs {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgWeapons_H_Booniehat_IND_CX_hs";
  hiddenSelectionsTextures[] = {
    QPATHTO(data\headgear\Hat_Boonie_co.paa)
  };
  picture = QPATHTO(data\headgear\ui\icon_Hat_Boonie_hs_ca.paa);

  scope = 2;
};
