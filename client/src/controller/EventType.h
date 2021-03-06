#ifndef _EVENT_TYPE
#define _EVENT_TYPE 

enum EventType {
	ID_PLAYER,
	BACKGROUND_STAGE,
	CREATE_VIGA,
	CREATE_STAGE,
	CREATE_WORM,
	START_TURN,
	W_MOVE,
	W_CHANGE_STATE,
	M_CREATE,
	M_POS,
	M_EXPLOTE,
	W_CUR_WEAPON,
	W_CUR_AIM,
	W_CHANGE_LIFE,
	A_PLAYER_OFF,
	A_PLAYER_LOSE,
	A_PLAYER_WIN,
	WEAPON_DONE = 22,
	RIGHT_TARGET,
	SECOND,
	WIND_CHANGED
};

enum PreEvent{ 
	NEW_ROOM = 17,
	CHANGE_N_PLAYERS_IN_ROOM,
	DEL_ROOM,
	NEW_PLAYER_IN_ROOM,
	ALLOW_MAPS
};

#endif