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
    SetTargetFPS(120);

    player.SetSpeed(10.0f);
    player.SetFireSpeed(60);
    player.SetFireDistance(150);
    player.SetFireTickRate(1);
    player.SetColor(GREEN);
    player.SetTarget({100, 100});
    player.SetRadius(15);
    player.SetPosition({(float)windowWidth / 2, (float)windowHeight / 2});
}

void Game::MainLoop()
{
    while (!WindowShouldClose())
    {
        deltaTime = GetFrameTime();
        player.Input(deltaTime);
        player.Proccess();

        BeginDrawing();
            ClearBackground(backgorundColor);
            player.Draw();
        EndDrawing();
    }
}

void Game::CleanUp()
{
    CloseWindow();
}