class Uniform_Base;
class UniformItem;

class U_I_CX_Soldier_Para_Sweater_F: Uniform_Base {
  author = "ScottyThePilot";
  displayName = "$STR_sct_uniform_I_U_CX_Soldier_Para_Sweater";
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

  scope = 1;
};
