class cfgGlasses{
	class FIG_CadianHeadwrapGrey;
	class FIG_CadianHeadwrapV2Grey;
	class FIG_CadianWebbing;
	class FIG_BandolierLP;
	class FIG_TanithCloak;
	class 203rd_Headwrap: FIG_CadianHeadwrapGrey
	{
		displayname="$STR_TAG_203rdMW_Glasses_Headwrap_Full";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_Headwrap.paa"
		};
	};
	class 203rd_Bandolier: FIG_BandolierLP
	{
		displayname="$STR_TAG_203rdMW_Glasses_Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_LegPouch.paa",
			""
		};
	};
	class 203rd_Headwrap_V2: FIG_CadianHeadwrapV2Grey
	{
		displayname="$STR_TAG_203rdMW_Glasses_Headwrap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_Headwrap.paa"
		};
	};
	class 203rd_CadianWebbing: FIG_CadianWebbing
	{
		displayname="$STR_TAG_203rdMW_Glasses_Webbing";
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
	};
	class 203rd_TanithCloak: FIG_TanithCloak
	{
		displayname="$STR_TAG_203rdMW_Glasses_Cloak";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\203rd_Equipment\data\203rd_TanithCloak.paa"
		};
	};
};