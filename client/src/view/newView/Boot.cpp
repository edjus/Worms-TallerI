#include "Boot.h"

#include "TextureManager.h"
#include "TextManager.h"
#include "SpriteConfigurator.h"
#include <iostream>

#define W_WIDHT 900
#define W_HEIGHT 700

void Boot::init(std::string player){
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
	IMG_Init(IMG_INIT_PNG);
    screen.init("WORMS ", SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, W_WIDHT, W_HEIGHT, 
        SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);

	TextManager::Instance().init(screen.getRenderer());
    TextureManager::Instance().init(W_WIDHT, W_HEIGHT);
    loadSprites();
	loadMenuWeapon();
}

void Boot::reinit(){}

void Boot::loadConfigGame(){

}

void Boot::loadSprites(){
	try {
		// worm
		TextureManager::Instance().load("../resource/images/wwalk.png", "caminar", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/wdie.png", "morir", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/wflyup.png", "saltar", this->getScreen().getRenderer());
		
		TextureManager::Instance().load("../resource/images/grave2.png", "cripta", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/wbazbak.png", "bazooka", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/wbazbak.png", "mortero", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/wdynbak.png", "dinamita", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/wgrnbak.png", "ggranada", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/wclsbak.png", "rgranada", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/whgrbak.png", "holy", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/wairbak.png", "radio", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/wbsbbak.png", "bate", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/wtelbak.png", "teleport", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/wbanbak.png", "banana", this->getScreen().getRenderer());


		SpriteConfigurator::Instance().add("caminar", 60, 60, 15, true);
		SpriteConfigurator::Instance().add("saltar", 60, 60, 2, true);
		SpriteConfigurator::Instance().add("morir", 60, 60, 60, false);
		SpriteConfigurator::Instance().add("cripta", 60, 60, 20, false);

		SpriteConfigurator::Instance().add("bazooka", 60, 60, 32, true);
		SpriteConfigurator::Instance().add("mortero", 60, 60, 32, true);
		SpriteConfigurator::Instance().add("dinamita", 60, 60, 10, true);
		SpriteConfigurator::Instance().add("ggranada", 60, 60, 10, true);
		SpriteConfigurator::Instance().add("rgranada", 60, 60, 10, true);
		SpriteConfigurator::Instance().add("holy", 60, 60, 10, true);
		SpriteConfigurator::Instance().add("radio", 60, 60, 10, true);
		SpriteConfigurator::Instance().add("bate", 60, 60, 10, false);
		SpriteConfigurator::Instance().add("teleport", 60, 60, 10, false);
		SpriteConfigurator::Instance().add("banana", 60, 60, 10, false);

		// projectiles
		
		//Vigas
		TextureManager::Instance().load("../resource/images/vigah.png", "viga", this->getScreen().getRenderer());

		//imagenes

		// explosiones
		TextureManager::Instance().load("../resource/images/circle25.png", "circle25", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/circle50.png", "circle50", this->getScreen().getRenderer());			
		TextureManager::Instance().load("../resource/images/circle75.png", "circle75", this->getScreen().getRenderer());			
		TextureManager::Instance().load("../resource/images/circle100.png", "circle100", this->getScreen().getRenderer());

		SpriteConfigurator::Instance().add("circle25", 50, 50, 8, false);
		SpriteConfigurator::Instance().add("circle50", 100, 100, 8, false);
		SpriteConfigurator::Instance().add("circle75", 150, 150, 4, false);
		SpriteConfigurator::Instance().add("circle100", 200, 200, 4, false);

		} catch (GameException & e) {
            std::cerr << e.what() << std::endl;
		}
	std::cout << "Se cargaron todas las texturas" << std::endl;
}
void Boot::loadImages(){}
void Boot::loadWaterImage(){}
void Boot::loadEart(){}

void Boot::loadMenuWeapon(){
	try {

		TextureManager::Instance().load("../resource/images/menuWeapon/MenuWeapon.png", "MenuWeapon", this->getScreen().getRenderer());

		TextureManager::Instance().load("../resource/images/aim.png", "aim", this->getScreen().getRenderer());

		TextureManager::Instance().load("../resource/images/menuWeapon/ok.png", "ok", this->getScreen().getRenderer());

		TextureManager::Instance().load("../resource/images/menuWeapon/bazooka.1.png", "bazooka.1", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/menuWeapon/bazooka.2.png", "bazooka.2", this->getScreen().getRenderer());

		TextureManager::Instance().load("../resource/images/menuWeapon/mortar.1.png", "mortar.1", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/menuWeapon/mortar.2.png", "mortar.2", this->getScreen().getRenderer());

		TextureManager::Instance().load("../resource/images/menuWeapon/grenade.1.png", "g_grenade.1", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/menuWeapon/grenade.2.png", "g_grenade.2", this->getScreen().getRenderer());
		
		TextureManager::Instance().load("../resource/images/menuWeapon/cluster.1.png", "r_grenade.1", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/menuWeapon/cluster.2.png", "r_grenade.2", this->getScreen().getRenderer());
		
		TextureManager::Instance().load("../resource/images/menuWeapon/banana.1.png", "banana.1", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/menuWeapon/banana.2.png", "banana.2", this->getScreen().getRenderer());

		TextureManager::Instance().load("../resource/images/menuWeapon/hgrenade.1.png", "hgrenade.1", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/menuWeapon/hgrenade.2.png", "hgrenade.2", this->getScreen().getRenderer());

		TextureManager::Instance().load("../resource/images/menuWeapon/dynamite.1.png", "dynamite.1", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/menuWeapon/dynamite.2.png", "dynamite.2", this->getScreen().getRenderer());
	
		TextureManager::Instance().load("../resource/images/menuWeapon/baseball.1.png", "baseball.1", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/menuWeapon/baseball.2.png", "baseball.2", this->getScreen().getRenderer());

		TextureManager::Instance().load("../resource/images/menuWeapon/airstrke.1.png", "airstrke.1", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/menuWeapon/airstrke.2.png", "airstrke.2", this->getScreen().getRenderer());

		TextureManager::Instance().load("../resource/images/menuWeapon/teleport.1.png", "teleport.1", this->getScreen().getRenderer());
		TextureManager::Instance().load("../resource/images/menuWeapon/teleport.2.png", "teleport.2", this->getScreen().getRenderer());

		/*inicia el manejo del texto*/
		TextManager::Instance().init(this->getScreen().getRenderer());
		TextManager::Instance().loadFont(Arial16);
		TextManager::Instance().loadFont(Arial12);

	} catch (GameException & e) {
		std::cout << e.what() << std::endl;	
	}

	std::cout << "Se cargo el menu" << std::endl;

}

void Boot::initCamera(int w, int h){}
void Boot::realoadEart(){}
SdlScreen& Boot::getScreen(){
    return screen;
}
