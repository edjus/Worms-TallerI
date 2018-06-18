#include "mainView.h"

#include "TextureManager.h"
#include <iostream>

#define X_POWER 400
#define Y_POWER 700

mainView::mainView(EventHandler& eventHandler,  SdlScreen& screen, Camera& camera)
		: screen(screen), camera(camera), eventHandler(eventHandler), open(true), 
		stage(screen, camera), endGame(false), powerView(screen){
	this->init();
}

void mainView::init(){
	//creamos el menu de armas
	menuWeapon = new MenuWeaponView(camera);
	menuWeapon->buildWeapon();

	list<WeaponId> allowW;
	//Armas permitidas
	allowW.push_back(BAZOOKA);
	allowW.push_back(R_GRENADE);
	allowW.push_back(HOLY);
	allowW.push_back(G_GRENADE);
	allowW.push_back(DYNAMITE);
	allowW.push_back(AIRATTACK);
	allowW.push_back(BANANA);
	allowW.push_back(BATE);
	allowW.push_back(MORTERO);
	allowW.push_back(TELEPORT);
	menuWeapon->allowWeapon(allowW);
}

mainView::~mainView(){
	for (auto& it: worms){
		delete it.second;
	}
	for (auto& it: bullets){
		delete it.second;
	}
}

bool mainView::isOpen(){
	return open;
}

void mainView::close(){
	open = false;
}

void mainView::update(){
	if (endGame)
		return;
	screen.fill();
	stage.draw();
	turnView.draw(screen.getRenderer(), 10 , 10);
	while (!eventHandler.empty()){
		Event*  event = eventHandler.get();
		screen.fill();
		stage.draw();
		turnView.draw(screen.getRenderer(), 10 , 10);
		menuWeapon->draw(screen);
		event->process();
		delete event;
		updateWorms();
		updateBullets();
		screen.render();
	}
	updateWorms();
	updateBullets();
	menuWeapon->draw(screen);
	screen.render();
}

WormView* mainView::getWormView(int id){
	return worms[id];
}

BulletView* mainView::getBulletView(int id){
	return bullets[id];
}

void mainView::updateWorms(){
	for (auto& it: this->worms)
		it.second->update();
}

void mainView::updateBullets(){
	for (auto& it: this->bullets)
		it.second->update();
}

void mainView::actionMenu(){
	menuWeapon->actionMenu();
}

bool mainView::hasClickedMenu(SDL_Point clickPoint){
	return this->menuWeapon->hasClickedMenu(clickPoint);
}

Weapon* mainView::retrieveWeaponClicked(SDL_Point clickPoint){
	return this->menuWeapon->retrieveWeaponClicked(clickPoint);
}

void mainView::updatePower(){
	powerView.update();
}

void mainView::addWorm(int id, int idOwner, std::string player, int x, int y, int dir, int angle){
	WormView* worm = new WormView(id, idOwner, camera, powerView);
	worm->setPlayerName(player);
	worm->setDirection(dir);
	worm->setAngle(angle);
	worm->load(x,y, &screen);
	this->worms.emplace(id, worm);
}

void mainView::addViga(int x, int y, int angle){
	stage.addViga(x, y, angle);
}

void mainView::addMissile(int id, WeaponId idWeapon, int dir, int posx, int posy, int angle){
	BulletView* bullet = BulletFactory::createBulletView(idWeapon, id, dir, posx, posy,
		 angle, screen, camera);
	this->bullets[id] = bullet;
}


std::string mainView::changeTurn(std::string namePlayer, int idWorm){
	turnView.setColor(255,10,255);
	SDL_Color red = {255,255,255};
	turnView.setText("Turno " + namePlayer,red);
	
	for(auto& it: this->worms)
		it.second->offFocus();
	worms[idWorm]->onFocus();
}

void mainView::showWinner(){
	//screen.clear();
	screen.fill();
	TextureManager::Instance().draw("win", 0 , 0, 0, screen.getRenderer());
	camera.focusCenterWindow();
	endGame = true;
	screen.render();
}

void mainView::showLosser(){
	//screen.clear();
	screen.fill();
	TextureManager::Instance().draw("lose", 0, 0, 0, screen.getRenderer());
	camera.focusCenterWindow();
	endGame = true;
	screen.render();
}

Camera& mainView::getCamera(){
	return camera;
}