#include <vector>
#include <string>

#ifndef __GAME_CONSTANTS_H__
#define __GAME_CONSTANTS_H__

class GameConstants{
	public:
		int worms_life = 100;
		int worm_extra_life = 25;
		
		float map_widht = 50;
		float map_height = 50;
		std::string map_background;
		
		//deberian ser unsigned varias cosas
		int bazooka_vel = 3;
		int bazooka_damage = 50;
		int bazooka_radius = 2;
		int bazooka_ammunition = -1; //inf
		float bazooka_widht = 0.125;
		float bazooka_height = 0.1;
		
		int morter_vel = 3;
		int morter_damage = 50;
		int morter_radius = 2;
		int morter_fragment_damage = 10;
		int morter_fragment_radius = 2;
		int morter_cant_fragments = 6;
		int morter_ammunition = 10;
		float morter_widht = 0.2;
		float morter_height = 0.15;

		int green_granade_vel = 3;
		int green_granade_damage = 30;
		int green_granade_radius = 2;
		int green_granade_ammunition = -1; //inf
		float green_granade_widht = 0.15;
		float green_granade_height = 0.15;
		
		int red_granade_vel = 3;
		int red_granade_damage = 30;
		int red_granade_radius = 2;
		int red_granade_fragment_damage = 10;
		int red_granade_fragment_radius = 2;
		int red_granade_cant_fragments = 6;
		int red_granade_ammunition = 10;
		float red_granade_widht = 0.15;
		float red_granade_height = 0.15;
		
		int banana_vel = 3;
		int banana_damage = 70;
		int banana_radius = 4;
		int banana_ammunition = 5;
		float banana_widht = 0.1;
		float banana_height = 0.15;
		
		int saint_granade_vel = 3;
		int saint_granade_damage = 110;
		int saint_granade_radius = 8;
		int saint_granade_ammunition = 2;
		float saint_granade_widht = 0.2;
		float saint_granade_height = 0.3;

		int dynamite_damage = 50;
		int dynamite_radius = 4;
		int dynamite_ammunition = 5;
		float dynamite_widht = 0.05;
		float dynamite_height = 0.15;
		
		int bat_damage = 10;
		int bat_impulse = 10;
		int bat_ammunition = -1; //inf
		float bat_max_radius = 0.75;
		
		int air_attack_vel = 3;
		int air_attack_damage = 40;
		int air_attack_radius = 2;
		int air_attack_ammunition = 2;
		int air_attack_cant_missiles = 6;
		int air_attack_missiles_distance = 1.5;
		

		int teleport_ammunition = -1; //inf

		std::vector<int> ammunition;
		
		GameConstants(){}
		
		// Genera el vector con la municiones de aca arma.
		void setAmmunition(){		
			this->ammunition.push_back(-1);
			this->ammunition.push_back(this->bazooka_ammunition);
			this->ammunition.push_back(this->morter_ammunition);
			this->ammunition.push_back(this->green_granade_ammunition);
			this->ammunition.push_back(this->red_granade_ammunition);
			this->ammunition.push_back(this->banana_ammunition);
			this->ammunition.push_back(this->saint_granade_ammunition);
			this->ammunition.push_back(this->dynamite_ammunition);
			this->ammunition.push_back(this->bat_ammunition);
			this->ammunition.push_back(this->air_attack_ammunition);
			this->ammunition.push_back(this->teleport_ammunition);
		}
		
};

#endif
		
		
