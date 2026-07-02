class CfgPatches
{
	class 203rd_Cadian_Vehicles
	{
		requiredAddons[]=
		{
			"A3_Data_F","C203_core"
		};
		requiredVersion=0.1;
		units[]=
		{
			"C203_vehicle_Tank_LR_BattleCannon_01",
			"C203_vehicle_Tank_LR_BattleCannon_02",
			"C203_vehicle_Tank_LR_Vanquisher_01",
			"C203_vehicle_Tank_LR_Vanquisher_02",
			"C203_vehicle_Tank_LR_Conqueror_01",
			"C203_vehicle_Tank_LR_Demolisher_01",
			"C203_vehicle_Tank_LR_Exterminator_01",
			"C203_vehicle_Tank_LR_Executioner_01",
			"C203_vehicle_Tank_LR_Annihilator_01",
			"C203_vehicle_Tank_LR_Punisher_01",
			"C203_vehicle_APC_Chimera_01",
			"C203_vehicle_APC_Chimera_02",
			"C203_vehicle_APC_Chimera_02M",
			"C203_vehicle_APC_Chimedon_01",
			"C203_vehicle_land_Chimedon",
			"C203_vehicle_APC_Chimerro_01",
			"C203_vehicle_land_Chimerro",
			"C203_Vehicle_APC_Taurox_01",
			"C203_Vehicle_land_Taurox_HS",
			"C203_Vehicle_APC_Taurox_01M",
			"C203_Vehicle_APC_Taurox_02",
			"C203_vehicle_land_Taurox_BC",
			"C203_Vehicle_APC_Taurox_03",
			"C203_vehicle_land_Taurox_GG",
			"C203_Vehicle_APC_Taurox_04",
			"C203_vehicle_land_Taurox_AC",
			"C203_Vehicle_Car_Tauros_01",
			"C203_Vehicle_land_Tauros_U",
			"C203_Vehicle_Car_Tauros_02",
			"C203_Vehicle_land_Tauros_GMG",
			"C203_Vehicle_Car_Tauros_03",
			"C203_Vehicle_land_Tauros_HMG",
			"C203_Vehicle_Car_Tauros_04",
			"C203_Vehicle_land_Tauros_Venator"
		};
		weapons[]={};
	};
};
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class cfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	#include "cfgVehicles_Tanks.hpp"
	#include "cfgVehicles_Chimeras.hpp"
	#include "cfgVehicles_Tauros_x.hpp"
};