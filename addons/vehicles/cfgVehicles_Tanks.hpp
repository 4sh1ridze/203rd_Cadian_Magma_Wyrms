	class TIOW_LR_BattleCannon: Tank_F
	{
		class ViewOptics;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics {};
				};
			};
			class FrontGunner: NewTurret {};
			class LHBGunner: NewTurret {};
			class RHBGunner: NewTurret {};
		};
	};
	class TIOW_LR_Vanquisher: TIOW_LR_BattleCannon {};
	class TIOW_LR_Conqueror: TIOW_LR_BattleCannon {};
	class TIOW_LR_Demolisher: TIOW_LR_BattleCannon {};
	class TIOW_LR_Exterminator: TIOW_LR_BattleCannon {};
	class TIOW_LR_Executioner: TIOW_LR_BattleCannon {};
	class TIOW_LR_Annihilator: TIOW_LR_BattleCannon {};
	class TIOW_LR_Punisher: TIOW_LR_BattleCannon {};
	class IC_Leman_Russ_01_base: Tank_F
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
						class OpticsIn { class Wide; class Medium; class Narrow; };
					};
				};
			};
			class Hull_turret: NewTurret { class OpticsIn { class Wide; class Narrow; }; };
			class Left_Sponson_turret: Hull_turret { class OpticsIn { class Wide; class Narrow; }; };
			class Right_Sponson_turret: Hull_turret { class OpticsIn { class Wide; class Narrow; }; };
		};
	};
	class IC_Leman_Russ_01_desert: IC_Leman_Russ_01_base {};
	class IC_Leman_Russ_02_base: IC_Leman_Russ_01_desert {};
	class C203_TIOW_LR_BattleCannon_NVG: TIOW_LR_BattleCannon
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
				turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Medium: Medium
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Narrow: Narrow
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
						};
					};
				};
			};
			class FrontGunner: FrontGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class LHBGunner: LHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class RHBGunner: RHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
	class C203_TIOW_LR_Vanquisher_NVG: TIOW_LR_Vanquisher
	{
		showNVGDriver=1;
		showNVGCommander=1;
		showNVGGunner=1;
		scope=0;
		scopeCurator=0;
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG","Ti"};
			thermalMode[] = {0,1};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Medium: Medium
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Narrow: Narrow
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
						};
					};
				};
			};
			class FrontGunner: FrontGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class LHBGunner: LHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class RHBGunner: RHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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

	class C203_TIOW_LR_Conqueror_NVG: TIOW_LR_Conqueror
	{
		showNVGDriver=1;
		showNVGCommander=1;
		showNVGGunner=1;
		scope=0;
		scopeCurator=0;
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG","Ti"};
			thermalMode[] = {0,1};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Medium: Medium
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Narrow: Narrow
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
						};
					};
				};
			};
			class FrontGunner: FrontGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class LHBGunner: LHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class RHBGunner: RHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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

	class C203_TIOW_LR_Demolisher_NVG: TIOW_LR_Demolisher
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
				turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Medium: Medium
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Narrow: Narrow
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
						};
					};
				};
			};
			class FrontGunner: FrontGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class LHBGunner: LHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class RHBGunner: RHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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

	class C203_TIOW_LR_Exterminator_NVG: TIOW_LR_Exterminator
	{
		showNVGDriver=1;
		showNVGCommander=1;
		showNVGGunner=1;
		scope=0;
		scopeCurator=0;
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG","Ti"};
			thermalMode[] = {0,1};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Medium: Medium
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Narrow: Narrow
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
						};
					};
				};
			};
			class FrontGunner: FrontGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class LHBGunner: LHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class RHBGunner: RHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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

	class C203_TIOW_LR_Executioner_NVG: TIOW_LR_Executioner
	{
		showNVGDriver=1;
		showNVGCommander=1;
		showNVGGunner=1;
		scope=0;
		scopeCurator=0;
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG","Ti"};
			thermalMode[] = {0,1};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Medium: Medium
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Narrow: Narrow
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
						};
					};
				};
			};
			class FrontGunner: FrontGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class LHBGunner: LHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class RHBGunner: RHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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

	class C203_TIOW_LR_Annihilator_NVG: TIOW_LR_Annihilator
	{
		showNVGDriver=1;
		showNVGCommander=1;
		showNVGGunner=1;
		scope=0;
		scopeCurator=0;
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG","Ti"};
			thermalMode[] = {0,1};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Medium: Medium
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Narrow: Narrow
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
						};
					};
				};
			};
			class FrontGunner: FrontGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class LHBGunner: LHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class RHBGunner: RHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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

	class C203_TIOW_LR_Punisher_NVG: TIOW_LR_Punisher
	{
		showNVGDriver=1;
		showNVGCommander=1;
		showNVGGunner=1;
		scope=0;
		scopeCurator=0;
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG","Ti"};
			thermalMode[] = {0,1};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_MBT_01_W.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						turretInfoType="RscOptics_ICP_MBT01_Gunner_01";
						gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Medium: Medium
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
							class Narrow: Narrow
							{
								visionMode[]={"Normal","NVG","Ti"};
								thermalMode[]={4};
								gunnerOpticsModel="\IC_Weapons_base\Reticle\IC_Reticle_Commander_01_W.p3d";
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics2",
									"OpticsBlur1",
									"OpticsCHAbera1"
								};
							};
						};
					};
				};
			};
			class FrontGunner: FrontGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class LHBGunner: LHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
			class RHBGunner: RHBGunner
			{
				turretInfoType="";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
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
	class C203_IC_Leman_Russ_01_NVG: IC_Leman_Russ_01_base
	{
		showNVGDriver=1;
		showNVGCommander=1;
		showNVGGunner=1;
		scope=0;
		scopeCurator=0;
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG","Ti"};
			thermalMode[] = {0,1};
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
						thermalMode[] = {0,1};
					};
					class Narrow: Narrow
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class OpticsIn: OpticsIn
						{
							class Wide: Wide
							{
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {0,1};
							};
							class Medium: Medium
							{
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {0,1};
							};
							class Narrow: Narrow
							{
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {0,1};
							};
						};
					};
				};
			};
			class Hull_turret: Hull_turret
			{
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
					class Narrow: Narrow
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
				};
			};
			class Left_Sponson_turret: Left_Sponson_turret
			{
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
					class Narrow: Narrow
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
				};
			};
			class Right_Sponson_turret: Right_Sponson_turret
			{
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
					class Narrow: Narrow
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
				};
			};
		};
	};	class C203_IC_Leman_Russ_02_NVG: IC_Leman_Russ_02_base
	{
		showNVGDriver=1;
		showNVGCommander=1;
		showNVGGunner=1;
		scope=0;
		scopeCurator=0;
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG","Ti"};
			thermalMode[] = {0,1};
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
						thermalMode[] = {0,1};
					};
					class Narrow: Narrow
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class OpticsIn: OpticsIn
						{
							class Wide: Wide
							{
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {0,1};
							};
							class Medium: Medium
							{
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {0,1};
							};
							class Narrow: Narrow
							{
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {0,1};
							};
						};
					};
				};
			};
			class Hull_turret: Hull_turret
			{
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
					class Narrow: Narrow
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
				};
			};
			class Left_Sponson_turret: Left_Sponson_turret
			{
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
					class Narrow: Narrow
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
				};
			};
			class Right_Sponson_turret: Right_Sponson_turret
			{
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
					class Narrow: Narrow
					{
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
				};
			};
		};
	};
	class C203_vehicle_Tank_LR_BattleCannon_01: C203_TIOW_LR_BattleCannon_NVG
	{
		displayName="$STR_TAG_203rdMW_Heavy_Vehicle_BC_TIOW";
		crew="203rd_02";
		side=1;
		scope=2;
		scopeCurator = 2;
		accuracy=1000;
		faction="203rdMW_Faction";
		editorCategory="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Heavy_TIOW";
		vehicleClass="C203_VehicleClass_Heavy";
		typicalCargo[]=
		{
			"203rd_02"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\203Insignia_TIOW.paa",
			"vehicles\data\lemanRuss\TIOW\LR_203_TIOW_co.paa"
		};
	};
	class C203_vehicle_Tank_LR_BattleCannon_02: C203_IC_Leman_Russ_02_NVG
	{
		side=1;
		scope=2;
		scopeCurator=2;
		faction="203rdMW_Faction";
		editorCategory="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Heavy";
		vehicleClass="C203_VehicleClass_Heavy";
		crew="203rd_02";
		accuracy=1000;
		displayName="$STR_TAG_203rdMW_Heavy_Vehicle_BC";
		typicalCargo[]=
		{
			"203rd_02"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\lemanRuss\ICP\LR_203_IC_hull_co.paa",
			"vehicles\data\lemanRuss\ICP\LR_203_IC_tracks_co.paa",
			"vehicles\data\lemanRuss\ICP\LR_203_IC_turret_co.paa",
			"vehicles\data\lemanRuss\ICP\LR_203_IC_gun_co.paa"
		};
		animationList[]=
		{
			"showDozerBlade",
			1,
			"ShowInsig_cadiangate",
			1,
			"ShowInsig_aquilaskull",
			1
		};
	};
	class C203_vehicle_Tank_LR_Vanquisher_01: C203_TIOW_LR_Vanquisher_NVG
	{
		displayName="$STR_TAG_203rdMW_Heavy_Vehicle_Vanq_TIOW";
		crew="203rd_02";
		side=1;
		scope=2;
		scopeCurator=2;
		accuracy=1000;
		faction="203rdMW_Faction";
		editorCategory="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Heavy_TIOW";
		vehicleClass="C203_VehicleClass_Heavy";
		typicalCargo[]=
		{
			"203rd_02"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\203Insignia_TIOW.paa",
			"vehicles\data\lemanRuss\TIOW\LR_203_TIOW_co.paa"
		};
	};
	class C203_vehicle_Tank_LR_Vanquisher_02: C203_IC_Leman_Russ_01_NVG
	{
		side=1;
		scope=2;
		scopeCurator=2;
		faction="203rdMW_Faction";
		editorCategory="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Heavy";
		vehicleClass="C203_VehicleClass_Heavy";
		crew="203rd_02";
		accuracy=1000;
		displayName="$STR_TAG_203rdMW_Heavy_Vehicle_Vanq";
		typicalCargo[]=
		{
			"203rd_02"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\lemanRuss\ICP\LR_203_IC_hull_co.paa",
			"vehicles\data\lemanRuss\ICP\LR_203_IC_tracks_co.paa",
			"vehicles\data\lemanRuss\ICP\LR_203_IC_turret_co.paa",
			"vehicles\data\lemanRuss\ICP\LR_203_IC_gun_co.paa"
		};
		animationList[]=
		{
			"showDozerBlade",
			1,
			"ShowInsig_cadiangate",
			1,
			"ShowInsig_aquilaskull",
			1
		};
		class textureSources
		{
			class C203
			{
				displayName="203rd Standard";
				author="CannonFodderMK4";
				textures[]=
				{
					"vehicles\data\lemanRuss\ICP\LR_203_IC_hull_co.paa",
					"vehicles\data\lemanRuss\ICP\LR_203_IC_tracks_co.paa",
					"vehicles\data\lemanRuss\ICP\LR_203_IC_turret_co.paa",
					"vehicles\data\lemanRuss\ICP\LR_203_IC_gun_co.paa"
				};
				factions[]={};
			};
		};
		textureList[]=
		{
			"C203",
			1
		};
	};
	class C203_vehicle_Tank_LR_Conqueror_01: C203_TIOW_LR_Conqueror_NVG
	{
		displayName="$STR_TAG_203rdMW_Heavy_Vehicle_Conq_TIOW";
		crew="203rd_02";
		side=1;
		scope=2;
		scopeCurator=2;
		accuracy=1000;
		faction="203rdMW_Faction";
		editorCategory="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Heavy_TIOW";
		vehicleClass="C203_VehicleClass_Heavy";
		typicalCargo[]=
		{
			"203rd_02"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\203Insignia_TIOW.paa",
			"vehicles\data\lemanRuss\TIOW\LR_203_TIOW_co.paa"
		};
	};
	class C203_vehicle_Tank_LR_Demolisher_01: C203_TIOW_LR_Demolisher_NVG
	{
		displayName="$STR_TAG_203rdMW_Heavy_Vehicle_Demo_TIOW";
		crew="203rd_02";
		side=1;
		scope=2;
		scopeCurator=2;
		accuracy=1000;
		faction="203rdMW_Faction";
		editorCategory="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Heavy_TIOW";
		vehicleClass="C203_VehicleClass_Heavy";
		typicalCargo[]=
		{
			"203rd_02"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\203Insignia_TIOW.paa",
			"vehicles\data\lemanRuss\TIOW\LR_203_TIOW_co.paa"
		};
	};
	class C203_vehicle_Tank_LR_Exterminator_01: C203_TIOW_LR_Exterminator_NVG
	{
		displayName="$STR_TAG_203rdMW_Heavy_Vehicle_Exter_TIOW";
		crew="203rd_02";
		side=1;
		scope=2;
		scopeCurator=2;
		accuracy=1000;
		faction="203rdMW_Faction";
		editorCategory="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Heavy_TIOW";
		vehicleClass="C203_VehicleClass_Heavy";
		typicalCargo[]=
		{
			"203rd_02"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\203Insignia_TIOW.paa",
			"vehicles\data\lemanRuss\TIOW\LR_203_TIOW_co.paa"
		};
	};
	class C203_vehicle_Tank_LR_Executioner_01: C203_TIOW_LR_Executioner_NVG
	{
		displayName="$STR_TAG_203rdMW_Heavy_Vehicle_Exec_TIOW";
		crew="203rd_02";
		side=1;
		scope=2;
		scopeCurator=2;
		accuracy=1000;
		faction="203rdMW_Faction";
		editorCategory="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Heavy_TIOW";
		vehicleClass="C203_VehicleClass_Heavy";
		typicalCargo[]=
		{
			"203rd_02"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\203Insignia_TIOW.paa",
			"vehicles\data\lemanRuss\TIOW\LR_203_TIOW_co.paa"
		};
	};
	class C203_vehicle_Tank_LR_Annihilator_01: C203_TIOW_LR_Annihilator_NVG
	{
		displayName="$STR_TAG_203rdMW_Heavy_Vehicle_Annih_TIOW";
		crew="203rd_02";
		side=1;
		scope=2;
		scopeCurator=2;
		accuracy=1000;
		faction="203rdMW_Faction";
		editorCategory="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Heavy_TIOW";
		vehicleClass="C203_VehicleClass_Heavy";
		typicalCargo[]=
		{
			"203rd_02"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\203Insignia_TIOW.paa",
			"vehicles\data\lemanRuss\TIOW\LR_203_TIOW_co.paa"
		};
	};
	class C203_vehicle_Tank_LR_Punisher_01: C203_TIOW_LR_Punisher_NVG
	{
		displayName="$STR_TAG_203rdMW_Heavy_Vehicle_Punish_TIOW";
		crew="203rd_02";
		side=1;
		scope=2;
		scopeCurator=2;
		accuracy=1000;
		faction="203rdMW_Faction";
		editorCategory="203rdMW_Faction";
		editorSubcategory="203rdMW_Veh_Heavy_TIOW";
		vehicleClass="C203_VehicleClass_Heavy";
		typicalCargo[]=
		{
			"203rd_02"
		};
		hiddenSelectionsTextures[]=
		{
			"vehicles\data\203Insignia_TIOW.paa",
			"vehicles\data\lemanRuss\TIOW\LR_203_TIOW_co.paa"
		};
	};
