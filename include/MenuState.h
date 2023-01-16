#ifndef MENU_STATE_H
#define MENU_STATE_H

#include "state.h"
#include "buttons.h"
#include "StateManager.h"

class MenuState : public State
{
private:
    Buttons buttons;
    StateManager *stateManager;

public:
    virtual void Update();
    virtual void Draw();
    MenuState();
};

#endif