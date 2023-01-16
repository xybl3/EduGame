#include "../include/GameState.h"
#include "../include/raylib.h"
#include <iostream>

void GameState::Update()
{
    // std::cout << false << std::endl;
}

void GameState::Draw()
{
    BeginDrawing();
    // Draw game here
    DrawFPS(GetScreenWidth() / 4, GetScreenHeight() / 4);
    ClearBackground(BLANK);
    EndDrawing();
}