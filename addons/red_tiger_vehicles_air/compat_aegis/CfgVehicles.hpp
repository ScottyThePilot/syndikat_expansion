class B_Heli_Light_01_F;

class I_CX_Heli_Light_01_F: B_Heli_Light_01_F {
  class TransportMagazines {
    delete _xx_30Rnd_762x39_AK12_Mag_F;
    class _xx_30Rnd_545x39_Black_Mag_Yellow_F {
      magazine = "30Rnd_545x39_Black_Mag_Yellow_F";
      count = 4;
    };
  };
  class TransportWeapons {
    delete _xx_arifle_AK12_F;
    class _xx_arifle_AK12_545_F {
      weapon = "arifle_AK12_545_F";
      count = 2;
    };
  };
};

class B_Heli_Light_01_dynamicLoadout_F;

class I_CX_Heli_Light_01_dynamicLoadout_F: B_Heli_Light_01_dynamicLoadout_F {
  class TransportMagazines {
    delete _xx_30Rnd_762x39_AK12_Mag_F;
    class _xx_30Rnd_545x39_Black_Mag_Yellow_F {
      magazine = "30Rnd_545x39_Black_Mag_Yellow_F";
      count = 4;
    };
  };
  class TransportWeapons {
    delete _xx_arifle_AK12_F;
    class _xx_arifle_AK12_545_F {
      weapon = "arifle_AK12_545_F";
      count = 2;
    };
  };
};
