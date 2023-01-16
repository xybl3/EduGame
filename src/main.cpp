#include <iostream>
#include "../include/raylib.h"

int main(void)
{

    const int screenWidth = 1200;
    const int screenHeight = 850;
    std::cout << "INitializing StateManager and window" << std::endl;

    InitWindow(screenWidth, screenHeight, "Contest");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
    }
    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}