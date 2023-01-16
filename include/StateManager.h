#ifndef STATE_MANAGER_H
#define STATE_MANAGER_H

#include "state.h"

class StateManager
{
public:
    State *currentState;
    void SwitchState(State *newState);
};

#endif