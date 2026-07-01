//C203_fnc_effectFiredSmokeLauncher - Modified version of BIS_fnc_effectFiredSmokeLauncher to allow rainbow smoke, no other purpose, it's just a dumb cool thing.

//BIS_fnc_effectFiredSmokeLauncher
//A3\functions_f\Effects\fn_effectFiredSmokeLauncher.sqf

/*ArmA 2 smokscreen, by Maddmatt
Uses code from VBS2 Smoke launcher by Philipp Pilhofer (raedor) & Andrew Barron
*/
private ["_v","_m","_shells","_num","_vel","_useTDir","_angle","_colors","_dir","_deltaDir","_arc","_initDist","_posV","_Vdir","_vH","_vV","_smokeg"];
_v=_this select 0;
_weapon = _this#1;
_mode = _this#3;
_m=_this select 5;

if (_mode == "Burst") then {
	_num= ((_v ammo _weapon) + 1) min (GetNumber (configFile >> "CfgVehicles" >> typeof _v >> "smokeLauncherGrenadeCount"));
	_v setAmmo [_weapon, (_v ammo _weapon) - (_num-1)];
	_angle=GetNumber (configFile >> "CfgVehicles" >> typeof _v >> "smokeLauncherAngle");
} else {
	_num=1;
};
_vel=GetNumber (configFile >> "CfgVehicles" >> typeof _v >> "smokeLauncherVelocity");
_useTDir=GetNumber (configFile >> "CfgVehicles" >> typeof _v >> "smokeLauncherOnTurret");
_colors = getArray (configFile >> "CfgMagazines" >> _m >> "smokeColors");
_angle=GetNumber (configFile >> "CfgVehicles" >> typeof _v >> "smokeLauncherAngle");

[_v,_m,_num,_vel,_useTDir,_angle,_colors] call C203_fnc_launchSmoke;