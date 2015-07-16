/*--------> Main Includes <--------*/
#tryinclude <foreach>
#tryinclude <ibranch>

/*--------> Modules <--------*/
#include "../modules/defines.inc"
#include "../modules/playerdata.inc"
#include "../modules/hooks.inc"
#include "../modules/serverdata.inc"

/*--------> Functions <--------*/
iAC_OnPlayerConnect(playerid)
{
	return 1;
}

iAC_OnGameModeInit()
{
	return 1;
}