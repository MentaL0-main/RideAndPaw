#include "player.hpp"
#include <raylib.h>
#include <cmath>

void Player::Proccess()
{
}

void Player::Draw()
{
    float dx = endGunLine.x - position.x;
    float dy = endGunLine.y - position.y;

    float length = sqrt(dx * dx + dy * dy);

    float limitedLength = fmin(length, fireDistance);

    float endX = position.x + (dx / length) * limitedLength;
    float endY = position.y + (dy / length) * limitedLength;

    // Рисуем линию до новой конечной точки
    DrawLine(position.x, position.y, endX, endY, RED);


    // Draw body (circle)
    DrawCircle(position.x, position.y, radius, color);
    DrawCircleLines(position.x, position.y, radius - 2, BLACK);

}

void Player::Input(float &dt)
{
    if (IsKeyDown(KEY_LEFT)  || IsKeyDown(KEY_A)) position.x -= speed * dt;
    if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D)) position.x += speed * dt;
    if (IsKeyDown(KEY_UP)    || IsKeyDown(KEY_W)) position.y -= speed * dt;
    if (IsKeyDown(KEY_DOWN)  || IsKeyDown(KEY_S)) position.y += speed * dt;
    endGunLine = GetMousePosition();
}