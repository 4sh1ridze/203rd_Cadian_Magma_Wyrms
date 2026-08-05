/*
	Rolled and unrolled uniform index in arrays must be the same!
	Goggle Down and Goggle Up index in arrays must be the same!
*/
MW_Uniform_Uni_RollUp_Check =
{
	_unRolledUniform = ['203rd_Uniform_1_w','203rd_Uniform_1_w_1','203rd_Uniform_1_w_2','203rd_Uniform_2_w','203rd_Uniform_2_w_1','203rd_Uniform_2_w_2','203rd_Uniform_3_w','203rd_Uniform_3_w_1','203rd_Uniform_3_w_2','203rd_Uniform_2_Medicae_w','203rd_Uniform_2_Medicae_w_1','203rd_Uniform_2_Medicae_w_2','203rd_Uniform_3_Medicae_w','203rd_Uniform_3_Medicae_w_1','203rd_Uniform_3_Medicae_w_2'];
	(uniform player in _unRolledUniform);
};

MW_Uniform_Uni_RollDown_Check =
{
	_RolledUniList = ['203rd_Uniform_Rolled_1_w','203rd_Uniform_Rolled_1_w_1','203rd_Uniform_Rolled_1_w_2','203rd_Uniform_Rolled_2_w','203rd_Uniform_Rolled_2_w_1','203rd_Uniform_Rolled_2_w_2','203rd_Uniform_Rolled_3_w','203rd_Uniform_Rolled_3_w_1','203rd_Uniform_Rolled_3_w_2','203rd_Uniform_Rolled_2_Medicae_w','203rd_Uniform_Rolled_2_Medicae_w_1','203rd_Uniform_Rolled_2_Medicae_w_2','203rd_Uniform_Rolled_3_Medicae_w','203rd_Uniform_Rolled_3_Medicae_w_1','203rd_Uniform_Rolled_3_Medicae_w_2'];
	(uniform player in _RolledUniList);
};

MW_Uniform_Roll_Up_FNC =
{
	_unRolledUniList = ['203rd_Uniform_1_w','203rd_Uniform_1_w_1','203rd_Uniform_1_w_2','203rd_Uniform_2_w','203rd_Uniform_2_w_1','203rd_Uniform_2_w_2','203rd_Uniform_3_w','203rd_Uniform_3_w_1','203rd_Uniform_3_w_2','203rd_Uniform_2_Medicae_w','203rd_Uniform_2_Medicae_w_1','203rd_Uniform_2_Medicae_w_2','203rd_Uniform_3_Medicae_w','203rd_Uniform_3_Medicae_w_1','203rd_Uniform_3_Medicae_w_2'];
	_RolledUniList = ['203rd_Uniform_Rolled_1_w','203rd_Uniform_Rolled_1_w_1','203rd_Uniform_Rolled_1_w_2','203rd_Uniform_Rolled_2_w','203rd_Uniform_Rolled_2_w_1','203rd_Uniform_Rolled_2_w_2','203rd_Uniform_Rolled_3_w','203rd_Uniform_Rolled_3_w_1','203rd_Uniform_Rolled_3_w_2','203rd_Uniform_Rolled_2_Medicae_w','203rd_Uniform_Rolled_2_Medicae_w_1','203rd_Uniform_Rolled_2_Medicae_w_2','203rd_Uniform_Rolled_3_Medicae_w','203rd_Uniform_Rolled_3_Medicae_w_1','203rd_Uniform_Rolled_3_Medicae_w_2'];
	_203currentUni = uniform player;
	_203currentPlayerUniLoadout = itemCargo uniformContainer player;
	_UnRollUniIndex = _unRolledUniList find _203currentUni;
	_RolledUni = _RolledUniList select _UnRollUniIndex;
	if(_203currentUni in _unRolledUniList) then
	{
		player addUniform _RolledUni;
		for "_i" from 0 to (count _203currentPlayerUniLoadout - 1) do {
			_player addItemToUniform (_203currentPlayerUniLoadout select _i);
		};
	};
};

MW_Uniform_Roll_Down_FNC =
{
	_unRolledUniList = ['203rd_Uniform_1_w','203rd_Uniform_1_w_1','203rd_Uniform_1_w_2','203rd_Uniform_2_w','203rd_Uniform_2_w_1','203rd_Uniform_2_w_2','203rd_Uniform_3_w','203rd_Uniform_3_w_1','203rd_Uniform_3_w_2','203rd_Uniform_2_Medicae_w','203rd_Uniform_2_Medicae_w_1','203rd_Uniform_2_Medicae_w_2','203rd_Uniform_3_Medicae_w','203rd_Uniform_3_Medicae_w_1','203rd_Uniform_3_Medicae_w_2'];
	_RolledUniList = ['203rd_Uniform_Rolled_1_w','203rd_Uniform_Rolled_1_w_1','203rd_Uniform_Rolled_1_w_2','203rd_Uniform_Rolled_2_w','203rd_Uniform_Rolled_2_w_1','203rd_Uniform_Rolled_2_w_2','203rd_Uniform_Rolled_3_w','203rd_Uniform_Rolled_3_w_1','203rd_Uniform_Rolled_3_w_2','203rd_Uniform_Rolled_2_Medicae_w','203rd_Uniform_Rolled_2_Medicae_w_1','203rd_Uniform_Rolled_2_Medicae_w_2','203rd_Uniform_Rolled_3_Medicae_w','203rd_Uniform_Rolled_3_Medicae_w_1','203rd_Uniform_Rolled_3_Medicae_w_2'];
	_203currentUni = uniform player;
	_203currentPlayerUniLoadout = itemCargo uniformContainer player;
	_RollUniIndex = _RolledUniList find _203currentUni;
	_unRolledUni = _unRolledUniList select _RollUniIndex;
	if(_203currentUni in _RolledUniList) then
	{
		player addUniform _unRolledUni;
		for "_i" from 0 to (count _203currentPlayerUniLoadout - 1) do {
			_player addItemToUniform (_203currentPlayerUniLoadout select _i);
		};
	};
};

MW_Helmet_Goggle_Down_Condition = 
{
	_203HelmetGoggleUp1 = ['203rd_Helmet_GU','203rd_Helmet_GU_Medicae','203rd_Helmet_GU_Whiteshield','203rd_Sergeant_Muller_GU','203rd_Helmet_GU_Sergeant','203rd_Helmet_GU_Sergeant_M','203rd_Helmet_GU_Officer'];
	(headgear player in _203HelmetGoggleUp1);
};

MW_Helmet_Goggle_Up_Condition = 
{
	_203HelmetGoggleDown = ['203rd_Helmet_GD','203rd_Helmet_GD_Medicae','203rd_Helmet_GD_Whiteshield','203rd_Sergeant_Muller_GD','203rd_Helmet_GD_Sergeant','203rd_Helmet_GD_Sergeant_M','203rd_Helmet_GD_Officer'];
	(headgear player in _203HelmetGoggleDown);
};

MW_Helmet_Goggle_Down_FNC = 
{
	_203HelmetGoggleUp = ['203rd_Helmet_GU','203rd_Helmet_GU_Medicae','203rd_Helmet_GU_Whiteshield','203rd_Sergeant_Muller_GU','203rd_Helmet_GU_Sergeant','203rd_Helmet_GU_Sergeant_M','203rd_Helmet_GU_Officer'];
	_203HelmetGoggleDown = ['203rd_Helmet_GD','203rd_Helmet_GD_Medicae','203rd_Helmet_GD_Whiteshield','203rd_Sergeant_Muller_GD','203rd_Helmet_GD_Sergeant','203rd_Helmet_GD_Sergeant_M','203rd_Helmet_GD_Officer'];
	_currentHeadgear = headgear player;
	_switchHelmetIndex = _203HelmetGoggleUp find _currentHeadgear;
	player addHeadgear (_203HelmetGoggleDown select _switchHelmetIndex);
};

MW_Helmet_Goggle_Up_FNC = 
{
	_203HelmetGoggleDown = ['203rd_Helmet_GD','203rd_Helmet_GD_Medicae','203rd_Helmet_GD_Whiteshield','203rd_Sergeant_Muller_GD','203rd_Helmet_GD_Sergeant','203rd_Helmet_GD_Sergeant_M','203rd_Helmet_GD_Officer'];
	_203HelmetGoggleUp = ['203rd_Helmet_GU','203rd_Helmet_GU_Medicae','203rd_Helmet_GU_Whiteshield','203rd_Sergeant_Muller_GU','203rd_Helmet_GU_Sergeant','203rd_Helmet_GU_Sergeant_M','203rd_Helmet_GU_Officer'];
	_currentHeadgear = headgear player;
	_switchHelmetIndex = _203HelmetGoggleDown find _currentHeadgear;
	player addHeadgear (_203HelmetGoggleUp select _switchHelmetIndex);
};

MW_Helmet_Mask_On_Condition = 
{
	_203HelmetGoggleUp = ['203rd_Helmet_GU','203rd_Helmet_GU_Medicae','203rd_Helmet_GU_Whiteshield','203rd_Sergeant_Muller_GU','203rd_Helmet_GU_Sergeant','203rd_Helmet_GU_Sergeant_M','203rd_Helmet_GU_Officer'];
	_203HelmetGoggleDown = ['203rd_Helmet_GD','203rd_Helmet_GD_Medicae','203rd_Helmet_GD_Whiteshield','203rd_Sergeant_Muller_GD','203rd_Helmet_GD_Sergeant','203rd_Helmet_GD_Sergeant_M','203rd_Helmet_GD_Officer'];
	_203HelmetClear = ['203rd_Helmet','203rd_Helmet_Medicae','203rd_Helmet_Whiteshield','203rd_Sergeant_Muller','203rd_Helmet_Sergeant','203rd_Helmet_Sergeant_M','203rd_Helmet_Officer'];
	((headgear player in _203HelmetGoggleUp) || (headgear player in _203HelmetGoggleDown) || (headgear player in _203HelmetClear))
};

MW_Helmet_Mask_Off_Condition = 
{
	_203HelmetMaskOn = ['203rd_Helmet_Mask','203rd_Helmet_Mask_Medicae','203rd_Helmet_Mask_Whiteshield','203rd_Sergeant_Muller_Mask','203rd_Helmet_Mask_Sergeant','203rd_Helmet_Sergeant_M','203rd_Helmet_Mask_Officer'];
	_203HelmetMaskOnOG = ['203rd_Helmet_Mask_OG','203rd_Helmet_Mask_OG_Medicae','203rd_Helmet_Mask_OG_Whiteshield','203rd_Sergeant_Muller_Mask','203rd_Helmet_Mask_OG_Sergeant','203rd_Helmet_Mask_OG_Sergeant_M','203rd_Helmet_Mask_OG_Officer'];
	((headgear player in _203HelmetMaskOn) || (headgear player in _203HelmetMaskOnOG))
};

MW_Helmet_Mask_On_FNC = 
{
	_203HelmetGoggleUp = ['203rd_Helmet_GU','203rd_Helmet_GU_Medicae','203rd_Helmet_GU_Whiteshield','203rd_Sergeant_Muller_GU','203rd_Helmet_GU_Sergeant','203rd_Helmet_GU_Sergeant_M','203rd_Helmet_GU_Officer'];
	_203HelmetGoggleDown = ['203rd_Helmet_GD','203rd_Helmet_GD_Medicae','203rd_Helmet_GD_Whiteshield','203rd_Sergeant_Muller_GD','203rd_Helmet_GD_Sergeant','203rd_Helmet_GD_Sergeant_M','203rd_Helmet_GD_Officer'];
	_203HelmetMaskOn = ['203rd_Helmet_Mask','203rd_Helmet_Mask_Medicae','203rd_Helmet_Mask_Whiteshield','203rd_Sergeant_Muller_Mask','203rd_Helmet_Mask_Sergeant','203rd_Helmet_Sergeant_M','203rd_Helmet_Mask_Officer'];
	
	_203HelmetClear = ['203rd_Helmet','203rd_Helmet_Medicae','203rd_Helmet_Whiteshield','203rd_Sergeant_Muller','203rd_Helmet_Sergeant','203rd_Helmet_Sergeant_M','203rd_Helmet_Officer'];
	_203HelmetMaskOnOG = ['203rd_Helmet_Mask_OG','203rd_Helmet_Mask_OG_Medicae','203rd_Helmet_Mask_OG_Whiteshield','203rd_Sergeant_Muller_Mask','203rd_Helmet_Mask_OG_Sergeant','203rd_Helmet_Mask_OG_Sergeant_M','203rd_Helmet_Mask_OG_Officer'];
	
	_203currentHeadgear = headgear player;
	if(_203currentHeadgear in _203HelmetGoggleUp) then {
		_snitchHelmetIndex = _203HelmetGoggleUp find _203currentHeadgear;
		player addHeadgear (_203HelmetMaskOn select _snitchHelmetIndex);
	};
	if(_203currentHeadgear in _203HelmetGoggleDown) then {
		_snitchHelmetIndex = _203HelmetGoggleDown find _203currentHeadgear;
		player addHeadgear (_203HelmetMaskOn select _snitchHelmetIndex);
	};
	if(_203currentHeadgear in _203HelmetClear) then {
		_snitchHelmetIndex = _203HelmetClear find _203currentHeadgear;
		player addHeadgear (_203HelmetMaskOnOG select _snitchHelmetIndex);
	};
};
MW_Helmet_Mask_Off_FNC = 
{
	_203HelmetGoggleUp = ['203rd_Helmet_GU','203rd_Helmet_GU_Medicae','203rd_Helmet_GU_Whiteshield','203rd_Sergeant_Muller_GU','203rd_Helmet_GU_Sergeant','203rd_Helmet_GU_Sergeant_M','203rd_Helmet_GU_Officer'];
	_203HelmetGoggleDown = ['203rd_Helmet_GD','203rd_Helmet_GD_Medicae','203rd_Helmet_GD_Whiteshield','203rd_Sergeant_Muller_GD','203rd_Helmet_GD_Sergeant','203rd_Helmet_GD_Sergeant_M','203rd_Helmet_GD_Officer'];
	_203HelmetMaskOn = ['203rd_Helmet_Mask','203rd_Helmet_Mask_Medicae','203rd_Helmet_Mask_Whiteshield','203rd_Sergeant_Muller_Mask','203rd_Helmet_Mask_Sergeant','203rd_Helmet_Sergeant_M','203rd_Helmet_Mask_Officer'];
	
	_203HelmetClear = ['203rd_Helmet','203rd_Helmet_Medicae','203rd_Helmet_Whiteshield','203rd_Sergeant_Muller','203rd_Helmet_Sergeant','203rd_Helmet_Sergeant_M','203rd_Helmet_Officer'];
	_203HelmetMaskOnOG = ['203rd_Helmet_Mask_OG','203rd_Helmet_Mask_OG_Medicae','203rd_Helmet_Mask_OG_Whiteshield','203rd_Sergeant_Muller_Mask','203rd_Helmet_Mask_OG_Sergeant','203rd_Helmet_Mask_OG_Sergeant_M','203rd_Helmet_Mask_OG_Officer'];
	
	_203currentHeadgear = headgear player;
	if(_203currentHeadgear in _203HelmetMaskOnOG) then {
		_snitchHelmetIndex = _203HelmetMaskOnOG find _203currentHeadgear;
		player addHeadgear (_203HelmetClear select _snitchHelmetIndex);
	};
	if(_203currentHeadgear in _203HelmetMaskOn) then {
		_snitchHelmetIndex = _203HelmetMaskOn find _203currentHeadgear;
		player addHeadgear (_203HelmetGoggleDown select _snitchHelmetIndex);
	};
};
MW_AnimationPlay_Condition =
{
	// Привет Риктусу, который : "Добавлено не будет". Паяц хренов.
	('203rd' in profileName)
};

MW_GuardStand_FNC =
{
	private _reloadState = 0;
    private _zoomState = 0;
    private _jumpState = 0;
	
	player playMove "Guard_Pose_in";
	
	waitUntil{
	(inputAction "MoveForward" > 0) or
	(inputAction "MoveBack" > 0) or
	(inputAction "TurnLeft" > 0) or
	(inputAction "TurnRight" > 0)
	};
	
	player switchMove "Guard_Pose_out";
};