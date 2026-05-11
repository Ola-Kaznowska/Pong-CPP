#include <raylib.h>
#include "Paddle.h"


Paddle::Paddle(float x, float y, int speed)
{
 this -> x = x;
 this -> y = y;
 this -> speed = speed;  
 this -> width = 25;
 this -> height = 120;


}

void Paddle::draw()
{
    DrawRectangle(x, y, width, height, BLACK);

}


void Paddle::update()
{
    if(IsKeyDown(KEY_UP))
    {
        y -= speed;
    }

    if(IsKeyDown(KEY_DOWN))
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
