#include <iostream>
#include "../include/raylib.h"
#include "../include/StateManager.h"
#include "../include/MenuState.h"
#include "../include/GameState.h"

int main(void)
{

    const int screenWidth = 1200;
    const int screenHeight = 850;
    StateManager *stateManager = StateManager::getInstance();
    stateManager->currentState = new MenuState();

    InitWindow(screenWidth, screenHeight, "Contest");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        if (IsKeyPressed(KEY_A))
        {
            stateManager->SwitchState(new GameState());
        }
        if (IsKeyPressed(KEY_L))
        {
            stateManager->SwitchState(new MenuState());
        }

        stateManager->currentState->Update();
        stateManager->currentState->Draw();
    }
    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}