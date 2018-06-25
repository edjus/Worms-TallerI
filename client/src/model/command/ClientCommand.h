#ifndef _CLIENT_COMMAND
#define _CLIENT_COMMAND

#include "../../ProxyClient.h"
class ProxyClient;

/**
* @class ClientCommand
* Clase abstracta que representa a los comandos que reconoce el server.
*/
class ClientCommand {
public:
	virtual void send(ProxyClient& proxy) = 0;
};

#endif