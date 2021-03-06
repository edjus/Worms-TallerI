#include "Box2D/Box2D.h"
#include "game/weapons/regresive_projectile.h"
#include "game/game_constants.h"

#ifndef __SAINT_GRANADE_H__
#define __SAINT_GRANADE_H__

class SaintGranade : public RegresiveProjectile {
	public:
		// Crea un objeto granada santa que sale disparado.
		SaintGranade(b2World& world_entry, int number, float x, float y, int direction, float angle, float power,
		GameConstants& info, std::vector<int>& to_remove_e, MultipleProxy& proxy, unsigned int time);
		
		~SaintGranade();
};

#endif
