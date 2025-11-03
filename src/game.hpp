#pragma once

class Game
{
public: void Start();
private:
    // Window settings
    int windowWidth = 900;
    int windowHeight = 600;

    void Init();
    void MainLoop();
    void CleanUp();
};