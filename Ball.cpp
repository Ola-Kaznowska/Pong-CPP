#include <raylib.h>
#include "Ball.h"


Ball::Ball(float x, float y, int radius)
{
    speedX = 7;
    speedY = 7;
    this->x = x;
    this->y = y;
    this->radius = radius;
}

void Ball::draw()
{
    DrawCircle(x,y,radius,BLACK);
    
}

void Ball::update()
{
    x += speedX;
    y += speedY;
    GetScreenHeight();


    if(y + radius >= GetScreenHeight() || y - radius <=0)
    {
        speedY *= -1;
    }


    if(x + radius >= GetScreenWidth() || x - radius <=0)
    {
        speedX *= -1;
    }
    
    


}

void Ball::reset()
{
    y = GetScreenHeight()/2;
    x = GetScreenHeight()/2;
}