#pragma once

#include "player.hpp"
#include <raylib.h>

class Game
{
public: void Start();
private:
    // Window settings
    int windowWidth = 900;
    int windowHeight = 600;

    // Delta Time
    float deltaTime;

    // Player
    Player player;

    // World settings
    Color backgorundColor = BLACK;

    void Init();
    void MainLoop();
    void CleanUp();
};