class FIG_InvisibleBackpack;
class FIG_CadianBackpack1;
class FIG_CadianWebbingBP;
class FIG_BandolierLPBP;
class FIG_LegPouchBP;
class FIG_CadianBackpack2Base;
class FIG_CadianBackpack2Light;
class FIG_CadianWebbing2BP;
class FIG_CadianWebbing3BP;
class FIG_BandolierBP;
class TIOW_IG_Vox_Caster;
class ic_CadianBackpackV1;
class ic_CadianBackpackV3;
class ic_CadianBackpackV5;
class ic_CadianBackpackV7;
class ic_CadianBackpackV8;
class ic_cad_RocketPack_NoStraps;
class ic_CarryAll;
class IC_CAD_kasr_pack_grey;
class IC_CAD_kasr_pack_grey_02;
class 203rd_Backpack_Invisible: FIG_InvisibleBackpack
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Backpack_Invisible";
		maximumLoad=200;
		tf_hasLRradio=1;
		tf_range=20000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	};
	class 203rd_CadianBackpack1_co: FIG_CadianBackpack1
	{
		displayName="$STR_TAG_203rdMW_Backpack_Standart";
		scope=2;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianBackpack1_co.paa"
		};
		maximumLoad=250;
	};
	class 203rd_CadianWebbing_co: FIG_CadianWebbingBP
	{
		displayName="$STR_TAG_203rdMW_Backpack_Webbing";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianWebbing_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
		maximumLoad=180;
	};
	class 203rd_CadianWebbing2BP_co: FIG_CadianWebbing2BP
	{
		displayName="$STR_TAG_203rdMW_Backpack_Webbing_V2";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianWebbing_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
		maximumLoad=180;
	};
	class 203rd_CadianBandolier_co: FIG_BandolierBP
	{
		displayName="$STR_TAG_203rdMW_Backpack_Bandolier";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_LegPouch.paa"
		};
		maximumLoad=180;
	};
	class 203rd_CadianWebbing3BP_co: FIG_CadianWebbing3BP
	{
		displayName="$STR_TAG_203rdMW_Backpack_Webbing_V3";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianWebbing_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
		maximumLoad=105;
	};
	class 203rd_CadianBackpack2Light: FIG_CadianBackpack2Light
	{
		displayName="$STR_TAG_203rdMW_Backpack_Light";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa"
		};
		maximumLoad=240;
	};
	class 203rd_CadianBackpack2LightKnife: FIG_CadianBackpack2Light
	{
		displayName="$STR_TAG_203rdMW_Backpack_Light_Knife";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
		maximumLoad=240;
	};
	class 203rd_Backpack_Vox: TIOW_IG_Vox_Caster
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Backpack_Vox";
		maximumLoad=300;
		tf_range=25000;
	};
	class 203rd_CadianBackpack2: FIG_CadianBackpack2Base
	{
		scope=2;
		maximumLoad=300;
		scopearsenal=2;
		displayName="$STR_TAG_203rdMW_Backpack_Munitorum";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
	};
	class 203rd_CadianBackpack2Medicae: FIG_CadianBackpack2Base
	{
		scope=2;
		maximumLoad=300;
		scopearsenal=2;
		displayName="$STR_TAG_203rdMW_Backpack_Munitorum_MED";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianBackpack2Medic.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa",
			"",
			"",
			"",
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa"
		};
	};
	class 203rd_CadianBackpack2BR: FIG_CadianBackpack2Base
	{
		scope=2;
		maximumLoad=300;
		scopearsenal=2;
		displayName="$STR_TAG_203rdMW_Backpack_Munitorum_Bed";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa",
			"",
			"",
			"",
			"",
			"",
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa"
		};
	};
	class 203rd_CadianBackpack2BRSH: FIG_CadianBackpack2Base
	{
		scope=2;
		maximumLoad=300;
		scopearsenal=2;
		displayName="$STR_TAG_203rdMW_Backpack_Munitorum_Bed_Shovel";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa",
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa",
			"",
			"",
			"",
			"",
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa"
		};
	};
	class 203rd_CadianBackpack2BRSHP: FIG_CadianBackpack2Base
	{
		scope=2;
		maximumLoad=300;
		scopearsenal=2;
		displayName="$STR_TAG_203rdMW_Backpack_Munitorum_Bed_Shovel_Pouches";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa",
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa",
			"",
			"",
			"",
			"\203rd_Equipment\data\203rd_ElysianPouches.paa",
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa"
		};
	};
	class 203rd_CadianBackpack2BRSHPK: FIG_CadianBackpack2Base
	{
		scope=2;
		maximumLoad=300;
		scopearsenal=2;
		displayName="$STR_TAG_203rdMW_Backpack_Munitorum_Bed_Shovel_Pouch_Knife";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa",
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa",
			"",
			"",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa",
			"\203rd_Equipment\data\203rd_ElysianPouches.paa",
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa"
		};
	};
	class 203rd_CadianBackpack2BRSHK: FIG_CadianBackpack2Base
	{
		scope=2;
		maximumLoad=300;
		scopearsenal=2;
		displayName="$STR_TAG_203rdMW_Backpack_Munitorum_Bed_Shovel_Knife";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa",
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa",
			"",
			"",
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa"
		};
	};
	class 203rd_CadianBackpack2K: FIG_CadianBackpack2Base
	{
		scope=2;
		maximumLoad=300;
		scopearsenal=2;
		displayName="$STR_TAG_203rdMW_Backpack_Munitorum_Knife";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa",
			"",
			"",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa",
			"",
			"",
			""
		};
	};
	class 203rd_CadianBackpack2KSH: FIG_CadianBackpack2Base
	{
		scope=2;
		maximumLoad=300;
		scopearsenal=2;
		displayName="$STR_TAG_203rdMW_Backpack_Munitorum_Shovel_Knife";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa",
			"\203rd_Equipment\data\203rd_CadianBackpack2.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa",
			"",
			"",
			""
		};
	};
	class 203rd_Backpack_CarryAll: ic_CarryAll
	{
		author="Rogue771";
		scope=2;
		displayName="$STR_TAG_203rdMW_Backpack_CarryAll";
		maximumLoad=400;
	};
	class 203rd_KasrkinPowerpack: IC_CAD_kasr_pack_grey
	{
		displayName="$STR_TAG_203rdMW_Backpack_Powerpack";
		scope=2;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_KasrkinPowerpack.paa"
		};
		maximumLoad=350;
	};
	class 203rd_KasrkinPowerpack_NC: IC_CAD_kasr_pack_grey_02
	{
		displayName="$STR_TAG_203rdMW_Backpack_Powerpack_no_cable";
		scope=2;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_KasrkinPowerpack.paa"
		};
		maximumLoad=350;
	};