#include <iostream>

#define OLC_PGE_APPLICATION
#include "../lib/olcPixelGameEngine.h"
#include "../Headers/GameView.h"
#include "../Headers/Config.h"


int main()
{
    GameView demo;
    std::cout << player_position.x << std::endl;
    if (demo.Construct(WIN_WIDTH, WIN_HEIGHT, 1, 1))
        demo.Start();

    return 0;
}