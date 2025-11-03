#pragma once

#include <raylib.h>

class Player
{
public:
    void SetPosition(Vector2 p) { position = p; }
    void SetAngle(float a) { angle = a; }

    void SetColor(Color c) { color = c; }

    void SetSpeed(float s) { speed = s; }
    void SetRadius(float r) { radius = r; }
    void SetFireTickRate(float ftr) { fireTickRate = ftr; }
    void SetFireDistance(float fd) { fireDistance = fd; }
    void SetFireSpeed(float fs) { fireSpeed = fs; }

    Vector2 GetPosition() const { return position; }
    
    Color GetColor() const { return color; }

    float GetAngle() const { return angle; }
    float GetSpeed() const { return speed; }
    float GetRadius() const { return radius; }
    float GetFireTickRate() const { return fireTickRate; }
    float GetFireDistance() const { return fireDistance; }
    float GetFireSpeed() const { return fireSpeed; }

    void Input(float &dt);
    void Proccess();
    void Draw();

private:
    Vector2 position;
    Vector2 endGunLine = {0, 0};

    Color color;

    float angle;
    float radius;
    float speed;
    float fireTickRate;
    float fireDistance;
    float fireSpeed;
};