#pragma once

class Ball
{
    public:

        float x, y;
        int speedX, speedY;
        int radius;



        Ball(float x, float y, int radius);
        void draw();
        void update();
        void reset();
};