#include "../include/utils.h"

void Utils::DrawCenteredScreenText(int posY, const char *text, int fontSize, Color color)
{
    DrawText(text, (GetScreenWidth() / 2 - TextLength(text)), posY, fontSize, color);
}