#include "raylib.h"

// g++ program.cpp -o program -lraylib -lgdi32 -lwinmm

#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720
#define WINDOW_TITLE "raylib [core] example - basic window"

int main(void)
{
        InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);

        while (!WindowShouldClose())
        {
                BeginDrawing();
                ClearBackground(RAYWHITE);
                DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
                EndDrawing();
        }

        CloseWindow();

        return 0;
}