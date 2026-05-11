#include <raylib.h>
#include "CPUPaddle.h"


CPUPaddle :: CPUPaddle(float x, float y, int speed): Paddle(x,y,speed){}
void CPUPaddle::update(int ballY)
{
    if(y+height/2 >ballY)
    {
        y -= speed;
    }
    else if(y+height/2 < ballY)
    {
        y += speed;
    }

     if(y<0)
    {
        y = 0;
    }
    else if(y + height > GetScreenHeight())
    {
        y = GetScreenHeight() - height;
    }
}


