#include "fake_proxy/mok_proxy.h"
#include <iostream>

#define EXIT 'q'
#define MOVE_TAM 9
#define JUMP_TAM 5
#define FIRE_SIGHT_POWER_TAM 17

MokProxy::MokProxy(){
}

MokProxy::~MokProxy() noexcept{
}

void MokProxy::close_communication(){
}

void MokProxy::receive_event(ProtectedQueue& queue){
	char entry = 0;
	entry = std::cin.get();
	switch (entry){
		case 'a': {//se recibe que se quiere mover un gusano a la izquierda
				std::cout << "izquierda\n";
				char* msj = new char[MOVE_TAM];
				msj[0] = 1;
				//gusano 0
				msj[1] = 0;
				msj[2] = 0;
				msj[3] = 0;
				msj[4] = 0;
				//izquierda = -1
				msj[5] = 0xFF;
				msj[6] = 0xFF;
				msj[7] = 0xFF;
				msj[8] = 0xFF;
				queue.push(msj);
				break;
			}
		case 'd':{ //se recibe que se quiere mover un gusano a la derecha
				std::cout << "derecha\n";
				char* msj = new char[MOVE_TAM];
				msj[0] = 1;
				//gusano 0
				msj[1] = 0;
				msj[2] = 0;
				msj[3] = 0;
				msj[4] = 0;
				//derecha = 1
				msj[5] = 0;
				msj[6] = 0;
				msj[7] = 0;
				msj[8] = 1;
				queue.push(msj);
				break;
			}
		case 'j': {//se recibe que se quiere hacer saltar al gusano
				std::cout << "salto\n";
				char* msj = new char[JUMP_TAM];
				msj[0] = 2;
				//gusano 0
				msj[1] = 0;
				msj[2] = 0;
				msj[3] = 0;
				msj[4] = 0;
				queue.push(msj);
				break;
			}
		case 'b': {//bazookaaaaaaa
				std::cout << "bazooka\n";
				char* msj = new char[FIRE_SIGHT_POWER_TAM];
				msj[0] = 3;
				//gusano 0
				msj[1] = 0;
				msj[2] = 0;
				msj[3] = 0;
				msj[4] = 0;
				// weapon 0
				msj[5] = 0;
				msj[6] = 0;
				msj[7] = 0;
				msj[8] = 0;
				//angle 0
				msj[9] = 0;
				msj[10] = 0;
				msj[11] = 0;
				msj[12] = 0;
				//power 1
				msj[13] = 0;
				msj[14] = 0;
				msj[15] = 0;
				msj[16] = 1;
				queue.push(msj);
				break;
			}
	}
}

void MokProxy::send_state_change(int gusano_number, char new_state){
	std::cout << '0';
	std::cout << ' ';
	std::cout << gusano_number;
	std::cout << ' ';
	std::cout << int(new_state);
	std::cout << "\n";
}

void MokProxy::send_position(int gusano_number, int x, int y, int direction, int angle){
	std::cout << 1;
	std::cout << ' ';	
	std::cout << gusano_number;
	std::cout << ' ';
	std::cout << x;
	std::cout << ' ';
	std::cout << y;
	std::cout << ' ';
	std::cout << direction;
	std::cout << ' ';
	std::cout << angle;
	std::cout << "\n";
}

void MokProxy::send_projectile_creation(int projectile_number, int weapon, int x, int y, int angle){
	std::cout << 2;
	std::cout << ' ';
	std::cout << projectile_number;
	std::cout << ' ';
	std::cout << weapon;
	std::cout << ' ';
	std::cout << x;
	std::cout << ' ';
	std::cout << y;
	std::cout << ' ';
	std::cout << angle;
	std::cout << "\n";
}