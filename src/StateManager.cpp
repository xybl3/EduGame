#include "../include/StateManager.h"
#include <iostream>

StateManager *StateManager::instance = nullptr;

void StateManager::SwitchState(State *newState)
{
    this->currentState = newState;
}