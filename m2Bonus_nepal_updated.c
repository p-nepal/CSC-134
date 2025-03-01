/*******************************************************************************************
*
*   raylib [core] examples - basic screen manager
*
*   NOTE: This example illustrates a very simple screen manager based on a states machines
*
*   Example originally created with raylib 4.0, last time updated with raylib 4.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2021-2024 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include <stdlib.h>

//------------------------------------------------------------------------------------------
// Types and Structures Definition
//------------------------------------------------------------------------------------------
typedef enum GameScreen { LOGO = 0, TITLE, GAMEPLAY, ENDING } GameScreen;

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;
    int points = 0;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic screen manager");

    GameScreen currentScreen = LOGO;

    // TODO: Initialize all required variables and load all required data here!

    int framesCounter = 0;          // Useful to count frames

    SetTargetFPS(60);               // Set desired framerate (frames-per-second)
    //--------------------------------------------------------------------------------------
    int player_x = screenWidth/2;
    int player_y = screenHeight/2;
    int speed_x = 0;
    int speed_y = 0;
    int fruit_x = screenWidth/3; // I need to update this to make them random
    int fruit_y = screenHeight/3; // I need to update this to make them random

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        switch(currentScreen)
        {
            case LOGO:
            {
                // TODO: Update LOGO screen variables here!

                framesCounter++;    // Count frames

                // Wait for 2 seconds (120 frames) before jumping to TITLE screen
                if (framesCounter > 120)
                {
                    currentScreen = TITLE;
                }
            } break;
            case TITLE:
            {
                // TODO: Update TITLE screen variables here!

                // Press enter to change to GAMEPLAY screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = GAMEPLAY;
                }
            } break;
            case GAMEPLAY:
            {
                // TODO: Update GAMEPLAY screen variables here!

                // Press enter to change to ENDING screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = ENDING;
                }
            } break;
            case ENDING:
            {
                // TODO: Update ENDING screen variables here!

                // Press enter to return to TITLE screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = TITLE;
                }
            } break;
            default: break;
        }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(BLACK);

            switch(currentScreen)
            {
                case LOGO:
                {
                    // TODO: Draw LOGO screen here!
                    DrawText("LOGO SCREEN", 20, 20, 40, LIGHTGRAY);
                    DrawText("WAIT for 2 SECONDS...", 290, 220, 20, GRAY);

                } break;
                case TITLE:
                {
                    // TODO: Draw TITLE screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, BLUE);
                    DrawText("TITLE SCREEN", 20, 20, 40, DARKGREEN);
                    DrawText("PRESS ENTER or TAP to JUMP to GAMEPLAY SCREEN", 120, 220, 20, DARKGREEN);
                    DrawRectangle(screenWidth/2, screenHeight/2, 30, 30, GREEN);

                } break;
                case GAMEPLAY:
                {
                    // TODO: Draw GAMEPLAY screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, PURPLE);
                    DrawText("GAMEPLAY SCREEN", 20, 20, 40, MAROON);
                    DrawText("POINTS: ", 580, 20, 40, MAROON);
                    DrawText("PRESS ENTER or TAP to JUMP to ENDING SCREEN", 130, 220, 20, MAROON);
                    // draw stuff here
                    // draw apple
                    DrawCircle(fruit_x, fruit_y, 20, MAROON);
                    DrawCircle(fruit_x - 10, fruit_y - 10, 6, GREEN);
                    DrawCircle(fruit_x - 10, fruit_y - 10, 2, DARKGREEN);
                    // draw player
                    DrawCircle(player_x, player_y, 30, GREEN);
                    DrawCircle(player_x - 10, player_y, 2, RAYWHITE);
                    DrawCircle(player_x + 10, player_y, 2, RAYWHITE);
                    DrawRectangle(player_x - 10, player_y + 10, 20, 2, RAYWHITE);
                    /*
                    int player_x = 0;
                    int player_y = 0;
                    int speed_x = 1;
                    int speed_y = 1;
                    */
                    // update position
                    //player_x += speed_x;
                    //player_y += speed_y;
                    if (IsKeyPressed(KEY_LEFT)) {
                        if (speed_x != 5) {
                           speed_x = -5;
                           speed_y = 0; 
                        } else {
                           speed_x = 5;
                           speed_y = 0;
                        }
                    }
                    if (IsKeyPressed(KEY_RIGHT)) {
                        if (speed_x != -5) {
                           speed_x = 5;
                           speed_y = 0; 
                        } else {
                           speed_x = -5;
                           speed_y = 0;
                        }
                    }
                    if (IsKeyPressed(KEY_UP)) {
                        if (speed_y != 5) {
                           speed_x = 0;
                           speed_y = -5; 
                        } else {
                           speed_x = 0;
                           speed_y = 5;
                        }
                    }
                    if (IsKeyPressed(KEY_DOWN)) {
                        if (speed_y != -5) {
                           speed_x = 0;
                           speed_y = 5; 
                        } else {
                           speed_x = 0;
                           speed_y = -5;
                        }
                    }
                    player_x += speed_x;
                    player_y += speed_y;
                    if (player_y > screenHeight - 39 || player_y < 1) {
                        currentScreen = ENDING;
                        player_x = screenWidth/2;
                        player_y = screenHeight/2;
                    }
                    if (player_x > screenWidth - 39 || player_x < 1) {
                        currentScreen = ENDING;
                        player_x = screenWidth/2;
                        player_y = screenHeight/2;
                    }
                    // Did we get the fruit? within 10 pixels
                    // requires #include <stdlib.h>
                    if (abs(player_x - fruit_x && abs(player_y - fruit_y) < 10) {
                        DrawCircle(player_x - 60, player_y, 30, GREEN);
                    }
                } break;
                case ENDING:
                {
                    // TODO: Draw ENDING screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, DARKBLUE);
                    DrawText("YOU DIED", 20, 20, 40, SKYBLUE);
                    DrawText("PRESS ENTER or TAP to RETURN to TITLE SCREEN", 120, 220, 20, SKYBLUE);
                    speed_x = 0;
                    speed_y = 0;
                } break;
                default: break;
            }

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------

    // TODO: Unload all loaded data (textures, fonts, audio) here!

    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}