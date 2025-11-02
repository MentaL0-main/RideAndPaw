#include <iostream>
#include <exception>
#include "game.hpp"

int main()
{
    Game game;
    try { game.Start(); }
    catch (std::exception &error_)
    {
        std::cerr << error_.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}