#ifndef MENU_STATE_H
#define MENU_STATE_H

#include "state.h"
#include "buttons.h"
#include "StateManager.h"
#include "game.h"

class MenuState : public State
{
private:
    Buttons buttons;
    Game game;
    StateManager *stateManager;
    Image bgIMG;

    Texture2D bgTexture;

public:
    virtual void Update();
    virtual void Draw();
    MenuState();
};

#endif