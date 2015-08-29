
#include "initServer.sqf"

// add the init for the statusbar here between these 2 lines
[] execVM "addons\statusBar\statusbar.sqf"; 

if (!hasInterface || isServer) exitWith {};
