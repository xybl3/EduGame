#include <iostream>
#include "../include/raylib.h"
#include "../include/StateManager.h"
#include "../include/MenuState.h"
#include "../include/GameState.h"
#include "../include/game.h"

int main(void)
{

    StateManager *stateManager = StateManager::getInstance();
    Game game;
    game.Init();
    game.CenterWindow();
    stateManager->currentState = new MenuState();
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