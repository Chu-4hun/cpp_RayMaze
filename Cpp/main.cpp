#include <iostream>

#define OLC_PGE_APPLICATION
#include "../lib/olcPixelGameEngine.h"
#include "../Headers/GameView.h"


int main()
{
    GameView demo;
    if (demo.Construct(256, 240, 4, 4))
        demo.Start();

    return 0;
}