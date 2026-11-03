#include "raylib.h"
constexpr int WINDOW_WIDTH = 800, WINDOW_HEIGHT = 450, FONT_SIZE = 20, FPS = 60;
constexpr char WINDOW_TITLE[] = "Raylib Hello world!";

int main() {
  InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);
  SetTargetFPS(FPS);

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(RAYWHITE);
    DrawText("Hello world!", WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2, FONT_SIZE,
             LIGHTGRAY);

    EndDrawing();
  }

  CloseWindow();
}