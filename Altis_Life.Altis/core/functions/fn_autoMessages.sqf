/*
    File: fn_autoMessages.sqf
    Author: BenjaminSansNom

    Description:
    Auto messages in game every X seconds
*/

[] spawn {
    // Add a line in this array to add a message
    _messages = [
        "Please Visit our teamspeak if you have any issues or just want a chat:<br/> <t color='#e32828' size='1'>thegamerssociety.streamlinegames.com</t>",
        "Visit our forums for server rules and anymore information<br/><t color='#e32828' size='1.5'>TheGamersSociety.Net</t>"
    ];

    _refreshTime = 1800; // Time between each message (in seconds)

    _i = 0;
    while {true} do {
        _count = count _messages;
        _message = _messages select _i;
        hint parseText format["<t color='#ffffff' size='2'>TGS</t><t color='#0cb500' size='2'>Life</t> <br/><br/>%1", _message];
        sleep _refreshTime;
        if (_i == (_count - 1)) then {
            _i = 0;
        } else {
            _i = _i + 1;
        };
    };
};