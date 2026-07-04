class CfgPatches
{
	class 203rdMW_ACE_SI
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class Extended_PreInit_EventHandlers {
    class 203rdMW_Equipment_Script {
        init = "call compile preprocessFileLineNumbers '203rd_Equipment\mechanics\Equipment_customize.sqf'";
    };
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class 203rdMW_Gear_Customs
			{
				displayName="$STR_TAG_203rdMW_ACESI_Group_Name";
				icon="203rd_Equipment\203_logo_small.paa";
				class 203rdMW_Helmet_Gear_Customize
				{
					displayName="$STR_TAG_203rdMW_ACESI_Helm_Name";
					class 20rdMW_Helmet_Down_Goggles
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_GD";
						condition="[ace_player] call MW_Helmet_Goggle_Down_Condition";
						exceptions[]={};
						statement="[ace_player] call MW_Helmet_Goggle_Down_FNC";
					};
					class 20rdMW_Helmet_Up_Goggles
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_GU";
						condition="[ace_player] call MW_Helmet_Goggle_Up_Condition";
						exceptions[]={};
						statement="[ace_player] call MW_Helmet_Goggle_Up_FNC";
					};
					class 20rdMW_Helmet_PutOn_Rebreather
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MON";
						condition="[ace_player] call MW_Helmet_Mask_On_Condition";
						exceptions[]={};
						statement="[ace_player] call MW_Helmet_Mask_On_FNC"; 
					};
					class 20rdMW_Helmet_PutOff_Rebreather
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MOFF";
						condition="[ace_player] call MW_Helmet_Mask_Off_Condition";
						exceptions[]={};
						statement="[ace_player] call MW_Helmet_Mask_Off_FNC";
					};
				};
				class 203rdMW_Uniform_Rolling
				{
					displayName="$STR_TAG_203rdMW_ACESI_Uni_Name";
					class 20rdMW_Unifrom_Roll_Up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="[ace_player] call MW_Uniform_Uni_RollUp_Check";
						exceptions[]={};
						statement="[ace_player] call MW_Uniform_Roll_Up_FNC";
					};
					class 20rdMW_Unifrom_Roll_Down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="[ace_player] call MW_Uniform_Uni_RollDown_Check";
						exceptions[]={};
						statement="[ace_player] call MW_Uniform_Roll_Down_FNC";
					};
				};
				class 203rdMW_Animations
				{
					displayName="$STR_TAG_203rdMW_ACESI_Anim_Name";
					class 203rdMW_cig_smoking_loop
					{
						displayName="$STR_TAG_203rdMW_ACESI_Animation_Smoking";
						condition="[ace_player] call MW_AnimationPlay_Condition";
						exceptions[]={};
						statement="[ace_player, 'cigs_anim_cig_loop'] remoteExec ['switchGesture', 0]";
					};
				};
			};
		};
	};
};
