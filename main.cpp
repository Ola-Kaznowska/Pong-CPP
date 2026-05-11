#include <iostream>
#include <raylib.h>
#include <Ball.h>
#include <Paddle.h>
#include <CPUPaddle.h>
using namespace std;

int playerScore = 0;
int cpuScore = 0;

int main () {
    const int windowhight = 720;
    const int windowwith = 1280;
    Ball ball = Ball(windowwith/2,windowhight/2,20);
    Paddle playerPaddle = Paddle(10, windowhight/2 -60, 7);
    CPUPaddle cpuPaddle = CPUPaddle(windowwith -30, windowhight/2 -60, 7);
    InitWindow(windowwith, windowhight, "My first Raylib game");

    SetTargetFPS(60);
    while(!WindowShouldClose())
    {

        BeginDrawing();

        if(

            CheckCollisionCircleRec
            (
                Vector2{ball.x, ball.y},
                ball.radius,
                Rectangle
                {
                    playerPaddle.x,
                    playerPaddle.y,
                    playerPaddle.width,
                    playerPaddle.height,
                }
            )
        )

            {
                ball.speedX *= -1;
            }




             if(

            CheckCollisionCircleRec
            (
                Vector2{ball.x, ball.y},
                ball.radius,
                Rectangle
                {
                    cpuPaddle.x,
                    cpuPaddle.y,
                    cpuPaddle.width,
                    cpuPaddle.height,
                }
            )
        )

            {
                ball.speedX *= -1;
            }


        






        




        ball.update();
        playerPaddle.update();
        cpuPaddle.update(ball.y);
        ClearBackground(RAYWHITE);
        
        if (ball.x + ball.radius > windowwith)
{
playerScore += 1;
ball.reset();
}
else if (ball.x - ball.radius < 0)
{
cpuScore += 1;
ball.reset();
}


        
 
        DrawLine(windowwith/2,0,windowwith/2,720, BLACK);
        ball.draw();

        playerPaddle.draw();
        cpuPaddle.draw();
        DrawText(TextFormat("%i", cpuScore), 3 * windowwith / 4 - 20,
        20, 80, BLACK);
        DrawText(TextFormat("%i", playerScore), windowwith / 4 - 20,20, 80,BLACK);

        //DrawRectangle(10,windowhight/2 -60,25,120, BLACK);
        //DrawRectangle(windowwith-30, windowhight/2 -60,25,120, BLACK);

        EndDrawing();
    }
    CloseWindow();

    return 0;

}