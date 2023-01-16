#include "../include/StateManager.h"
#include <iostream>

StateManager *StateManager::instance = nullptr;

void StateManager::SwitchState(State *newState)
{
    std::cout << &currentState << std::endl;
    this->currentState = newState;
    std::cout << &currentState << std::endl;
}