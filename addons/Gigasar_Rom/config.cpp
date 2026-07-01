class DefaultEventhandlers;
class CfgPatches
{
	class Comissar_Roma
	{
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Data_F"
		};
		requiredVersion=0.1;
		weapons[]=
		{
			"Comi_form",
			"Comi_cap",
			"Comi_coat_v"
		};
		units[]=
		{
			"Comi_uniform",
			"Comi_coat"
		};
	};
};
class CfgFactionClasses
{
	class Comi
	{
		displayName="Officio Prefectus";
		priority=100;
		side=1;
	};
};
class CfgEditorSubcategories
{
	class Comi
	{
		displayName="Officio Prefectus";
	};
};
class CfgVehicleClasses
{
	class Comi
	{
		displayName="Officio Prefectus";
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class VestItem;
	class ItemInfo;
	class Integrated_NVG_TI_1_F;
	class NVGoggles;
	class H_HelmetB;
	class U_I_CombatUniform;
	class UniformItem;
	class Comi_form: U_I_CombatUniform
	{
		author="Merek";
		scope=2;
		model="\Gigasar_Rom\model\form.p3d";
		displayName="Comissar Uniform";
		picture="\Gigasar_Rom\UI\form256.paa";
		Upicture="\Gigasar_Rom\UI\form256.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gigasar_Rom\data\form\Com_Form_up_2D_View.paa",
			"\Gigasar_Rom\data\decor\Decor_COM_2D_View.paa",
			"\Gigasar_Rom\data\coat\Coat_COM_2D_View.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="\Gigasar_Rom\model\form.p3d";
			uniformClass="Comi_uniform";
			containerClass="Supply150";
			mass=0;
		};
	};
	class Comi_cap: H_HelmetB
	{
		scope=2;
		scopeArsenal=2;
		author="Merek";
		displayName="Comissar Cap";
		model="\Gigasar_Rom\model\cap.p3d";
		picture="\Gigasar_Rom\UI\cap256.paa";
		Upicture="\Gigasar_Rom\UI\cap256.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gigasar_Rom\data\decor\Decor_COM_2D_View.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\Gigasar_Rom\model\cap.p3d";
			mass=10;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=35;
					passThrough=0.60000002;
				};
			};
		};
	};
	class Vest_Camo_Base;
	class Comi_coat_v: Vest_Camo_Base
	{
		author="Merek";
		scope=2;
		picture="\Gigasar_Rom\UI\coat256.paa";
		Upicture="\Gigasar_Rom\UI\coat256.paa";
		displayName="Comissar coat(vest)";
		model="\Gigasar_Rom\model\coat.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gigasar_Rom\data\form\Com_Form_up_2D_View.paa",
			"\Gigasar_Rom\data\decor\Decor_COM_2D_View.paa",
			"\Gigasar_Rom\data\coat\Coat_COM_2D_View.paa"
		};
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			uniformModel="\Gigasar_Rom\model\coat.p3d";
			containerClass="Supply100";
			mass=15;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\Gigasar_Rom\data\form\Com_Form_up_2D_View.paa",
				"\Gigasar_Rom\data\decor\Decor_COM_2D_View.paa",
				"\Gigasar_Rom\data\coat\Coat_COM_2D_View.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=50;
					passThrough=0.40000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=30;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=60;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=30;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=30;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=50;
					passThrough=0.60000002;
				};
			};
		};
	};
};
class CfgVehicles
{
	class B_Soldier_f;
	class ItemInfo;
	class B_Carryall_Base;
	class Comi_uniform: B_Soldier_f
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		model="\Gigasar_Rom\model\form.p3d";
		linkedItems[]=
		{
			""
		};
		side=1;
		faction="Comi";
		displayName="Comissar";
		uniformClass="Comi_form";
		backpack="";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gigasar_Rom\data\form\Com_Form_up_2D_View.paa",
			"\Gigasar_Rom\data\decor\Decor_COM_2D_View.paa",
			"\Gigasar_Rom\data\coat\Coat_COM_2D_View.paa"
		};
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=5;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=5;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=5;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=0.30000001;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor=2;
		armorStructural=2;
		explosionShielding=0.2;
	};
	class Comi_coat: B_Carryall_Base
	{
		author="Merek";
		scope=2;
		picture="\Gigasar_Rom\UI\coat256.paa";
		Upicture="\Gigasar_Rom\UI\coat256.paa";
		displayName="Comissar coat(backpack)";
		model="\Gigasar_Rom\model\coat.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gigasar_Rom\data\form\Com_Form_up_2D_View.paa",
			"\Gigasar_Rom\data\decor\Decor_COM_2D_View.paa",
			"\Gigasar_Rom\data\coat\Coat_COM_2D_View.paa"
		};
		maximumLoad=880;
		mass=5;
	};
};
class cfgMods
{
	author="MerekGrimaldus";
	timepacked="1726839446";
};
