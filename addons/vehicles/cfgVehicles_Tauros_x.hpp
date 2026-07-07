	class IC_Taurox_base;
	class IC_Taurox_HS_desert: IC_Taurox_base
	{
		class EventHandlers;
	};
<<<<<<< Updated upstream
	class C203_Vehicle_APC_Taurox_01: IC_Taurox_HS_desert
=======
	class IC_Taurox_HS_desert: IC_Taurox_base {};
	class C203_IC_Taurox_HS_desert_NVG: IC_Taurox_HS_desert
	{
		showNVGDriver=1;
		showNVGCommander=1;
		showNVGGunner=1;
		scope=0;
		scopeCurator=0;
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG","Ti"};
			thermalMode[] = {4};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {4};
				};
			};
		};
	};
	class C203_Vehicle_APC_Taurox_01: C203_IC_Taurox_HS_desert_NVG
>>>>>>> Stashed changes
	{
		scope=2;

		displayName="$STR_TAG_203rdMW_Light_Vehicle_Taurox";
		side=1;
		hasCommander=0;
		faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light";
		crew="203rd_02";
		crewVulnerable=1;
		transportSoldier=10;
		fuelExplosionPower=1;
		typicalCargo[]=
		{
			"203rd_03"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camonet_back",
			"camonet_front",
			"Armor_plates"
		};
		hiddenSelectionsTextures[]=
		{
			"\vehicles\data\taurox\c203_taurox_co.paa",
			"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
			"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
			"\vehicles\data\taurox\c203_taurox_addon_co.paa"
		};
		class textureSources
		{
			class C203
			{
				displayName="203rd Standard";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_co.paa",
					"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
					"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Hydra_Command
			{
				displayName="203rd Hydra 1-0";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_H1_0_co.paa",
					"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
					"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Basilisk_Command
			{
				displayName="203rd Basilisk 1-0";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_B1_0_co.paa",
					"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
					"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Basilisk_1_1
			{
				displayName="203rd Basilisk 1-1";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_B1_1_co.paa",
					"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
					"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Basilisk_1_2
			{
				displayName="203rd Basilisk 1-2";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_B1_2_co.paa",
					"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
					"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
		};
	};
	class C203_Vehicle_land_Taurox_HS: IC_Taurox_HS_desert
	{
		scope=2;

		displayName="$STR_TAG_203rdMW_Light_Vehicle_Taurox";
		side=1;
		hasCommander=0;
		faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light_COM";
		crew="203rd_02";
		crewVulnerable=1;
		transportSoldier=10;
		fuelExplosionPower=1;
		typicalCargo[]=
		{
			"203rd_03"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camonet_back",
			"camonet_front",
			"Armor_plates"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\kshm_taurox\203_taurox_camo_co.paa",
			"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
			"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
			"vehicles\data\kshm_taurox\203_taurox_armour_co.paa"
		};
	};
	class C203_Vehicle_APC_Taurox_01M: C203_Vehicle_APC_Taurox_01
	{
		displayName="$STR_TAG_203rdMW_Light_Vehicle_Taurox_MED";
		hiddenSelectionsTextures[]=
		{
			"\vehicles\data\taurox\c203_taurox_M_co.paa",
			"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
			"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
			"\vehicles\data\taurox\c203_taurox_addon_co.paa"
		};
		attendant=1;
		autoDocMaxFluid=49000;
		class textureSources
		{
			class C203
			{
				displayName="203rd Standard";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_M_co.paa",
					"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
					"\IC_Taurox\Data\camonets\camonet_winter_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
		};
	};
	class IC_Taurox_BattleCannon: IC_Taurox_base
	{
		class EventHandlers;
	};
	class C203_Vehicle_APC_Taurox_02: IC_Taurox_BattleCannon
	{
		scope=2;

		displayName="$STR_TAG_203rdMW_Light_Vehicle_Taurox_Prime_BC";
		side=1;
		hasCommander=0;
		faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light";
		crew="203rd_02";
		crewVulnerable=1;
		transportSoldier=10;
		fuelExplosionPower=1;
		typicalCargo[]=
		{
			"203rd_03"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Armor_plates"
		};
		hiddenSelectionsTextures[]=
		{
			"\vehicles\data\taurox\c203_taurox_co.paa",
			"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
			"\vehicles\data\taurox\c203_taurox_addon_co.paa"
		};
		class textureSources
		{
			class C203
			{
				displayName="203rd Standard";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_co.paa",
					"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Hydra_Command
			{
				displayName="203rd Hydra 1-0";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_H1_0_co.paa",
					"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Basilisk_Command
			{
				displayName="203rd Basilisk 1-0";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_B1_0_co.paa",
					"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Basilisk_1_1
			{
				displayName="203rd Basilisk 1-1";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_B1_1_co.paa",
					"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Basilisk_1_2
			{
				displayName="203rd Basilisk 1-2";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_B1_2_co.paa",
					"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
		};
	};
	class C203_vehicle_land_Taurox_BC: IC_Taurox_BattleCannon
	{
		scope=2;

		displayName="$STR_TAG_203rdMW_Light_Vehicle_Taurox_Prime_BC";
		side=1;
		hasCommander=0;
		faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light_COM";
		crew="203rd_02";
		crewVulnerable=1;
		transportSoldier=10;
		fuelExplosionPower=1;
		typicalCargo[]=
		{
			"203rd_03"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\kshm_taurox\203_taurox_camo_co.paa",
			"vehicles\data\kshm_taurox\203_taurox_turret_co.paa",
			"vehicles\data\kshm_taurox\203_taurox_armour_co.paa"
		};
	};
	class IC_Taurox_GatlingGun: IC_Taurox_base
	{
		class EventHandlers;
	};
	class C203_Vehicle_APC_Taurox_03: IC_Taurox_GatlingGun
	{
		scope=2;

		displayName="$STR_TAG_203rdMW_Light_Vehicle_Taurox_Prime_GG";
		side=1;
		hasCommander=0;
		faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light";
		crew="203rd_02";
		crewVulnerable=1;
		transportSoldier=10;
		fuelExplosionPower=1;
		typicalCargo[]=
		{
			"203rd_03"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Armor_plates"
		};
		hiddenSelectionsTextures[]=
		{
			"\vehicles\data\taurox\c203_taurox_co.paa",
			"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
			"\vehicles\data\taurox\c203_taurox_addon_co.paa"
		};
		class textureSources
		{
			class C203
			{
				displayName="203rd Standard";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_co.paa",
					"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Hydra_Command
			{
				displayName="203rd Hydra 1-0";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_H1_0_co.paa",
					"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Basilisk_Command
			{
				displayName="203rd Basilisk 1-0";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_B1_0_co.paa",
					"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Basilisk_1_1
			{
				displayName="203rd Basilisk 1-1";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_B1_1_co.paa",
					"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Basilisk_1_2
			{
				displayName="203rd Basilisk 1-2";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_B1_2_co.paa",
					"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
		};
	};
	class C203_vehicle_land_Taurox_GG: IC_Taurox_GatlingGun
	{
		scope=2;

		displayName="$STR_TAG_203rdMW_Light_Vehicle_Taurox_Prime_GG";
		side=1;
		hasCommander=0;
		faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light_COM";
		crew="203rd_02";
		crewVulnerable=1;
		transportSoldier=10;
		fuelExplosionPower=1;
		typicalCargo[]=
		{
			"203rd_03"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Armor_plates"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\kshm_taurox\203_taurox_camo_co.paa",
			"vehicles\data\kshm_taurox\203_taurox_turret_co.paa",
			"vehicles\data\kshm_taurox\203_taurox_armour_co.paa"
		};
	};
	class IC_Taurox_AutoCannon: IC_Taurox_base
	{
		class EventHandlers;
	};
	class C203_Vehicle_APC_Taurox_04: IC_Taurox_AutoCannon
	{
		scope=2;

		displayName="$STR_TAG_203rdMW_Light_Vehicle_Taurox_Prime_AC";
		side=1;
		hasCommander=0;
		faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light";
		crew="203rd_02";
		crewVulnerable=1;
		transportSoldier=10;
		fuelExplosionPower=1;
		typicalCargo[]=
		{
			"203rd_03"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Armor_plates"
		};
		hiddenSelectionsTextures[]=
		{
			"\vehicles\data\kshm_taurox\c203_taurox_co.paa",
			"\vehicles\data\kshm_taurox\c203_taurox_turrets_co.paa",
			"\vehicles\data\kshm_taurox\c203_taurox_addon_co.paa"
		};
		class textureSources
		{
			class C203
			{
				displayName="203rd Standard";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_co.paa",
					"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Hydra_Command
			{
				displayName="203rd Hydra 1-0";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_H1_0_co.paa",
					"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Basilisk_Command
			{
				displayName="203rd Basilisk 1-0";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_B1_0_co.paa",
					"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Basilisk_1_1
			{
				displayName="203rd Basilisk 1-1";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_B1_1_co.paa",
					"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
			class Basilisk_1_2
			{
				displayName="203rd Basilisk 1-2";
				author="CannonFodderMK4";
				textures[]=
				{
					"\vehicles\data\taurox\c203_taurox_B1_2_co.paa",
					"\vehicles\data\taurox\c203_taurox_turrets_co.paa",
					"\vehicles\data\taurox\c203_taurox_addon_co.paa"
				};
				factions[]={};
			};
		};
	};
	class C203_vehicle_land_Taurox_AC: IC_Taurox_AutoCannon
	{
		scope=2;

		displayName="$STR_TAG_203rdMW_Light_Vehicle_Taurox_Prime_AC";
		side=1;
		hasCommander=0;
		faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light_COM";
		crew="203rd_02";
		crewVulnerable=1;
		transportSoldier=10;
		fuelExplosionPower=1;
		typicalCargo[]=
		{
			"203rd_03"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Armor_plates"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\kshm_chimera\203_taurox_camo_co.paa",
			"vehicles\data\kshm_chimera\203_taurox_turret_co.paa",
			"vehicles\data\kshm_chimera\203_taurox_armour_co.paa"
		};
	};
	class IC_Tauros_base_F;
	class IC_Tauros_unarmed_woodland_F: IC_Tauros_base_F
	{
		class EventHandlers;
	};
	class IC_Tauros_GMG_base_F: IC_Tauros_base_F
	{
		class EventHandlers;
	};
	class IC_Tauros_HMG_base_F: IC_Tauros_base_F
	{
		class EventHandlers;
	};
	class IC_Tauros_venator_base_F: IC_Tauros_base_F
	{
		class EventHandlers;
	};
	class C203_Vehicle_Car_Tauros_01: IC_Tauros_unarmed_woodland_F
	{
		scope=2;

		Faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light";
		crew="203rd_02";
		displayName="$STR_TAG_203rdMW_Light_Vehicle_Tauros_U";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\tauros\203_tauros_co.paa",
			"vehicles\data\tauros\203_dashboard_co.paa"
		};
	};
	class C203_Vehicle_land_Tauros_U: IC_Tauros_unarmed_woodland_F
	{
		scope=2;

		Faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light_COM";
		crew="203rd_02";
		displayName="$STR_TAG_203rdMW_Light_Vehicle_Tauros_U";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\kshm_tauros\203_tauros_body_co.paa",
			"vehicles\data\kshm_tauros\203_tauros_dash_co.paa"
		};
	};
	class C203_Vehicle_Car_Tauros_02: IC_Tauros_GMG_base_F
	{
		scope=2;

		Faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light";
		crew="203rd_02";
		displayName="$STR_TAG_203rdMW_Light_Vehicle_Tauros_GMG";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\tauros\203_tauros_co.paa",
			"vehicles\data\tauros\203_dashboard_co.paa"
		};
	};
	class C203_Vehicle_land_Tauros_GMG: IC_Tauros_GMG_base_F
	{
		scope=2;

		Faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light_COM";
		crew="203rd_02";
		displayName="$STR_TAG_203rdMW_Light_Vehicle_Tauros_GMG";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\kshm_tauros\203_tauros_body_co.paa",
			"vehicles\data\kshm_tauros\203_tauros_dash_co.paa"
		};
	};
	class C203_Vehicle_Car_Tauros_03: IC_Tauros_HMG_base_F
	{
		scope=2;

		Faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light";
		crew="203rd_02";
		displayName="$STR_TAG_203rdMW_Light_Vehicle_Tauros_HMG";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\tauros\203_tauros_co.paa",
			"vehicles\data\tauros\203_dashboard_co.paa"
		};
	};
	class C203_Vehicle_land_Tauros_HMG: IC_Tauros_HMG_base_F
	{
		scope=2;

		Faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light_COM";
		crew="203rd_02";
		displayName="$STR_TAG_203rdMW_Light_Vehicle_Tauros_HMG";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\kshm_tauros\203_tauros_body_co.paa",
			"vehicles\data\kshm_tauros\203_tauros_dash_co.paa"
		};
	};
	class C203_Vehicle_Car_Tauros_04: IC_Tauros_venator_base_F
	{
		scope=2;

		Faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light";
		crew="203rd_02";
		displayName="$STR_TAG_203rdMW_Light_Vehicle_Tauros_Venator";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\tauros\203_tauros_co.paa",
			"vehicles\data\tauros\203_dashboard_co.paa",
			"vehicles\data\tauros\203_venator_turret_co.paa",
			"vehicles\data\tauros\203_venator_plates_co.paa"
		};
	};
	class C203_Vehicle_land_Tauros_Venator: IC_Tauros_venator_base_F
	{
		scope=2;

		Faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Light_COM";
		crew="203rd_02";
		displayName="$STR_TAG_203rdMW_Light_Vehicle_Tauros_Venator";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\kshm_tauros\203_tauros_body_co.paa",
			"vehicles\data\kshm_tauros\203_tauros_dash_co.paa",
			"vehicles\data\kshm_tauros\203_tauros_turret_co.paa",
			"vehicles\data\kshm_tauros\203_tauros_armour_co.paa"
		};
	};