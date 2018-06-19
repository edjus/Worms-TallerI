#ifndef _HOLY_BULLET_VIEW_H
#define _HOLY_BULLET_VIEW_H

#include "BulletView.h"

class BulletView;

class HolyView : public BulletView{

public:
    HolyView(int id, int dir, int posx, int posy, int angle, 
        SdlScreen& screen, Camera& camera);
    void updatePos(int x, int y, int angle);
    void update();
};

#endif