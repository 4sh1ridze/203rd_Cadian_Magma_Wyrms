class CfgPatches
{
	class 203rd_Cadian_Equipment
	{
		requiredAddons[]=
		{
			"A3_Data_F","C203_core"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	#include "cfgVehicles_Units.hpp"
	#include "cfgVehicles_Backpacks.hpp"
};
class CfgWeapons
{
	#include "cfgWeapons_Uniform.hpp"
	#include "cfgWeapons_Helmets.hpp"
	#include "cfgWeapons_Vests.hpp"
};
#include "cfgGlasses.hpp"
//Всё это залупа, рот ебал А3 и AR.