#include "game.hpp"
#include <raylib.h>
#include <string>

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

    player.SetSpeed(150.0f);
    player.SetFireSpeed(60);
    player.SetFireDistance(300);
    player.SetFireTickRate(1);
    player.SetColor(GREEN);
    player.SetAngle(0.0f);
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

        static float angle = 0.01f;
        angle += 1.0f;
        player.SetAngle(angle);

        BeginDrawing();
            
            ClearBackground(backgorundColor);
            player.Draw();

            DrawText(std::to_string(GetFPS()).c_str(), windowWidth / 2 - 5, 5, 5, WHITE);

        EndDrawing();
    }
}

void Game::CleanUp()
{
    CloseWindow();
}