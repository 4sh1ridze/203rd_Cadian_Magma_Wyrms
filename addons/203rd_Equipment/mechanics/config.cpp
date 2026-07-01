class CfgPatches
{
	class 203rdMW_ACE_SI
	{
		units[]={};
		weapons[]={};
		requiredVersion=1_Medicae.88;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
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
				class 203rd_Cadia_helmets_Customs
				{
					displayName="$STR_TAG_203rdMW_ACESI_Helm_Name";
					class 203rd_Helmet_gogles_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_GD";
						condition="headgear player == '203rd_Helmet_GU'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_GD'";
					};
					class 203rd_Helmet_gogles_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_GU";
						condition="headgear player == '203rd_Helmet_GD'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_GU'";
					};
					class 203rd_Helmet_Medicae_gogles_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_GD";
						condition="headgear player == '203rd_Helmet_GU_Medicae'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_GD_Medicae'";
					};
					class 203rd_Helmet_Medicae_gogles_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_GU";
						condition="headgear player == '203rd_Helmet_GD_Medicae'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_GU_Medicae'";
					};
					class 203rd_Helmet_WS_gogles_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_GD";
						condition="headgear player == '203rd_Helmet_GU_Whiteshield'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_GD_Whiteshield'";
					};
					class 203rd_Helmet_WS_gogles_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_GU";
						condition="headgear player == '203rd_Helmet_GD_Whiteshield'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_GU_Whiteshield'";
					};
					class 203rd_Helmet_Sergeant_gogles_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_GD";
						condition="headgear player == '203rd_Helmet_GU_Sergeant'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_GD_Sergeant'";
					};
					class 203rd_Helmet_Sergeant_gogles_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_GU";
						condition="headgear player == '203rd_Helmet_GD_Sergeant'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_GU_Sergeant'";
					};
					class 203rd_Helmet_Officer_gogles_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_GD";
						condition="headgear player == '203rd_Helmet_GU_Officer'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_GD_Officer'";
					};
					class 203rd_Helmet_Officer_gogles_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_GU";
						condition="headgear player == '203rd_Helmet_GD_Officer'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_GU_Officer'";
					};
					class 203rd_Helmet_mask_on
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MON";
						condition="headgear player == '203rd_Helmet_GU' || headgear player == '203rd_Helmet_GD'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_Mask'";
					};
					class 203rd_Helmet_Mask_off
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MOFF";
						condition="headgear player == '203rd_Helmet_Mask'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_GD'";
					};
					class 203rd_Helmet_mask_on_M
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MON";
						condition="headgear player == '203rd_Helmet_GU_Medicae' || headgear player == '203rd_Helmet_GD_Medicae'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_Mask_Medicae'";
					};
					class 203rd_Helmet_Mask_off_M
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MOFF";
						condition="headgear player == '203rd_Helmet_Mask_Medicae'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_GD_Medicae'";
					};
					class 203rd_Helmet_mask_on_WS
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MON";
						condition="headgear player == '203rd_Helmet_GU_Whiteshield' || headgear player == '203rd_Helmet_GD_Whiteshield'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_Mask_Whiteshield'";
					};
					class 203rd_Helmet_Mask_off_WS
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MOFF";
						condition="headgear player == '203rd_Helmet_Mask_Whiteshield'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_GD_Whiteshield'";
					};
					class 203rd_Helmet_mask_on_S
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MON";
						condition="headgear player == '203rd_Helmet_GU_Sergeant' || headgear player == '203rd_Helmet_GD_Sergeant'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_Mask_Sergeant'";
					};
					class 203rd_Helmet_Mask_off_S
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MOFF";
						condition="headgear player == '203rd_Helmet_Mask_Sergeant'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_GD_Sergeant'";
					};
					class 203rd_Helmet_mask_on_O
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MON";
						condition="headgear player == '203rd_Helmet_GU_Officer' || headgear player == '203rd_Helmet_GD_Officer'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_Mask_Officer'";
					};
					class 203rd_Helmet_Mask_off_O
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MOFF";
						condition="headgear player == '203rd_Helmet_Mask_Officer'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_GD_Officer'";
					};
					class 203rd_Helmet_mask_on_SM
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MON";
						condition="headgear player == '203rd_Sergeant_Muller_GU' || headgear player == '203rd_Sergeant_Muller_GD'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Sergeant_Muller_Mask'";
					};
					class 203rd_Helmet_Mask_off_SM
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MOFF";
						condition="headgear player == '203rd_Sergeant_Muller_Mask'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Sergeant_Muller_GD'";
					};
					class 203rd_Helmet_mask_OG_on
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MON";
						condition="headgear player == '203rd_Helmet'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_Mask_OG'";
					};
					class 203rd_Helmet_mask_OG_off
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MOFF";
						condition="headgear player == '203rd_Helmet_Mask_OG'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet'";
					};
					class 203rd_Helmet_mask_OG_on_M
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MON";
						condition="headgear player == '203rd_Helmet_Medicae'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_Mask_OG_Medicae'";
					};
					class 203rd_Helmet_mask_OG_off_M
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MOFF";
						condition="headgear player == '203rd_Helmet_Mask_OG_Medicae'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_Medicae'";
					};
					class 203rd_Helmet_mask_OG_on_WS
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MON";
						condition="headgear player == '203rd_Helmet_Whiteshield'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_Mask_OG_Whiteshield'";
					};
					class 203rd_Helmet_mask_OG_off_WS
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MOFF";
						condition="headgear player == '203rd_Helmet_Mask_OG_Whiteshield'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_Whiteshield'";
					};
					class 203rd_Helmet_mask_OG_on_S
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MON";
						condition="headgear player == '203rd_Helmet_Sergeant'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_Mask_OG_Sergeant'";
					};
					class 203rd_Helmet_mask_OG_off_S
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MOFF";
						condition="headgear player == '203rd_Helmet_Mask_OG_Sergeant'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_Sergeant'";
					};
					class 203rd_Helmet_mask_OG_on_O
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MON";
						condition="headgear player == '203rd_Helmet_Officer'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_Mask_OG_officer'";
					};
					class 203rd_Helmet_mask_OG_off_O
					{
						displayName="$STR_TAG_203rdMW_ACESI_Helm_MOFF";
						condition="headgear player == '203rd_Helmet_Mask_OG_officer'";
						exceptions[]={};
						statement="_player addHeadgear '203rd_Helmet_Officer'";
					};
				};
				class 203rd_Cadia_Uni_Roll
				{
					displayName="$STR_TAG_203rdMW_ACESI_Uni_Name";
					class 203rd_Uni_no_camo_1_roll_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="uniform player == '203rd_Uniform_1_w'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_Rolled_1_w'";
					};
					class 203rd_Uni_no_camo_1_roll_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="uniform player == '203rd_Uniform_Rolled_1_w'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_1_w'";
					};
					class 203rd_Uni_no_camo_2_roll_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="uniform player == '203rd_Uniform_2_w'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_Rolled_2_w'";
					};
					class 203rd_Uni_no_camo_2_roll_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="uniform player == '203rd_Uniform_Rolled_2_w'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_2_w'";
					};
					class 203rd_Uni_no_camo_3_roll_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="uniform player == '203rd_Uniform_3_w'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_Rolled_3_w'";
					};
					class 203rd_Uni_no_camo_3_roll_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="uniform player == '203rd_Uniform_Rolled_3_w'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_3_w'";
					};
					class 203rd_Uni_no_camo_2_Medicae_roll_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="uniform player == '203rd_Uniform_2_Medicae_w'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_Rolled_2_Medicae_w'";
					};
					class 203rd_Uni_no_camo_2_Medicae_roll_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="uniform player == '203rd_Uniform_Rolled_2_Medicae_w'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_2_Medicae_w'";
					};
					class 203rd_Uni_no_camo_3_Medicae_roll_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="uniform player == '203rd_Uniform_3_Medicae_w'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_Rolled_3_Medicae_w'";
					};
					class 203rd_Uni_no_camo_3_Medicae_roll_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="uniform player == '203rd_Uniform_Rolled_3_Medicae_w'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_3_Medicae_w'";
					};
					class 203rd_Uni_camo_1_roll_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="uniform player == '203rd_Uniform_1_w_1'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_Rolled_1_w_1'";
					};
					class 203rd_Uni_camo_1_roll_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="uniform player == '203rd_Uniform_Rolled_1_w_1'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_1_w_1'";
					};
					class 203rd_Uni_camo_2_roll_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="uniform player == '203rd_Uniform_2_w_1'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_Rolled_2_w_1'";
					};
					class 203rd_Uni_camo_2_roll_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="uniform player == '203rd_Uniform_Rolled_2_w_1'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_2_w_1'";
					};
					class 203rd_Uni_camo_3_roll_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="uniform player == '203rd_Uniform_3_w_1'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_Rolled_3_w_1'";
					};
					class 203rd_Uni_camo_3_roll_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="uniform player == '203rd_Uniform_Rolled_3_w_1'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_3_w_1'";
					};
					class 203rd_Uni_camo_2_Medicae_roll_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="uniform player == '203rd_Uniform_2_Medicae_w_1'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_Rolled_2_Medicae_w_1'";
					};
					class 203rd_Uni_camo_2_Medicae_roll_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="uniform player == '203rd_Uniform_Rolled_2_Medicae_w_1'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_2_Medicae_w_1'";
					};
					class 203rd_Uni_camo_3_Medicae_roll_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="uniform player == '203rd_Uniform_3_Medicae_w_1'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_Rolled_3_Medicae_w_1'";
					};
					class 203rd_Uni_camo_3_Medicae_roll_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="uniform player == '203rd_Uniform_Rolled_3_Medicae_w_1'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_3_Medicae_w_1'";
					};
					class 203rd_Uni_half_camo_1_roll_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="uniform player == '203rd_Uniform_1_w_2'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_Rolled_1_w_2'";
					};
					class 203rd_Uni_half_camo_1_roll_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="uniform player == '203rd_Uniform_Rolled_1_w_2'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_1_w_2'";
					};
					class 203rd_Uni_half_camo_2_roll_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="uniform player == '203rd_Uniform_2_w_2'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_Rolled_2_w_2'";
					};
					class 203rd_Uni_half_camo_2_roll_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="uniform player == '203rd_Uniform_Rolled_2_w_2'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_2_w_2'";
					};
					class 203rd_Uni_half_camo_3_roll_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="uniform player == '203rd_Uniform_3_w_2'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_Rolled_3_w_2'";
					};
					class 203rd_Uni_half_camo_3_roll_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="uniform player == '203rd_Uniform_Rolled_3_w_2'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_3_w_2'";
					};
					class 203rd_Uni_half_camo_2_Medicae_roll_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="uniform player == '203rd_Uniform_2_Medicae_w_2'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_Rolled_2_Medicae_w_2'";
					};
					class 203rd_Uni_half_camo_2_Medicae_roll_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="uniform player == '203rd_Uniform_Rolled_2_Medicae_w_2'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_2_Medicae_w_2'";
					};
					class 203rd_Uni_half_camo_3_Medicae_roll_up
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_U";
						condition="uniform player == '203rd_Uniform_3_Medicae_w_2'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_Rolled_3_Medicae_w_2'";
					};
					class 203rd_Uni_half_camo_3_Medicae_roll_down
					{
						displayName="$STR_TAG_203rdMW_ACESI_Uni_Roll_D";
						condition="uniform player == '203rd_Uniform_Rolled_3_Medicae_w_2'";
						exceptions[]={};
						statement="_player addUniform '203rd_Uniform_3_Medicae_w_2'";
					};
				};
			};
		};
	};
};
