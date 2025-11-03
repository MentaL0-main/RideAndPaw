#include "player.hpp"
#include <raylib.h>

void Player::Proccess()
{
    
}

void Player::Draw()
{
    // Draw body (circle)
    DrawCircle(position.x, position.y, radius, color);
}

void Player::Input(float &dt)
{
    if (IsKeyDown(KEY_LEFT)) position.x -= speed * dt;
    if (IsKeyDown(KEY_RIGHT)) position.x += speed * dt;
    if (IsKeyDown(KEY_UP)) position.y -= speed * dt;
    if (IsKeyDown(KEY_DOWN)) position.y += speed * dt;
}