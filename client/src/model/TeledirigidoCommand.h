#ifndef _TELEDIRIGO_COMMAND_H
#define _TELEDIRIGO_COMMAND_H

#include "ClientCommand.h"

class TeledirigidoCommand : public ClientCommand{
private:
    int idJugador;
    int x;
    int y;
public:
    TeledirigidoCommand(int idJugador, int x, int y);
    void send(ProxyClient& proxy);
};

#endif