#include "../include/buttons.h"
#include <iostream>

bool Buttons::RenderButton(Vector2 coord, int width, int height, Color bg, char text[], Color textColor)
{

    Rectangle bottom = {coord.x, coord.y, (float)width, (float)height};
    DrawRectangleRec(bottom, bg);
    DrawText(text, coord.x + ((width / 2) - MeasureText(text, 30) / 2), coord.y + (height / 4), 30, textColor);
    if (CheckCollisionPointRec(GetMousePosition(), bottom))
    {

        if (IsMouseButtonPressed(0))
        {
            return true;
        }
        SetMouseCursor(MOUSE_CURSOR_IBEAM);
    }
    else
        SetMouseCursor(MOUSE_CURSOR_DEFAULT);
    return false;
}