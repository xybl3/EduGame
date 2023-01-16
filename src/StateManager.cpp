#include "../include/StateManager.h"
#include <iostream>

void StateManager::SwitchState(State *newState)
{
    this->currentState = newState;
}