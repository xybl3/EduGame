#include "../include/StateManager.h"
#include <iostream>

void StateManager::SwitchState(State *newState)
{
    std::cout << newState << std::endl;
    std::cout << currentState << std::endl;
    std::cout << "Switching" << std::endl;
    if (currentState != nullptr)
    {
        std::cout << "DEleting" << std::endl;

        delete currentState;
    }
    std::cout << "Setting" << std::endl;

    currentState = newState;
}