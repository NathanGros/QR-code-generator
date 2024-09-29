#include <stdio.h>
#include "raylib.h"
#include <math.h>
#include <string.h>



int main() {
	//window init
	Color bg_color = (Color){ 20, 20, 20, 255 };
	InitWindow(0, 0, "QR code maker");
	SetTargetFPS(60);

	//message
	char *message = "test message";
	int messageLength = strlen(message);

	//draw qr_code
	ClearBackground(bg_color);
	while (!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(bg_color);
			DrawRectangle(0, 0, 500, 500, WHITE);
		EndDrawing();
	}

	CloseWindow();
	return 0;
}
