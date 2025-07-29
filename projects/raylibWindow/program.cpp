#include <iostream>
#include <raylib.h>
#include <string>

using namespace std;

// g++ program.cpp -o program -lraylib -lgdi32 -lwinmm

#define WINDOW_WIDTH 1280.0
#define WINDOW_HEIGHT 720.0
#define WINDOW_TITLE "raylib [core] example - basic window"

#define GRAPHICS_DEFAULT_SIZE 16.0

#define GRAVITY -1.0

double PLAYER_X = 0.0;
double PLAYER_Y = 0.0;

double PLAYER_X_ACCEL = 0.0;
double PLAYER_Y_ACCEL = 0.0;
double PLAYER_Y_ACCEL_MAX = GRAPHICS_DEFAULT_SIZE * 0.25;
double PLAYER_Y_ACCEL_MIN = -(PLAYER_Y_ACCEL_MAX);

double PLAYER_WIDTH = GRAPHICS_DEFAULT_SIZE;
double PLAYER_HEIGHT = GRAPHICS_DEFAULT_SIZE;

Color PLAYER_COLOR = BLACK;

void Gravity();

int main(void)
{
        InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);

        while (!WindowShouldClose())
        {
                BeginDrawing();
                ClearBackground(RAYWHITE);

                string text = to_string(PLAYER_Y_ACCEL);

                DrawText(text.c_str(), 0, 0, GRAPHICS_DEFAULT_SIZE, LIGHTGRAY);
                DrawRectangle(PLAYER_X, PLAYER_Y, PLAYER_WIDTH, PLAYER_HEIGHT, PLAYER_COLOR);

                Gravity();

                EndDrawing();
        }

        CloseWindow();

        return 0;
}

void Gravity()
{
        PLAYER_Y_ACCEL += (GRAVITY * 0.1);

        if (PLAYER_Y_ACCEL > PLAYER_Y_ACCEL_MAX) PLAYER_Y_ACCEL = PLAYER_Y_ACCEL_MAX;
        if (PLAYER_Y_ACCEL < PLAYER_Y_ACCEL_MIN) PLAYER_Y_ACCEL = PLAYER_Y_ACCEL_MIN;

        PLAYER_Y += PLAYER_Y_ACCEL;
}