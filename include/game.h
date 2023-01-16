#pragma once
#include "raylib.h"
#define WIDTH 1200
#define HEIGTH 850
#define GAME_NAME "EduGame"

class Game
{
public:
    void Init();
    void DrawCenteredScreenText(int posY, const char *text, int fontSize, Color color);
    void CenterWindow();
};