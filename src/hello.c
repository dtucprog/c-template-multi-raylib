#include "raylib.h"
constexpr int SCREEN_WIDTH = 800, SCREEN_HEIGHT = 450, FONT_SIZE = 20, FPS = 60;

int main() {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Raylib Hello world!");
  SetTargetFPS(FPS);

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(RAYWHITE);
    DrawText("Hello world!", SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, FONT_SIZE,
             LIGHTGRAY);

    EndDrawing();
  }

  CloseWindow();
}