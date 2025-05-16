class UniformItem;
class U_I_C_Soldier_Camo_F;
class U_I_C_Soldier_Para_1_F;
class U_I_C_Soldier_Para_2_F;
class U_I_C_Soldier_Para_3_F;
class U_I_C_Soldier_Para_4_F;
class U_I_C_Soldier_Para_5_F;
class U_I_CX_Soldier_Para_Sweater_F;



class U_I_BD_Soldier_Camo_F: U_I_C_Soldier_Camo_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgWeapons_U_I_BD_Soldier_Camo_F";
  hiddenSelections[] = { "camo" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\uniforms\Soldier_Camo_1_Arid_co.paa)
  };

  class ItemInfo: UniformItem {
    containerClass = "Supply40";
    mass = 40;
    uniformClass = "I_BD_Soldier_Camo_F";
    uniformModel = "-";
  };

  model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
  picture = QPATHTO(data\uniforms\ui\icon_Soldier_Camo_Arid_ca.paa);

  scope = 2;
};

class U_I_BD_Soldier_Para_1_F: U_I_C_Soldier_Para_1_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgWeapons_U_I_BD_Soldier_Para_1_F";
  hiddenSelections[] = { "camo" };
  hiddenSelectionsTextures[] = {
    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_2_co.paa"
  };

  class ItemInfo: UniformItem {
    containerClass = "Supply40";
    mass = 40;
    uniformClass = "I_BD_Soldier_Para_1_F";
    uniformModel = "-";
  };

  model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
  picture = QPATHTO(data\uniforms\ui\icon_Soldier_Para_1_Arid_ca.paa);

  scope = 2;
};

class U_I_BD_Soldier_Para_2_F: U_I_C_Soldier_Para_2_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgWeapons_U_I_BD_Soldier_Para_2_F";
  hiddenSelections[] = { "camo" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\uniforms\Soldier_Camo_1_Arid_co.paa)
  };

  class ItemInfo: UniformItem {
    containerClass = "Supply40";
    mass = 40;
    uniformClass = "I_BD_Soldier_Para_2_F";
    uniformModel = "-";
  };

  model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
  picture = QPATHTO(data\uniforms\ui\icon_Soldier_Para_2_Arid_ca.paa);

  scope = 2;
};

class U_I_BD_Soldier_Para_3_F: U_I_C_Soldier_Para_3_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgWeapons_U_I_BD_Soldier_Para_3_F";
  hiddenSelections[] = { "camo" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\uniforms\Soldier_Para_3_1_Arid_co.paa)
  };

  class ItemInfo: UniformItem {
    containerClass = "Supply40";
    mass = 40;
    uniformClass = "I_BD_Soldier_Para_3_F";
    uniformModel = "-";
  };

  model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
  picture = QPATHTO(data\uniforms\ui\icon_Soldier_Para_3_Arid_ca.paa);

  scope = 2;
};

class U_I_BD_Soldier_Para_4_F: U_I_C_Soldier_Para_4_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgWeapons_U_I_BD_Soldier_Para_4_F";
  hiddenSelections[] = { "camo" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\uniforms\Soldier_Para_4_1_Arid_co.paa)
  };

  class ItemInfo: UniformItem {
    containerClass = "Supply40";
    mass = 40;
    uniformClass = "I_BD_Soldier_Para_4_F";
    uniformModel = "-";
  };

  model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
  picture = QPATHTO(data\uniforms\ui\icon_Soldier_Para_4_Arid_ca.paa);

  scope = 2;
};

class U_I_BD_Soldier_Para_5_F: U_I_C_Soldier_Para_5_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgWeapons_U_I_BD_Soldier_Para_5_F";
  hiddenSelections[] = { "camo" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\uniforms\Soldier_Para_5_1_Arid_co.paa)
  };

  class ItemInfo: UniformItem {
    containerClass = "Supply40";
    mass = 40;
    uniformClass = "I_BD_Soldier_Para_5_F";
    uniformModel = "-";
  };

  model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
  picture = QPATHTO(data\uniforms\ui\icon_Soldier_Para_5_Arid_ca.paa);

  scope = 2;
};

class U_I_BD_Soldier_Para_Sweater_F: U_I_CX_Soldier_Para_Sweater_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgWeapons_U_I_BD_Soldier_Para_Sweater_F";
  hiddenSelections[] = { "camo" };
  hiddenSelectionsTextures[] = {
    QPATHTO(data\uniforms\Soldier_Para_Sweater_Arid_co.paa)
  };

  class ItemInfo: UniformItem {
    containerClass = "Supply40";
    mass = 40;
    uniformClass = "I_BD_Soldier_Para_Sweater_F";
    uniformModel = "-";
  };

  model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
  picture = QPATHTO(data\uniforms\ui\icon_Soldier_Para_Sweater_Arid_ca.paa);

  scope = 2;
};



class H_PASGT_basic_base_F;
class H_Booniehat_khk;
class H_Booniehat_khk_hs;

class H_PASGT_basic_brown_F: H_PASGT_basic_base_F {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgWeapons_H_PASGT_basic_brown_F";
  hiddenSelectionsTextures[] = {
    QPATHTO(data\headgear\PASGT_brown_co.paa)
  };
  picture = QPATHTO(data\headgear\ui\icon_PASGT_brown_ca.paa);

  scope = 2;
};

class H_Booniehat_IND_BD: H_Booniehat_khk {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgWeapons_H_Booniehat_IND_BD";
  hiddenSelectionsTextures[] = {
    QPATHTO(data\headgear\Hat_Boonie_Arid_co.paa)
  };
  picture = QPATHTO(data\headgear\ui\icon_Hat_Boonie_Arid_ca.paa);

  scope = 2;
};

class H_Booniehat_IND_BD_hs: H_Booniehat_khk_hs {
  author = "ScottyThePilot";
  displayName = "$STR_sct_CfgWeapons_H_Booniehat_IND_BD_hs";
  hiddenSelectionsTextures[] = {
    QPATHTO(data\headgear\Hat_Boonie_Arid_co.paa)
  };
  picture = QPATHTO(data\headgear\ui\icon_Hat_Boonie_Arid_hs_ca.paa);

  scope = 2;
};
