#include <iostream>
#include "../include/raylib.h"
#include "../include/StateManager.h"
#include "../include/MenuState.h"

int main(void)
{

    const int screenWidth = 1200;
    const int screenHeight = 850;
    StateManager stateManager;
    stateManager.currentState = new MenuState();

    InitWindow(screenWidth, screenHeight, "Contest");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        stateManager.currentState->Update();
        stateManager.currentState->Draw();
    }
    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}