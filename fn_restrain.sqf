private _unit = cursorObject;
if (isNull _unit) exitWith {}; //Not valid
if (player distance _unit > 3) exitWith {};
if (_unit getVariable "restrained") exitWith {};
//if (side _unit isEqualTo west) exitWith {};
if (player isEqualTo _unit) exitWith {};
if (!isPlayer _unit) exitWith {};
if (_unit getVariable "zipTie") exitWith {};
//Broadcast!

if (playerSide isEqualTo civilian && !([false,"Zipties",1] call life_fnc_handleInv)) exitWith {hint "You have no zipties!"};
if (playerSide isEqualTo civilian) then
{
    _unit setVariable ["zipTie",true,true];
    hint "You have bound their hands with zipties! Use your Interaction Menu for more options.";
    ["ziptie",[[profileName,name _unit,getposatl _unit,mapGridPosition _unit],getPlayerUID _unit]] call life_fnc_logThat;
} else {
    ["restrain",[[profileName,name _unit,getposatl _unit,mapGridPosition _unit],getPlayerUID _unit]] call life_fnc_logThat;
};
_unit setVariable ["restrained",true,true];
[player] remoteExec ["life_fnc_restrain",_unit];
[0,"STR_NOTF_Restrained",true,[_unit getVariable ["realname", name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
