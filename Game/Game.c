#include "raylib.h"
int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    int screenWidth = 800;
    int screenHeight = 600;
    int i = 0;
    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    bool start = false;
    bool end = false;
    
    int screen = false;
    
    SetTargetFPS(60);
    Image image1 = LoadImage("image/MAIN.png");
    Image image2 = LoadImage("image/1.png");
    Image image3 = LoadImage("image/2.png");
    Image image4 = LoadImage("image/3.png");
    Image image5 = LoadImage("image/4.png");
    Image image6 = LoadImage("image/5.png");
    Image image7 = LoadImage("image/6.png");
    Image image8 = LoadImage("image/7.png");
    Image image9 = LoadImage("image/8.png");
    Image image10 = LoadImage("image/end.png");
    
    ImageResize(&image1, 800, 600);
    ImageResize(&image2, 800, 600);
    ImageResize(&image3, 800, 600);
    ImageResize(&image4, 800, 600);
    ImageResize(&image5, 800, 600);
    ImageResize(&image6, 800, 600);
    ImageResize(&image7, 800, 600);
    ImageResize(&image8, 800, 600);
    ImageResize(&image9, 800, 600);
    ImageResize(&image10, 800, 600);
    
    Texture2D texture1 = LoadTextureFromImage(image1);    
    Texture2D texture2 = LoadTextureFromImage(image2);    
    Texture2D texture3 = LoadTextureFromImage(image3);    
    Texture2D texture4 = LoadTextureFromImage(image4);
    Texture2D texture5 = LoadTextureFromImage(image5);    
    Texture2D texture6 = LoadTextureFromImage(image6);    
    Texture2D texture7 = LoadTextureFromImage(image7);    
    Texture2D texture8 = LoadTextureFromImage(image8);
    Texture2D texture9 = LoadTextureFromImage(image9);    
    Texture2D texture10 = LoadTextureFromImage(image10);
    
    UnloadImage(image1);
    UnloadImage(image2);
    UnloadImage(image3);
    UnloadImage(image4);
    UnloadImage(image5);
    UnloadImage(image6);
    UnloadImage(image7);
    UnloadImage(image8);
    UnloadImage(image9);
    UnloadImage(image10);
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        ClearBackground(RAYWHITE);
        if (!start){ 
            BeginDrawing();
                if (end == 0){
                    DrawTexture(texture1, 0, 0, WHITE);
                    DrawText("Fudenunt", 300, 200, 50, MAROON);
                    DrawText("Any click to start", 270, 300, 30, MAROON);
                    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) || IsMouseButtonPressed(MOUSE_MIDDLE_BUTTON) || IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)) 
                    {
                        start = !start;
                    }
                }
        }
        EndDrawing();
        if (start){
            DrawRectangle(20, 350, 150, 50, PINK);
            DrawRectangle(0, 400, 800, 200, PINK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) || IsMouseButtonPressed(MOUSE_MIDDLE_BUTTON) || IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)) 
                    {
                        i++;
                    }
            if(i == 1){
                DrawText("Duel", 300, 200, 50, MAROON);
            }
        }
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------   
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
    UnloadTexture(texture1);
    UnloadTexture(texture2);
    UnloadTexture(texture3);
    UnloadTexture(texture4);
    UnloadTexture(texture5);
    UnloadTexture(texture6);
    UnloadTexture(texture7);
    UnloadTexture(texture8);
    UnloadTexture(texture9);
    UnloadTexture(texture10);
    return 0;
}