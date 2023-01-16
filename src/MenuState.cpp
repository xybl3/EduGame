#include "../include/MenuState.h"
#include "../include/raylib.h"
#include <iostream>
#include "../include/GameState.h"

void MenuState::Update()
{
}

void MenuState::Draw()
{
    // Draw menu here
    BeginDrawing();
    DrawFPS(GetScreenWidth() / 2, GetScreenHeight() / 2);

    if (this->buttons.RenderButton({(float)GetScreenWidth() / 3, (float)GetScreenHeight() / 2}, 300, 50, RED, "NExt", WHITE))
    {
        std::cout << "FUCK!" << std::endl;
        this->stateManager.SwitchState(new GameState());
    }
    ClearBackground(BLANK);
    EndDrawing();
}
