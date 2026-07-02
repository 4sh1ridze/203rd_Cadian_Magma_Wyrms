203rdMW_Uniform_Unroll =
{
private _unRolledUni = ['203rd_Uniform_1_w'];
private _RolledUni = ['203rd_Uniform_Rolled_1_w'];
private _203currentUniClassname = uniform player;
private _203currentUniLoadout = uniformContainer player;
if(_203currentUniClassname in _RolledUni) then
	{
		hint str _203currentUniClassname;
	};
};
