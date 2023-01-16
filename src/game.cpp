#include "../include/game.h"
#include "../include/raylib.h"

void Game::Init()
{
    Image logo = LoadImage("assets/img/46.png");

    InitWindow(WIDTH, HEIGTH, GAME_NAME);
    SetWindowIcon(logo);
    SetTargetFPS(60);
}

void Game::DrawCenteredScreenText(int posY, const char *text, int fontSize, Color color)
{
    DrawText(text, (GetScreenWidth() / 2 - MeasureText(text, fontSize) / 2), posY, fontSize, color);
}

void Game::CenterWindow()
{
    const int x = (GetMonitorWidth(GetCurrentMonitor()) / 2) - WIDTH / 2;
    const int y = (GetMonitorHeight(GetCurrentMonitor()) / 2) - HEIGTH / 2;

    SetWindowPosition(x, y);
}