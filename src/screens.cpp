#include "../include/screens.h"
#include "../include/raylib.h"
#include "../include/utils.h"
#include "../include/buttons.h"
#include <iostream>

void Screens::RenderMainMenu()
{
    Utils utils;
    Buttons btn;
    Screens screens;

    Image bgIMG = LoadImage("assets/img/bg.png");
    ImageResize(&bgIMG, GetScreenWidth(), GetScreenHeight());
    Texture2D bg = LoadTextureFromImage(bgIMG);
    UnloadImage(bgIMG);

    BeginDrawing();
    DrawTexture(bg, 0, 0, DARKGRAY);
    utils.DrawCenteredScreenText(GetScreenHeight() / 4, "Game", 30, WHITE);
    if (btn.RenderButton({(float)(GetScreenWidth() / 2.5), (float)GetScreenHeight() / 3}, 300, 50, RED, "Start", WHITE))
    {
        screens.state == GameState::OPTIONS;
    }
    ClearBackground(BLANK);
    EndDrawing();
}

void Screens::RenderOptions()
{
    Utils utils;
    Buttons btn;
    Screens screens;

    BeginDrawing();
    utils.DrawCenteredScreenText(GetScreenHeight() / 4, "Options", 40, RAYWHITE);
    if (btn.RenderButton({(float)(GetScreenWidth() / 2.5), (float)GetScreenHeight() / 3}, 300, 50, RED, "Start", WHITE))
    {
        screens.state == GameState::MAIN_MENU;
    }
    ClearBackground(BLANK);
    EndDrawing();
}