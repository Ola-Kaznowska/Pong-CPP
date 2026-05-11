#pragma once

class Paddle
{
public:
    float x,y;
    int speed;
    float width, height;

    Paddle(float x, float y, int speed);
    void draw();
    void update();

};