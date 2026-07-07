	class TIOW_CadianChimAuto_836: Tank_F
	{
		class Turrets: Turrets
		{
<<<<<<< Updated upstream
			class MainTurret: NewTurret
=======
			class MainTurret: NewTurret {};
			class HullGun: NewTurret {};
			class lasg_front_left: NewTurret {};
			class lasg_middle_left: NewTurret {};
			class lasg_back_left: NewTurret {};
			class lasg_front_right: NewTurret {};
			class lasg_middle_right: NewTurret {};
			class lasg_back_right: NewTurret {};
		};
	};
	class TIOW_CadianChimAuto_836: _1489thChimAuto {};
	class IC_Chimera_01_base: Tank_F
	{
		class ViewOptics;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn { class Wide; class Narrow; };
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics;
						class OpticsIn { class Wide; class Medium; class Narrow; };
					};
				};
			};
			class IC_Hull_turret: NewTurret { class OpticsIn { class Wide; class Narrow; }; };
		};
	};
	class IC_Chimedon_01_base: IC_Chimera_01_base {};
	class IC_Chimerro_01_base: IC_Chimera_01_base {};
	class C203_TIOW_CadianChimAuto_836_NVG: TIOW_CadianChimAuto_836
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
>>>>>>> Stashed changes
			{
				turretInfoType="RscOptics_ICP_APC_Gunner_01";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={4};
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_N.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
			};
			class HullGun: NewTurret
			{
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={4};
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_N.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
			};
			class lasg_front_left: NewTurret
			{
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={4};
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_N.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
			};
			class lasg_middle_left: NewTurret
			{
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={4};
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_N.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
			};
			class lasg_back_left: NewTurret
			{
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={4};
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_N.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
			};
			class lasg_front_right: NewTurret
			{
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={4};
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_N.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
			};
			class lasg_middle_right: NewTurret
			{
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={4};
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_N.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
			};
			class lasg_back_right: NewTurret
			{
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={4};
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_N.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
			};
		};
	};
<<<<<<< Updated upstream
	class C203_vehicle_APC_Chimera_01: TIOW_CadianChimAuto_836
=======
	class C203_IC_Chimera_01_NVG: IC_Chimera_01_base
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
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {4};
					};
					class Narrow: Narrow
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {4};
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics: ViewOptics
						{
							visionMode[] = {"Normal","NVG","Ti"};
							thermalMode[] = {4};
						};
						class OpticsIn: OpticsIn
						{
							class Wide: Wide
							{
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {4};
							};
							class Medium: Medium
							{
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {4};
							};
							class Narrow: Narrow
							{
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {4};
							};
						};
					};
				};
			};
			class IC_Hull_turret: IC_Hull_turret
			{
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {4};
					};
					class Narrow: Narrow
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {4};
					};
				};
			};
		};
	};
	class C203_IC_Chimedon_01_NVG: IC_Chimedon_01_base
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
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {4};
					};
					class Narrow: Narrow
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {4};
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics: ViewOptics
						{
							visionMode[] = {"Normal","NVG","Ti"};
							thermalMode[] = {4};
						};
						class OpticsIn: OpticsIn
						{
							class Wide: Wide
							{
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {4};
							};
							class Medium: Medium
							{
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {4};
							};
							class Narrow: Narrow
							{
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {4};
							};
						};
					};
				};
			};
			class IC_Hull_turret: IC_Hull_turret
			{
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {4};
					};
					class Narrow: Narrow
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {4};
					};
				};
			};
		};
	};	
	class C203_IC_Chimerro_01_NVG: IC_Chimerro_01_base
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
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {4};
					};
					class Narrow: Narrow
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {4};
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics: ViewOptics
						{
							visionMode[] = {"Normal","NVG","Ti"};
							thermalMode[] = {4};
						};
						class OpticsIn: OpticsIn
						{
							class Wide: Wide
							{
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {4};
							};
							class Medium: Medium
							{
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {4};
							};
							class Narrow: Narrow
							{
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {4};
							};
						};
					};
				};
			};
			class IC_Hull_turret: IC_Hull_turret
			{
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {4};
					};
					class Narrow: Narrow
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {4};
					};
				};
			};
		};
	};
	class C203_vehicle_APC_Chimera_01: C203_TIOW_CadianChimAuto_836_NVG
>>>>>>> Stashed changes
	{
		displayName="$STR_TAG_203rdMW_Middle_Vehicle_Chimera_TIOW";
		crew="203rd_02";
		side=1;
		scope=2;
		scopeCurator = 2;
		accuracy=1000;
		faction = "203rdMW_Faction";
		editorSubcategory = "203rdMW_Vehicle_Middle";
		typicalCargo[]=
		{
			"203rd_03"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\chimera\TIOW\CM_203_TIOW_co.paa",
			"vehicles\data\203Insignia_TIOW.paa",
			"APCs\Data\Chimera_Track_co.paa"
		};
	};
	class IC_Chimera_01_base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner: ViewOptics
				{
					initAngleX=-5;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=-0.075000003;
					maxMoveX=0.075000003;
					minMoveY=-0.075000003;
					maxMoveY=0.075000003;
					minMoveZ=-0.075000003;
					maxMoveZ=0.1;
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={4};
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_N.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
			};
			class IC_Hull_turret : NewTurret
			{
				class ViewGunner: ViewOptics
				{
					initAngleX=-5;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=-0.075000003;
					maxMoveX=0.075000003;
					minMoveY=-0.075000003;
					maxMoveY=0.075000003;
					minMoveZ=-0.075000003;
					maxMoveZ=0.1;
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={4};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
			};
		};
	};
	class C203_vehicle_APC_Chimera_02: IC_Chimera_01_base
	{
		class EventHandlers;
		displayName="$STR_TAG_203rdMW_Middle_Vehicle_Chimera";
		crew="203rd_02";
		side=1;
		scope=2;
		accuracy=1000;
		faction = "203rdMW_Faction";
		editorSubcategory = "203rdMW_Vehicle_Middle";
		typicalCargo[]=
		{
			"203rd_03"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\chimera\ICP\CM_203_ICP_hull_co.paa",
			"vehicles\data\chimera\ICP\CM_203_ICP_tracks_co.paa",
			"vehicles\data\chimera\ICP\CM_203_ICP_turret_co.paa"
		};
	};
	class C203_vehicle_land_Chimera: IC_Chimera_01_base
	{
		class EventHandlers;
		displayName="$STR_TAG_203rdMW_Middle_Vehicle_Chimera";
		crew="203rd_02";
		side=1;
		scope=2;
		accuracy=1000;
		faction="203rdMW_Faction";
<<<<<<< Updated upstream
		editorSubcategory="203rdMW_Vehicle_Middle";
=======
		editorCategory="C203_EdCat_Vehicles";
		editorSubcategory="203rdMW_Veh_Middle_COM";
		vehicleClass="C203_VehicleClass_Middle";
>>>>>>> Stashed changes
		typicalCargo[]=
		{
			"203rd_03"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\kshm_chimera\203_chimera_hull_co.paa",
			"vehicles\data\kshm_chimera\203_chimera_track_co.paa",
			"vehicles\data\kshm_chimera\203_chimera_turret_co.paa"
		};
	};
	class C203_vehicle_APC_Chimera_02M: C203_vehicle_APC_Chimera_02
	{
		displayName="$STR_TAG_203rdMW_Middle_Vehicle_Chimera_MED";
		attendant=1;
		ace_medical_treatment_patientSeats[]={8,9,13,14,15,16};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\chimera\ICP\CM_203_ICP_hull_co.paa",
			"vehicles\data\chimera\ICP\CM_203_ICP_tracks_m_co.paa",
			"vehicles\data\chimera\ICP\CM_203_ICP_turret_co.paa"
		};
		autoDocMaxFluid=49000;
	};
	class IC_Chimedon_01_base : Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner: ViewOptics
				{
					initAngleX=-5;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=-0.075000003;
					maxMoveX=0.075000003;
					minMoveY=-0.075000003;
					maxMoveY=0.075000003;
					minMoveZ=-0.075000003;
					maxMoveZ=0.1;
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_N.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
			};
		};
	};
	class C203_vehicle_APC_Chimedon_01: IC_Chimedon_01_base
	{
		displayName="$STR_TAG_203rdMW_Middle_Vehicle_Chimedon";
		crew="203rd_02";
		side=1;
		scope=2;
		accuracy=1000;
		faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Vehicle_Middle";
		typicalCargo[]=
		{
			"203rd_03"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\chimera\ICP\CM_203_ICP_hull_co.paa",
			"vehicles\data\chimera\ICP\CM_203_ICP_tracks_co.paa",
			"vehicles\data\chimera\ICP\CM_203_ICP_turret_co.paa",
			"vehicles\data\chimera\ICP\CM_203_ICP_var_co.paa"
		};
	};
	class C203_vehicle_land_Chimedon: IC_Chimedon_01_base
	{
		displayName="$STR_TAG_203rdMW_Middle_Vehicle_Chimedon";
		crew="203rd_02";
		side=1;
		scope=2;
		accuracy=1000;
		faction="203rdMW_Faction";
<<<<<<< Updated upstream
		editorSubcategory="203rdMW_Vehicle_Middle";
=======
		editorCategory="C203_EdCat_Vehicles";
		editorSubcategory="203rdMW_Veh_Middle_COM";
		vehicleClass="C203_VehicleClass_Middle";
>>>>>>> Stashed changes
		typicalCargo[]=
		{
			"203rd_03"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\kshm_chimera\203_chimera_hull_co.paa",
			"vehicles\data\kshm_chimera\203_chimera_track_co.paa",
			"vehicles\data\kshm_chimera\203_chimera_turret_co.paa",
			"vehicles\data\kshm_chimera\203_chimera_addons_co.paa"
		};
	};
	class IC_Chimerro_01_base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner: ViewOptics
				{
					initAngleX=-5;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=-0.075000003;
					maxMoveX=0.075000003;
					minMoveY=-0.075000003;
					maxMoveY=0.075000003;
					minMoveZ=-0.075000003;
					maxMoveZ=0.1;
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={4};
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_APC_01_N.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
			};
			class IC_Hull_turret : NewTurret
			{
				class ViewGunner: ViewOptics
				{
					initAngleX=-5;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=-0.075000003;
					maxMoveX=0.075000003;
					minMoveY=-0.075000003;
					maxMoveY=0.075000003;
					minMoveZ=-0.075000003;
					maxMoveZ=0.1;
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={4};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
			};
		};
	};
	class C203_vehicle_APC_Chimerro_01: IC_Chimerro_01_base
	{
		displayName="$STR_TAG_203rdMW_Middle_Vehicle_Chimerro";
		crew="203rd_02";
		side=1;
		scope=2;
		accuracy=1000;
		faction="203rdMW_Faction";
		editorSubcategory="203rdMW_Vehicle_Middle";
		typicalCargo[]=
		{
			"203rd_03"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\chimera\ICP\CM_203_ICP_hull_co.paa",
			"vehicles\data\chimera\ICP\CM_203_ICP_tracks_co.paa",
			"vehicles\data\chimera\ICP\CM_203_ICP_turret_co.paa",
			"vehicles\data\chimera\ICP\CM_203_ICP_var_co.paa"
		};
	};
	class C203_vehicle_land_Chimerro : IC_Chimerro_01_base
	{
		displayName="$STR_TAG_203rdMW_Middle_Vehicle_Chimerro";
		crew="203rd_02";
		side=1;
		scope=2;
		accuracy=1000;
		faction="203rdMW_Faction";
<<<<<<< Updated upstream
		editorSubcategory="203rdMW_Vehicle_Middle";
=======
		editorCategory="C203_EdCat_Vehicles";
		editorSubcategory="203rdMW_Veh_Middle_COM";
		vehicleClass="C203_VehicleClass_Middle";
>>>>>>> Stashed changes
		typicalCargo[]=
		{
			"203rd_03"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\kshm_chimera\203_chimera_hull_co.paa",
			"vehicles\data\kshm_chimera\203_chimera_track_co.paa",
			"vehicles\data\kshm_chimera\203_chimera_turret_co.paa",
			"vehicles\data\kshm_chimera\203_chimera_addons_co.paa"
		};
	};