#ifndef GAME_STATE_H
#define GAME_STATE_H

#include "state.h"

class GameState : public State
{
public:
    virtual void Update();
    virtual void Draw();
};

#endif