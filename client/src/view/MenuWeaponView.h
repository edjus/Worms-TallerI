#ifndef __MENU_WEAPON_VIEW__
#define __MENU_WEAPON_VIEW__

#include "TextureManager.h"

#include "SdlScreen.h"
#include "WormState.h"
#include "Weapon.h"
#include <map>
#include <list>

class MenuWeaponView {

public:
	MenuWeaponView(Camera& camera);
	~MenuWeaponView();
	void buildWeapon();
	void actionMenu();
	void offMenu();
	void draw(SdlScreen & screen);
	void allowWeapon(std::list<WeaponId> items);
	bool hasClickedMenu(SDL_Point clickPoint);
	bool hasClickedWeapon(SDL_Point clickPoint);
	Weapon* retrieveWeaponClicked(SDL_Point clickPoint);
	Weapon* findWeaponById(int idWeapon);
	bool isOnAction();
private:
	map<WeaponId, Weapon*> mapa;
	Weapon* menu;
	Camera& camera;
};


#endif
