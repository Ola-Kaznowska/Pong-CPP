#pragma once
#include "Paddle.h"

class CPUPaddle : public Paddle
{
    public:
    CPUPaddle(float x, float y, int speed);
    void update(int ballY);

};