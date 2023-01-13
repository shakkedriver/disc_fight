#include <iostream>
#include "raylib.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    InitWindow(1500,900,"c fight");

    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(WHITE);
        DrawFPS(10,10);

        DrawCircle(GetScreenWidth()/2,GetScreenHeight()/2,400, Color{255,0,0,255});
        DrawCircle(GetScreenWidth()/2,GetScreenHeight()/2,370, WHITE);
        DrawCircle(GetScreenWidth()/2,GetScreenHeight()/2,30,GRAY);
        EndDrawing();

    }
    return 0;
}
