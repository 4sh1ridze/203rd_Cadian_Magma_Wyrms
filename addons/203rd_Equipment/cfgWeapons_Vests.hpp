class FIG_CadianArmour;
class FIG_CadianArmourPV1;
class FIG_CadianArmourPV2;
class FIG_CadianArmourPV3;
class FIG_CadianArmourPV4;
class FIG_KasrkinArmour;
class FIG_CadianArmourNS;
class FIG_CadianArmourNSPV1;
class FIG_CadianArmourNSPV2;
class FIG_CadianArmourNSPV3;
class FIG_CadianArmourNSPV4;
class IC_CAD_FlakVest;
class VestItem;
class 203rd_Flakweave_Vest: IC_CAD_FlakVest
	{
		author="Brentwood";
		displayName="$STR_TAG_203rdMW_Vest_Crew";
		scope=2;
		class ItemInfo: VestItem
		{
			uniformModel="\IC_CAD_INF\Vest\IC_CAD_flakvest.p3d";
			containerClass="Supply100";
			mass=30;
			hiddenSelections[]=
			{
				"Camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\IC_cad_inf\Vest\Data\CAD_vest_co.paa",
				"\IC_cad_inf\Vest\Data\CAD_flakarmor_green_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class 203rd_Armor: FIG_CadianArmour
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_V0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianArmour.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianArmour_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=10;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=12;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=26;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=8;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
		};
	};
	class 203rd_Armor_V1: FIG_CadianArmourPV1
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_V1";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianArmourPV1.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\203rd_Equipment\data\203rd_CadianArmor.paa",
				"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=10;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=12;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=26;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=8;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
		};
	};
	class 203rd_Armor_V2: FIG_CadianArmourPV2
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_V2";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianArmourPV2.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\203rd_Equipment\data\203rd_CadianArmor.paa",
				"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=10;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=12;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=26;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=8;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
		};
	};
	class 203rd_CadianArmor_V2_Zubastik: 203rd_Armor_V2
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_V2_Zubastik";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Zubastik.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V3: FIG_CadianArmourPV3
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_V3";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianArmourPV3.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\203rd_Equipment\data\203rd_CadianArmor.paa",
				"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
				"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=10;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=12;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=26;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=8;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
		};
	};
	class 203rd_Armor_V4: FIG_CadianArmourPV4
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_V4";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianArmourPV4.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\203rd_Equipment\data\203rd_CadianArmor.paa",
				"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
				"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=10;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=12;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=30;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=8;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
		};
	};
	class 203rd_Armor_Medicae: 203rd_Armor
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_M_V0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Medicae.paa"
		};
	};
	class 203rd_Armor_V1_Medicae: 203rd_Armor_V1
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_M_V1";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Medicae.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V2_Medicae: 203rd_Armor_V2
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_M_V2";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Medicae.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V3_Medicae: 203rd_Armor_V3
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_M_V3";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Medicae.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_V4_Medicae: 203rd_Armor_V4
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_M_V4";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Medicae.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_Veteran_Medicae: 203rd_Armor
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_M_Vet_V0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran_Medicae.paa"
		};
	};
	class 203rd_Armor_V1_Veteran_Medicae: 203rd_Armor_V1
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_M_Vet_V1";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran_Medicae.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V2_Veteran_Medicae: 203rd_Armor_V2
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_M_Vet_V2";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran_Medicae.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V3_Veteran_Medicae: 203rd_Armor_V3
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_M_Vet_V3";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran_Medicae.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_V4_Veteran_Medicae: 203rd_Armor_V4
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_M_Vet_V4";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran_Medicae.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_Veteran: 203rd_Armor
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_Vet_V0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran.paa"
		};
	};
	class 203rd_Armor_V1_Veteran: 203rd_Armor_V1
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_Vet_V1";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V2_Veteran: 203rd_Armor_V2
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_Vet_V2";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V3_Veteran: 203rd_Armor_V3
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_Vet_V3";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_V4_Veteran: 203rd_Armor_V4
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_Vet_V0";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_Sergeant: 203rd_Armor
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SGT_V0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Sergeant.paa"
		};
	};
	class 203rd_Armor_V1_Sergeant: 203rd_Armor_V1
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SGT_V1";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Sergeant.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V2_Sergeant: 203rd_Armor_V2
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SGT_V2";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Sergeant.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V3_Sergeant: 203rd_Armor_V3
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SGT_V3";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Sergeant.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_V3_Voodoo: 203rd_Armor_V3
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SGT_V3_Muller";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Sergeant_Muller.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_V4_Sergeant: 203rd_Armor_V4
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SGT_V4";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Sergeant.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_Officer: 203rd_Armor
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_OFC_V0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Officer.paa"
		};
	};
	class 203rd_Armor_V1_Officer: 203rd_Armor_V1
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_OFC_V1";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Officer.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V2_Officer: 203rd_Armor_V2
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_OFC_V2";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Officer.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V3_Officer: 203rd_Armor_V3
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_OFC_V3";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Officer.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_V3_Vest: 203rd_Armor_V3
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_OFC_V3_SOLNCELIKIY_KOMANDIR_KAPITAN_FON_KRASS";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Officer_FonKrass.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_V4_Officer: 203rd_Armor_V4
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_OFC_V4";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Officer.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_V4_Officer_Brimmy : 203rd_Armor_V4 {
		author = "Brentwood";
		scope = 2;
		displayName = "$STR_TAG_203rdMW_Vest_OFC_V4_Brimmy_Shmimmy";
		hiddenSelections[] = 
		{
			"camo",
			"camo1",
			"camo2"
			};
		hiddenSelectionsTextures[] = 
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Officer_Brimmy.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_SpecialWeapons: 203rd_Armor
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SPC_V0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_SpecialWeapons.paa"
		};
	};
	class 203rd_Armor_V1_SpecialWeapons: 203rd_Armor_V1
 	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SPC_V1";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_SpecialWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V2_SpecialWeapons: 203rd_Armor_V2
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SPC_V2";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_SpecialWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V3_SpecialWeapons: 203rd_Armor_V3
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SPC_V3";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_SpecialWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_V4_SpecialWeapons: 203rd_Armor_V4
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SPC_V4";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_SpecialWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_Veteran_SpecialWeapons: 203rd_Armor
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SPC_VET_V0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran_SpecialWeapons.paa"
		};
	};
	class 203rd_Armor_V1_Veteran_SpecialWeapons: 203rd_Armor_V1
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SPC_VET_V1";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran_SpecialWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V2_Veteran_SpecialWeapons: 203rd_Armor_V2
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SPC_VET_V2";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran_SpecialWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V3_Veteran_SpecialWeapons: 203rd_Armor_V3
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SPC_VET_V3";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran_SpecialWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_V4_Veteran_SpecialWeapons: 203rd_Armor_V4
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_SPC_VET_V4";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran_SpecialWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_HeavyWeapons: 203rd_Armor
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_HWT_V0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_HeavyWeapons.paa"
		};
	};
	class 203rd_Armor_V1_HeavyWeapons: 203rd_Armor_V1
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_HWT_V1";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_HeavyWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V2_HeavyWeapons: 203rd_Armor_V2
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_HWT_V2";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_HeavyWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V3_HeavyWeapons: 203rd_Armor_V3
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_HWT_V3";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_HeavyWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_V4_HeavyWeapons: 203rd_Armor_V4
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_HWT_V4";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_HeavyWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_Veteran_HeavyWeapons: 203rd_Armor
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_HWT_VET_V0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran_HeavyWeapons.paa"
		};
	};
	class 203rd_Armor_V1_Veteran_HeavyWeapons: 203rd_Armor_V1
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_HWT_VET_V1";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran_HeavyWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V2_Veteran_HeavyWeapons: 203rd_Armor_V2
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_HWT_VET_V2";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran_HeavyWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Armor_V3_Veteran_HeavyWeapons: 203rd_Armor_V3
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_HWT_VET_V3";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran_HeavyWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_V4_Veteran_HeavyWeapons: 203rd_Armor_V4
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_HWT_VET_V4";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran_HeavyWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Armor_Kasrkin: FIG_KasrkinArmour
	{
		displayName="$STR_TAG_203rdMW_Vest_Kasr";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Kasrkin.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianArmor_Adds_Kasrkin.paa",
			""
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply120";
			uniformModel="\FIG_Imperial_Guard\FIG_Harakoni\FIG_HarakoniArmour.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
			hiddenSelectionsTextures[]=
			{
				"\FIG_Imperial_Guard\FIG_Harakoni\data\FIG_HarakoniArmour_co.paa",
				"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
				"",
				"\FIG_Imperial_Guard\FIG_Harakoni\data\FIG_HarakoniAddon_co.paa",
				"\FIG_Imperial_Guard\FIG_Harakoni\data\FIG_HarakoniAddon_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=16;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=20;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=36;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=30;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=18;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=12;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
		};
	};
	class 203rd_Armor_Kasrkin_Medicae: 203rd_Armor_Kasrkin
	{
		displayName="$STR_TAG_203rdMW_Vest_Kasr_Med";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Kasrkin_Medicae.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianArmor_Adds_Kasrkin.paa",
			""
		};
	};
	class 203rd_Armor_Kasrkin_Veteran_Medicae: 203rd_Armor_Kasrkin
	{
		displayName="$STR_TAG_203rdMW_Vest_Kasr_Med_VET";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Kasrkin_Veteran_Medicae.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianArmor_Adds_Kasrkin.paa",
			""
		};
	};
	class 203rd_Armor_Kasrkin_Veteran: 203rd_Armor_Kasrkin
	{
		displayName="$STR_TAG_203rdMW_Vest_Kasr_VET";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Kasrkin_Veteran.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianArmor_Adds_Kasrkin.paa",
			""
		};
	};
	class 203rd_Armor_Kasrkin_Sergeant: 203rd_Armor_Kasrkin
	{
		displayName="$STR_TAG_203rdMW_Vest_Kasr_SGT";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Kasrkin_Sergeant.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianArmor_Adds_Kasrkin.paa",
			""
		};
	};
	class 203rd_Armor_Kasrkin_Sergeant_Steel: 203rd_Armor_Kasrkin
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_Kasr_SGT_Steel";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Kasrkin_Sergeant_Steel.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianArmor_Adds_Kasrkin.paa"
		};
	};
	class 203rd_Armor_Kasrkin_SpecialWeapons: 203rd_Armor_Kasrkin
	{
		displayName="$STR_TAG_203rdMW_Vest_Kasr_SWT";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Kasrkin_SpecialWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianArmor_Adds_Kasrkin.paa",
			""
		};
	};
	class 203rd_Armor_Kasrkin_HeavyWeapons: 203rd_Armor_Kasrkin
	{
		displayName="$STR_TAG_203rdMW_Vest_Kasr_HWT";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Kasrkin_HeavyWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianArmor_Adds_Kasrkin.paa",
			""
		};
	};
	class 203rd_Armor_Kasrkin_Veteran_SpecialWeapons: 203rd_Armor_Kasrkin
	{
		displayName="$STR_TAG_203rdMW_Vest_Kasr_SWT_VET";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Kasrkin_Veteran_SpecialWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianArmor_Adds_Kasrkin.paa",
			""
		};
	};
	class 203rd_Armor_Kasrkin_Veteran_HeavyWeapons: 203rd_Armor_Kasrkin
	{
		displayName="$STR_TAG_203rdMW_Vest_Kasr_HWT_VET";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Kasrkin_Veteran_HeavyWeapons.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianArmor_Adds_Kasrkin.paa",
			""
		};
	};
	class 203rd_Armor_heavyarmour_Officer : FIG_KasrkinArmour {
 		displayName = "$STR_TAG_203rdMW_Vest_Heavy_Officer";
		scope = 2;
		hiddenSelections[] = 
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
 		hiddenSelectionsTextures[] = 
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Officer.paa", 
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa", 
			"", 
			"\203rd_Equipment\data\203rd_CadianArmor_Adds.paa", 
			""
		};
	};
	class 203rd_Armor_heavyarmour_Officer_Vest : FIG_KasrkinArmour {
 		displayName = "$STR_TAG_203rdMW_Vest_Heavy_Officer_SOLNCELIKIY_KOMANDIR_KAPITAN_FON_KRASS";
		scope = 2;
		hiddenSelections[] = 
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
 		hiddenSelectionsTextures[] = 
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Officer_FonKrass.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianArmor_Adds.paa",
			""
		};
	};
	class 203rd_Armor_heavyarmour_Veteran : FIG_KasrkinArmour {
 		displayName = "$STR_TAG_203rdMW_Vest_Heavy_Veteran";
		scope = 2;
		hiddenSelections[] = 
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
 		hiddenSelectionsTextures[] = 
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Veteran.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianArmor_Adds.paa",
			""
		};
	};
	class 203rd_Armor_heavyarmour_Sergeant : FIG_KasrkinArmour {
 		displayName = "$STR_TAG_203rdMW_Vest_Heavy_Sergeant";
		scope = 2;
		hiddenSelections[] = 
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
 		hiddenSelectionsTextures[] = 
		{
			"\203rd_Equipment\data\203rd_CadianArmor_Sergeant.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"",
			"\203rd_Equipment\data\203rd_CadianArmor_Adds.paa",
			""
		};
	};
	class 203rd_Light_Armor: FIG_CadianArmourNS
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_L_V0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor.paa"
		};
	};
	class 203rd_Light_Armor_PSY: FIG_CadianArmourNS
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_L_PSY";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor_PSY.paa"
		};
	};
	class 203rd_Light_Armor_V1: FIG_CadianArmourNSPV1
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_L_V1";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Light_Armor_V2: FIG_CadianArmourNSPV2
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_L_V2";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa"
		};
	};
	class 203rd_Light_Armor_V3: FIG_CadianArmourNSPV3
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_L_V3";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};
	class 203rd_Light_Armor_V4: FIG_CadianArmourNSPV4
	{
		author="Brentwood";
		scope=2;
		displayName="$STR_TAG_203rdMW_Vest_L_V4";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_CadianArmor.paa",
			"\203rd_Equipment\data\203rd_CadianPouches_co.paa",
			"\203rd_Equipment\data\203rd_CadianPouchesV2_co.paa"
		};
	};