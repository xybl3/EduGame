#include "../include/MenuState.h"
#include "../include/raylib.h"
#include <iostream>
#include "../include/GameState.h"

MenuState::MenuState()
{
    this->stateManager = StateManager::getInstance();
}

void MenuState::Update()
{
    // std::cout << true << std::endl;
}

void MenuState::Draw()
{
    // Draw menu here
    BeginDrawing();
    DrawFPS(GetScreenWidth() / 2, GetScreenHeight() / 2);

    if (this->buttons.RenderButton({(float)GetScreenWidth() / 3, (float)GetScreenHeight() / 2}, 300, 50, RED, "NExt", WHITE))
    {
        this->stateManager->SwitchState(new GameState());
    }
    ClearBackground(BLANK);
    EndDrawing();
}
