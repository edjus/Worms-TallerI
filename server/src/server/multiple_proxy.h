#include <vector>
#include "server/proxy.h"
#include <string>
#include "util/protected_queue.h"
#include <mutex>
#include <map>


#ifndef __MULTIPLE_PROXY_H__
#define __MULTIPLE_PROXY_H__

class MultipleProxy{
	private:
		std::map<int, Proxy&> proxys;
		
	public:
		// Crea el objeto, el cual tiene la finalidad de contener
		// distintos proxys que se van a comunicar con distintos juagores
		// para enviarle a todos los jugadores el mismo mensaje.
		//Para informacion de que hace cada mensaje leer proxy.h
		MultipleProxy();
		
		~MultipleProxy();
		
		// Agrega un proxy a la lista de proxys a la cual se le enviaran 
		// todos los mensajes
		void add(int id, Proxy& proxy);
		
		// Saca un jugador de la lista de proxys segun su id, para que
		// deje de recibir los mensajes del juego
		Proxy& erase(int id);
		
		void addNewQueue(ProtectedQueue* queue);
		
		void changeToPrevQueue();
		
		void sendMapBackground(std::string& background);
		
		void sendVigaCreation(float x, float y, float angle);
		
		void sendMapDimentions(int widht, int height);
		
		void sendGusanoCreation(int gusano_id, int player_id, float x, float y, int direction, float angle);
		
		void sendTurnBegining(int player_id, int gusano_id);
		
		void sendGusanoPosition(int gusano_id, float x, float y, int direction, float angle);
		
		void sendStateChange(int gusano_id, int new_state);
		
		void sendProjectileCreation(int projectile_number, int weapon, int direction, float x, float y, float angle);
				
		void sendProjectilePosition(int projectile_number, float x, float y, float angle);
		
		void sendProjectileExplosion(int projectile_number);
		
		void sendTakeWeapon(int weapon);
		
		void sendChangeSightAngle(int change);
		
		void sendLifeChange(int gusano_id, int new_life);
		
		void sendPlayerDisconnection(int player_id);
		
		void sendPlayerLoose(int player_id);
		
		void sendGameWon(int player_id);
		
		void sendRoomCreation(int room_id, const std::string& name, int cant_players, int max_players, const std::string& map_name);
		
		void sendRoomPlayersChange(int room_id, int cant_players);
		
		void sendRoomDeletion(int room_id);
		
		void sendPlayerConnection(int id, const std::string& name);
		
		void sendFinishedAmunnition(int player_id, int weapon_id);
		
		void sendRemoteWork(int weapon_id);
		
		void sendSecond();
		
		void sendWindChange(float wind);
		
};

#endif
