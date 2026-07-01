_this spawn {
	
	params [["_colour",[0.3,1,0.3]],["_pos",[0,0,0]],["_offset",[0,0,0]],["_speed",75],["_life",30]];
	
	_flare = "SmokeShellVehicle" createvehiclelocal _pos;
	_flare setPos _pos;
	_vStart = wind vectorMultiply 0.1;
	_flare setvelocity ([_vStart select 0,_vStart select 1,_speed] vectorAdd _offset);
	
	//playSound3D [ "A3\Sounds_F\sfx\explosion1.wss", _flare, false, getPos _flare, 0.5, 1000, 0];
	
	_lightpoint = "#lightpoint" createVehicleLocal (getpos _flare);
	_lightpoint setLightColor [1, 0.9, 0.8];
	_lightpoint setLightAmbient [0, 0, 0];
	_lightpoint setLightUseFlare true;
	_lightpoint setLightFlareSize 0.5;
	_lightpoint setLightFlareMaxDistance 1000;
	_lightpoint setLightIntensity 3000;
	_lightpoint setLightAttenuation [0, 1000, 1000, 1000, 0, 0];
	_lightpoint setLightDayLight true;
	_lightpoint attachTo [_flare,[0,0,0.1]];
	
	_sm = "#particlesource" createVehicleLocal (getpos _lightpoint);
	_sm setParticleRandom [0.5, [0.01, 0.01, 0.01], [0.5, 0.5, 0.5], 0, 0.3, [0, 0, 0, 0], 0, 0,360];
	_sm setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 8,0],
			"", "Billboard", 1, 3, [0, 0, 0],
			[0,0,0], 1, 1, 0.80, 0.5, [0.2,4],
			[[0.9,0.9,0.9,0.6], [1,1,1,0.3], [1,1,1,0]],[1],0.1,0.1,"","",_lightpoint];	
	_sm setdropinterval 0.02;
	
	waitUntil {
		(velocity _flare select 2) < 0
	};
	
	playSound3D [ "A3\Sounds_F\sfx\explosion2.wss", _flare, false, getPos _flare, 2, 1000, 0];
	
	_lightpoint setLightColor [1, 1, 1];
	
	_lightpoint2 = "#lightpoint" createVehicleLocal (getpos _flare);
	_lightpoint2 setLightColor _colour;
	_lightpoint2 setLightAmbient [0, 0, 0];
	_lightpoint2 setLightUseFlare true;
	_lightpoint2 setLightFlareSize 2.5;
	_lightpoint2 setLightFlareMaxDistance 1000;
	_lightpoint2 setLightIntensity 3000;
	_lightpoint2 setLightAttenuation [1, 1, 0, 1, 0.1, 1000];
	_lightpoint2 setLightDayLight true;
	_lightpoint2 attachTo [_flare,[0,0,0.1]];
	
	[_lightpoint,_lightpoint2] spawn {
		params ["_lightpoint","_lightpoint2"];
		while {alive _lightpoint} do { 
			_size = random [2,2.5,3]; 
			_lightpoint setLightFlareSize _size;
			_lightpoint2 setLightFlareSize _size;
			_delay = random [0.01,0.05,0.3];
			uiSleep _delay; 
		}; 
	};
	_smokeColour = [[((_colour select 0) * 0.9),((_colour select 1) * 0.9),((_colour select 2) * 0.9),0.6], [_colour select 0,_colour select 1,_colour select 2,0.3], [_colour select 0,_colour select 1,_colour select 2,0]];
	_sm setParticleRandom [0.5, [0.3, 0.3, 0.3], [0.5, 0.5, 0.5], 0, 0.3, [0, 0, 0, 0], 0, 0,360];
	_sm setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 8,0],"", "Billboard", 1, 3, [0, 0, 0],[0,0,0], 1, 1, 0.80, 0.5, [1.3,4],_smokeColour,[1],0.1,0.1,"","",_lightpoint];	
	_sm setdropinterval 0.02;
	
	_tEnd = time + _life;
	
	waitUntil {
		_v = velocity _flare;
		_v set [2,0];
		_vNorm = vectorNormalized _v;
		_wNorm = vectorNormalized wind;
		_vStart = wind vectorMultiply 0.1;
		_flare setvelocity [_vStart select 0,_vStart select 1,-1];
		uiSleep 0.01;
		_h = (getPos _flare) select 2;
		_h <= 0.1 || !alive _flare || _tEnd < time;
	};
	
	deleteVehicle _flare;
	if (_tEnd >= time) then {
		uiSleep ((random 4.5) + 5);
	};
	deleteVehicle _sm;
	deleteVehicle _lightpoint;
	deleteVehicle _lightpoint2;
};