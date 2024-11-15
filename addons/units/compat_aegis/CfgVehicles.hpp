class I_G_Soldier_base_F;

class I_C_Soldier_base_F: I_G_Soldier_base_F {
  headgearList[] += {
    "H_PASGT_basic_green_F", 3.0,
    "lxWS_H_PASGT_goggles_green_F", 1.5
  };

  CBA_facewearList[] += {
    "G_Headset_light", 1.0,
    "G_Shemag_khk", 1.0,
    "G_Shemag_oli", 1.0,
    "G_Shemag_red", 1.0,
    "G_Shemag_shades", 1.0,
    "G_Shemag_tactical", 1.0,
    "G_Shemag_tan", 1.0,
    "G_Shemag_white", 1.0
  };
};

class I_CX_Soldier_Para_Commander_F: I_C_Soldier_base_F {
  headgearList[] += {
    "H_PASGT_basic_green_F", 3.0,
    "lxWS_H_PASGT_goggles_green_F", 1.5
  };

  weapons[] = { "arifle_AK12_GL_545_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST6("1Rnd_HE_Grenade_shell") };

  respawnWeapons[] = { "arifle_AK12_GL_545_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST6("1Rnd_HE_Grenade_shell") };
};

class I_CX_Soldier_Para_Autorifleman_F: I_C_Soldier_base_F {
  weapons[] = { "Aegis_arifle_RPK12_545_F", "hgun_Pistol_01_F", "Throw", "Put" };
  magazines[] = { LIST4("Aegis_60Rnd_545x39_Mag_F"), LIST3("10Rnd_9x21_Mag"), "HandGrenade_Guer" };

  respawnWeapons[] = { "Aegis_arifle_RPK12_545_F", "hgun_Pistol_01_F", "Throw", "Put" };
  respawnMagazines[] = { LIST4("Aegis_60Rnd_545x39_Mag_F"), LIST3("10Rnd_9x21_Mag"), "HandGrenade_Guer" };
};

class I_C_Soldier_Para_1_F: I_C_Soldier_base_F {
  weapons[] = { "arifle_AK12_545_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST2("HandGrenade_Guer") };

  respawnWeapons[] = { "arifle_AK12_545_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST2("HandGrenade_Guer") };
};

class I_C_Soldier_Para_2_F: I_C_Soldier_base_F {
  weapons[] = { "arifle_AK12_545_F", "hgun_Pistol_01_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST2("10Rnd_9x21_Mag"), LIST2("HandGrenade_Guer") };

  respawnWeapons[] = { "arifle_AK12_545_F", "hgun_Pistol_01_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST2("10Rnd_9x21_Mag"), LIST2("HandGrenade_Guer") };
};

class I_C_Soldier_Para_3_F: I_C_Soldier_base_F {
  weapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  magazines[] = { LIST2("30Rnd_545x39_Mag_F") };

  respawnWeapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  respawnMagazines[] = { LIST2("30Rnd_545x39_Mag_F") };
};

class I_C_Soldier_Para_6_F: I_C_Soldier_base_F {
  weapons[] = { "arifle_AK12_GL_545_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST4("1Rnd_HE_Grenade_shell"), LIST2("HandGrenade_Guer") };

  respawnWeapons[] = { "arifle_AK12_GL_545_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST4("1Rnd_HE_Grenade_shell"), LIST2("HandGrenade_Guer") };
};

class I_C_Soldier_Para_7_F: I_C_Soldier_base_F {
  weapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Mag_F"), LIST2("HandGrenade_Guer") };

  respawnWeapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Mag_F"), LIST2("HandGrenade_Guer") };
};

class I_C_Soldier_Para_8_F: I_C_Soldier_base_F {
  weapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  magazines[] = { LIST2("30Rnd_545x39_Mag_F") };

  respawnWeapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  respawnMagazines[] = { LIST2("30Rnd_545x39_Mag_F") };
};

class I_C_Soldier_Bandit_4_F: I_C_Soldier_base_F {
  weapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Mag_F"), LIST2("MiniGrenade") };

  respawnWeapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Mag_F"), LIST2("MiniGrenade") };
};

class I_C_Soldier_Bandit_5_F: I_C_Soldier_base_F {
  weapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Mag_F"), LIST2("MiniGrenade") };

  respawnWeapons[] = { "Aegis_arifle_AK74_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Mag_F"), LIST2("MiniGrenade") };
};

class I_C_Soldier_Bandit_6_F: I_C_Soldier_base_F {
  weapons[] = { "arifle_AK12_GL_545_F", "Throw", "Put" };
  magazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST6("1Rnd_HE_Grenade_shell") };

  respawnWeapons[] = { "arifle_AK12_GL_545_F", "Throw", "Put" };
  respawnMagazines[] = { LIST6("30Rnd_545x39_Black_Mag_Yellow_F"), LIST6("1Rnd_HE_Grenade_shell") };
};

class I_C_Sharpshooter_F: I_C_Soldier_base_F {
  headgearList[] = {
    "H_Booniehat_khk", 1.5,
    "H_Booniehat_oli", 1.5,
    "H_Booniehat_tan", 1.5,
    "H_Hat_Safari_olive_F", 2.0,
    "H_Hat_Safari_sand_F", 2.0
  };
};



class B_Kitbag_rgr;

class B_Kitbag_rgr_Para_3_F: B_Kitbag_rgr {
  class TransportMagazines {
    class _xx_30Rnd_762x39_Mag_F {
      count = 0;
    };

    class _xx_30Rnd_545x39_Mag_F {
      magazine = "30Rnd_545x39_Mag_F";
      count = 4;
    };
  };
};

class B_Kitbag_rgr_Para_8_F: B_Kitbag_rgr {
  class TransportMagazines {
    class _xx_30Rnd_762x39_Mag_F {
      count = 0;
    };

    class _xx_30Rnd_545x39_Mag_F {
      magazine = "30Rnd_545x39_Mag_F";
      count = 4;
    };
  };
};
