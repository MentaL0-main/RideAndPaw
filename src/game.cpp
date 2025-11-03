#include "game.hpp"
#include <raylib.h>

void Game::Start()
{
    Init();
    MainLoop();
    CleanUp();
}

void Game::Init()
{
    InitWindow(windowWidth, windowHeight, "Ride And Paw");
}

void Game::MainLoop()
{
    while (WindowShouldClose())
    {
        
    }
}

void Game::CleanUp()
{
    CloseWindow();
}