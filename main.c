#include "raylib.h"
#include "helper.h"

int main(void) {
    InitWindow(800, 450, "raylib [core] example - basic window");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        for (int i = -50; i < 50; i++) {
            for (int j = -50; j < 50; ++j) {
                putPixel(0 + i, 0 + j, RED);
            }
        }
        EndDrawing();
    }
    CloseWindow();
    return 0;
}