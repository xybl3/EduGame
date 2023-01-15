#include "stdio.h"
#include "../include/raylib.h"
#include "../include/screens.h"

int main(void)
{

    const int screenWidth = 1200;
    const int screenHeight = 850;

    InitWindow(screenWidth, screenHeight, "Contest");

    SetTargetFPS(60);

    Screens screens;

    // Main game loop
    while (!WindowShouldClose())
    {
        switch (screens.state)
        {
        case 0:
            screens.RenderMainMenu();
            break;
        case 1:
            screens.RenderOptions();
            break;
        }
    }
    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}