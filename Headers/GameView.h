#pragma once

#include "../lib/olcPixelGameEngine.h"

class GameView : public olc::PixelGameEngine
{
public:
    GameView();
public:
    bool OnUserCreate() override;
    bool OnUserUpdate(float fElapsedTime) override;
};