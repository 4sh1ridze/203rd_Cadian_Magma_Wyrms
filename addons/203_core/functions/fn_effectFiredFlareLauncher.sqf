params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

_pos1 = [(configFile >> "cfgVehicles" >> (typeOf _unit)),"flarePos1",[]] call BIS_fnc_returnConfigEntry;
_pos2 = [(configFile >> "cfgVehicles" >> (typeOf _unit)),"flarePos2",[]] call BIS_fnc_returnConfigEntry;

if (_pos1 isEqualTo [] || _pos2 isEqualTo []) exitWith {};

_offsetx = random [-1,0,1];
_offsety = random [-1,0,1];
_colour = [(configFile >> "cfgMagazines" >> _magazine),"flareColor",[]] call BIS_fnc_returnConfigEntry;
_speed = call (compile ([(configFile >> "cfgMagazines" >> _magazine),"initSpeed","60"] call BIS_fnc_returnConfigEntry));
_type = [(configFile >> "cfgMagazines" >> _magazine),"illuminationFlare",0] call BIS_fnc_returnConfigEntry;
_useTDir = GetNumber (configFile >> "CfgVehicles" >> (typeof _unit) >> "smokeLauncherOnTurret");

_dir = vectorDir _unit;
if ((_useTDir==1) && (count weapons _unit > 0)) then
{
	_dir = _unit weaponDirection ((weapons _unit) select 0);
};

if (_mode == "Burst") then {
	switch (_unit getVariable ["flareBurst_N",0]) do {
		case (0) : {_offsetx = random [4,5,6];_offsety = random [-1,0,1];_unit setVariable ["flareBurst_N",1]};
		case (1) : {_offsetx = random [-6,-5,-4];_offsety = random [-1,0,1];_unit setVariable ["flareBurst_N",2]};
		case (2) : {_offsetx = random [-1,0,1];_offsety = random [9,10,11];_unit setVariable ["flareBurst_N",0]};
	};
};

_origin = [0,0,0];

switch (_unit getVariable ["flareSide","right"]) do {
	case ("right") : {
		_origin = (_unit modelToWorld ((_unit selectionPosition "arm_u") vectorAdd _pos1));
		_unit setVariable ["flareSide","left"];
	};
	case ("left") : {
		_origin = (_unit modelToWorld ((_unit selectionPosition "arm_u") vectorAdd _pos2));
		_unit setVariable ["flareSide","right"];
	};
};

switch (_type) do {
	case (1) : {
		[_colour,_origin,((_dir vectorMultiply 30) vectorAdd [_offsetx,_offsety,0]),_speed,60] call C203_fnc_launchIllumFlare;
	};
	case (0) : {
		[_colour,_origin,((_dir vectorMultiply 30) vectorAdd [_offsetx,_offsety,0]),_speed,60] call C203_fnc_launchFlare;
	};
};