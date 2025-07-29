#include "raylib.h"

// g++ program.cpp -o program -lraylib -lgdi32 -lwinmm

#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720
#define WINDOW_TITLE "raylib [core] example - basic window"

#define GRAPHICS_DEFAULT_SIZE 16

int PLAYER_X = 0;
int PLAYER_Y = 0;
int PLAYER_WIDTH = GRAPHICS_DEFAULT_SIZE;
int PLAYER_HEIGHT = GRAPHICS_DEFAULT_SIZE;
Color PLAYER_COLOR = BLACK;

int main(void)
{
        InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);

        while (!WindowShouldClose())
        {
                BeginDrawing();
                ClearBackground(RAYWHITE);
                DrawText("Whatcha doing?", 0, 0, GRAPHICS_DEFAULT_SIZE, LIGHTGRAY);
                DrawRectangle(PLAYER_X, PLAYER_Y, PLAYER_WIDTH, PLAYER_HEIGHT, PLAYER_COLOR);
                EndDrawing();
        }

        CloseWindow();

        return 0;
}