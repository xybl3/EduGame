#ifndef STATE_MANAGER_H
#define STATE_MANAGER_H

#include "state.h"

class StateManager
{
private:
    static StateManager *instance;

public:
    State *currentState;
    void SwitchState(State *newState);

    static StateManager *getInstance()
    {
        if (instance == nullptr)
        {
            instance = new StateManager();
        }
        return instance;
    }
};

#endif