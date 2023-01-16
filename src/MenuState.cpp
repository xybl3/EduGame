#include "../include/MenuState.h"
#include "../include/raylib.h"
#include <iostream>
#include "../include/GameState.h"
#include "../include/game.h"

MenuState::MenuState()
{
    this->stateManager = StateManager::getInstance();

    this->bgIMG = LoadImage("assets/img/bg.png");
    ImageResize(&bgIMG, GetScreenWidth(), GetScreenHeight());

    this->bgTexture = LoadTextureFromImage(this->bgIMG);

    UnloadImage(this->bgIMG);
}

void MenuState::Update()
{
    // std::cout << true << std::endl;
}

void MenuState::Draw()
{
    // Draw menu here
    BeginDrawing();
    DrawFPS(20, 20);

    DrawTexture(this->bgTexture, 0, 0, DARKGRAY);

    this->game.DrawCenteredScreenText(GetScreenHeight() / 4, GAME_NAME, 40, WHITE);

    if (this->buttons.RenderButton({(float)(GetScreenWidth() / 2.5), (float)GetScreenHeight() / 2}, 300, 50, BLANK, "Start game", WHITE))
    {
        this->stateManager->SwitchState(new GameState());
    }
    if (this->buttons.RenderButton({(float)(GetScreenWidth() - 70), 20}, 50, 50, RED, "X", WHITE))
    {
        CloseWindow();
    }
    ClearBackground(BLANK);
    EndDrawing();
}
