#pragma once

#include "../lib/olcPixelGameEngine.h"

const int WIN_HEIGHT = 500;
const int WIN_WIDTH = 700;

const int WIN_HEIGHT_HALF = WIN_HEIGHT / 2;
const int WIN_WIDTH_HALF = WIN_WIDTH / 2;

// Player stats
const float speed{200.0f};
extern float player_angle;
extern olc::vf2d player_position;
