#ifndef _PROTOCOL_H
#define _PROTOCOL_H
enum MSG_PROTOCOL{
    MAP_AND_PLAYERS = 1,
    MOVE_WORM,
    DIRECT_JUMP,
    BACK_JUMP,
    WEAPON_SELECT,
    CHANGE_AIM,
    CHARGE_POWER,
    WORM_SHOOT,
    COUNTDOWN,
    LEAVE_ROOM = 11,
    JOIN_ROOM,
    CREATE_ROOM,
    TELEDIRIGIDO,
};

#endif