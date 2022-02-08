#include <cmath>

#include "../Headers/GameView.h"
#include "../Headers/Config.h"

GameView::GameView() {
    sAppName = "GameView";
};

bool GameView::OnUserCreate() {// Called once at the start, so create things here
    return true;
};

bool GameView::OnUserUpdate(float fElapsedTime) {
    // called once per frame
    Clear(olc::BLANK);
    auto sin_a = float(sin(player_angle));
    auto cos_a = float(cos(player_angle));

    if (GetKey(olc::Key::W).bHeld) {
        player_position.x += speed * cos_a * fElapsedTime;
        player_position.y += speed * sin_a * fElapsedTime;
    }
    if (GetKey(olc::Key::S).bHeld) {
        player_position.x += -speed * cos_a * fElapsedTime;
        player_position.y += -speed * sin_a * fElapsedTime;
    }
    if (GetKey(olc::Key::A).bHeld) {
        player_position.x += speed * sin_a * fElapsedTime;
        player_position.y += -speed * cos_a * fElapsedTime;
    }
    if (GetKey(olc::Key::D).bHeld) {
        player_position.x += -speed * sin_a * fElapsedTime;
        player_position.y += speed * cos_a * fElapsedTime;
    }
    if (GetKey(olc::Key::LEFT).bHeld) {
        player_angle -= 0.02f;
    }
    if (GetKey(olc::Key::RIGHT).bHeld) {
        player_angle += 0.02f;
    }

    DrawLine(player_position, {int(player_position.x + WIN_WIDTH * cos(player_angle)),
                               int(player_position.y + WIN_WIDTH * sin(player_angle))});
    FillCircle(player_position, 5, olc::CYAN);

    return true;
};
