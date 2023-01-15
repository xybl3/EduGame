#pragma once
enum GameState
{
    MAIN_MENU = 0,
    OPTIONS = 1,
};

class Screens
{
public:
    GameState state = GameState::MAIN_MENU;

    void RenderMainMenu();
    void RenderOptions();
};
