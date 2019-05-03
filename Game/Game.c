#include "raylib.h"
#define LOWYELLOW  CLITERAL{ 255, 255, 0, 127.5 } 
int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    int screenWidth = 800;
    int screenHeight = 600;
    int i = 0;
    int screen = 0;
    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    bool start = false;
    int end = 0;
    
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
    Image Shiro = LoadImage("image/Shiro.png");
    Image Oscar = LoadImage("image/Oscar.png");
    Image Enjou = LoadImage("image/Enjou.png");
    Image Lime = LoadImage("image/Lime.png");
    Image T003 = LoadImage("image/T003.png");
    Image Jin = LoadImage("image/Jin.png");
    Image Pra = LoadImage("image/Pra.png");
    Image Lida = LoadImage("image/Lida.png");
    Image Eeri = LoadImage("image/Eeri.png");
    
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
    
    ImageResize(&Shiro, 250, 300);
    ImageResize(&Oscar, 250, 300);
    ImageResize(&Enjou, 250, 300);
    ImageResize(&Lime, 250, 300);
    ImageResize(&T003, 250, 300);
    ImageResize(&Jin, 250, 300);
    ImageResize(&Pra, 250, 300);
    ImageResize(&Lida, 250, 300);
    ImageResize(&Eeri, 250, 300);
    
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
    
    Texture2D Shiro_T = LoadTextureFromImage(Shiro);    
    Texture2D Oscar_T = LoadTextureFromImage(Oscar);    
    Texture2D Enjou_T = LoadTextureFromImage(Enjou);    
    Texture2D Lime_T = LoadTextureFromImage(Lime);
    Texture2D T003_T = LoadTextureFromImage(T003);    
    Texture2D Jin_T = LoadTextureFromImage(Jin);    
    Texture2D Pra_T = LoadTextureFromImage(Pra);    
    Texture2D Lida_T = LoadTextureFromImage(Lida);
    Texture2D Eeri_T = LoadTextureFromImage(Eeri);    
    
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
    
    UnloadImage(Shiro);
    UnloadImage(Oscar);
    UnloadImage(Enjou);
    UnloadImage(Lime);
    UnloadImage(T003);
    UnloadImage(Jin);
    UnloadImage(Pra);
    UnloadImage(Lida);
    UnloadImage(Eeri);
    
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        ClearBackground(RAYWHITE);
        if (!start){ 
            BeginDrawing();
                if  ((end == 0) || (end = 2)){
                    DrawTexture(texture1, 0, 0, WHITE);
                    DrawText("Fudenunt", 280, 200, 50, YELLOW);
                    DrawText("Any click to start", 260, 300, 30, YELLOW);
                    DrawText("How to Play", 300, 330, 30, YELLOW);
                    DrawText("Left click to next", 100, 360, 30, YELLOW);
                    DrawText("Right click to pervious", 400, 360, 30, YELLOW);
                    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) || IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)) 
                    {
                        start = !start;
                        i = 0;
                        screen = 0;
                    }
                }
        }
        EndDrawing();
        if (start){
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) 
            {
                i++;
            }
            if (IsMouseButtonPressed(MOUSE_RIGHT_BUTTON))
            {
                i--;
            }
            if (i == 211)
            {
                start = false;
                end = 1;
            }
            if (i < 0) {
                i = 0;
            }
            if(screen == 0){
                DrawTexture(texture2, 0, 0, WHITE);
            }
            if(screen == 1){
                DrawTexture(texture3, 0, 0, WHITE);
            }
            if(screen == 2){
                DrawTexture(texture4, 0, 0, WHITE);
            }
            if(screen == 3){
                DrawTexture(texture5, 0, 0, WHITE);
            }
            if(screen == 4){
                DrawTexture(texture6, 0, 0, WHITE);
            }
            if(screen == 5){
                DrawTexture(texture7, 0, 0, WHITE);
            }
            if(screen == 6){
                DrawTexture(texture8, 0, 0, WHITE);
            }
            if(screen == 7){
                DrawTexture(texture9, 0, 0, WHITE);
            }
            if(screen == 8){
                DrawTexture(texture10, 0, 0, WHITE);
            }
            if(i == 0){
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("At courtyard with crowded people.", 20, 420, 25, BLACK);
            }
            if(i == 1){
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("noisy! noisy! noisy!.", 20, 420, 25, BLACK);
            }
            if(i == 2){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("?????", 40, 360, 30, BLACK);
                DrawText("Hmm!! It more people than I think.", 20, 420, 25, BLACK);
            }
            if(i == 3){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("?????", 40, 360, 30, BLACK);
                DrawText("HEY! get out of my way.", 20, 420, 25, BLACK);
            }
            if(i == 4){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("?????", 40, 360, 30, BLACK);
                DrawText("Sorry.", 20, 420, 25, BLACK);
            }
            if(i == 5){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Knight", 40, 360, 30, BLACK);
                DrawText("Stay calm ... come to line up now. At the end of 7.00 AM.", 20, 420, 25, BLACK);
                DrawText("Who is slow to will be get disqualified.", 20, 445, 25, BLACK);
            }
            if(i == 6){
                DrawRectangle(20, 350, 170, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Everyone", 40, 360, 30, BLACK);
                DrawText("Yes!! sir.", 20, 420, 25, BLACK);
            }
            if(i == 7){
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("...........", 20, 420, 25, BLACK);
            }
            if(i == 8){
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("..............................", 20, 420, 25, BLACK);
            }
            if(i == 9){
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("...................................................", 20, 420, 25, BLACK);
            }
            if(i == 10){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Knight", 40, 360, 30, BLACK);
                DrawText("Next!!", 20, 420, 25, BLACK);
            }
            if(i == 11){
                DrawTexture(Shiro_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Knight", 40, 360, 30, BLACK);
                DrawText("What's you name!?", 20, 420, 25, BLACK);
            }
            if(i == 12){
                DrawTexture(Shiro_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 350, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Gold-Haired Boy", 40, 360, 30, BLACK);
                DrawText("My name Shiro Minato from the suburb of District 2", 20, 420, 25, BLACK);
                DrawText("from Helf village.", 20, 445, 25, BLACK);
            }
            if(i == 13){
                DrawTexture(Shiro_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 200, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Knight", 40, 360, 30, BLACK);
                DrawText("Why are you apply!?", 20, 420, 25, BLACK);
            }
            if(i == 14){
                DrawTexture(Shiro_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("I come to apply. To make this kingdom have righteousness!.", 20, 420, 25, BLACK);
            }
            if(i == 15){
                DrawTexture(Shiro_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Knight", 40, 360, 30, BLACK);
                DrawText("Ho!!.... will you said that there is no righteousness now?", 20, 420, 25, BLACK);
            }
            if(i == 16){
                DrawTexture(Shiro_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("just uh ... I want to clear the rumor that the villagers say.", 20, 420, 25, BLACK);
            }
            if(i == 17){
                DrawTexture(Shiro_T, 200, 100, WHITE);
                DrawTexture(Oscar_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Knight", 40, 360, 30, BLACK);
                DrawText("Heh ... speak funny. Okay ..... You coin number is 195.", 20, 420, 25, BLACK);
            }
            if(i == 18){
                DrawTexture(Shiro_T, 200, 100, WHITE);
                DrawTexture(Oscar_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Knight", 40, 360, 30, BLACK);
                DrawText("And then .... looks like the latter is get frustrated.", 20, 420, 25, BLACK);
            }
            if(i == 19){
                DrawTexture(Shiro_T, 200, 100, WHITE);
                DrawTexture(Oscar_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 380, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Purple-Haired Boy", 40, 360, 30, BLACK);
                DrawText("Will you stay longer?", 20, 420, 25, BLACK);
            }
            if(i == 20){
                DrawTexture(Shiro_T, 200, 100, WHITE);
                DrawTexture(Oscar_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("Sorry.", 20, 420, 25, BLACK);
            }
            if(i == 21){
                DrawTexture(Oscar_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 380, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Purple-Haired Boy", 40, 360, 30, BLACK);
                DrawText("My name is Oscar Dessel. Other details are in the application.", 20, 420, 25, BLACK);
            }
            if(i == 22){
                DrawTexture(Oscar_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Knight", 40, 360, 30, BLACK);
                DrawText("Mr.Oscar You coin number is 196.", 20, 420, 25, BLACK);
                DrawText("Keep that coin to identifying yourself.", 20, 445, 25, BLACK);
            }
            if(i == 23){
                DrawTexture(Oscar_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Oscar", 40, 360, 30, BLACK);
                DrawText("Thank you.", 20, 420, 25, BLACK);
            }
            if(i == 24){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("(Staring.)", 20, 420, 25, BLACK);
            }
            if(i == 25){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Oscar", 40, 360, 30, BLACK);
                DrawText("What staring of you?", 20, 420, 25, BLACK);
            }
            if(i == 26){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("Oh ... cool name. My name is Shiro. Nice to meet you.", 20, 420, 25, BLACK);
            }
            if(i == 27){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Oscar", 40, 360, 30, BLACK);
                DrawText("..............", 20, 420, 25, BLACK);
            }
            if(i == 28){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Oscar", 40, 360, 30, BLACK);
                DrawText("(Clip Clip Clip.)", 20, 420, 25, BLACK);
            }
            if(i == 29){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("Wait a moment!", 20, 420, 25, BLACK);
            }
            if(i == 30){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Oscar", 40, 360, 30, BLACK);
                DrawText("What do you want ?", 20, 420, 25, BLACK);
            }
            if(i == 31){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("If you don't mind, can we become friend?", 20, 420, 25, BLACK);
            }
            if(i == 32){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Oscar", 40, 360, 30, BLACK);
                DrawText("That's nonsense to be your friend.(frustrated)", 20, 420, 25, BLACK);
            }
            if(i == 33){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("Sorry but can't be friend?", 20, 420, 25, BLACK);
            }
            if(i == 34){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Oscar", 40, 360, 30, BLACK);
                DrawText("Before be friend, try passing the testing.", 20, 420, 25, BLACK);
            }
            if(i == 35){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("If I passed, you will be friends with me, right?", 20, 420, 25, BLACK);
            }
            if(i == 36){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Oscar", 40, 360, 30, BLACK);
                DrawText("No! ... just keep it in mind.", 20, 420, 25, BLACK);
            }
            if(i == 37){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("(Smile)", 20, 420, 25, BLACK);
            }
            if(i == 38){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Oscar", 40, 360, 30, BLACK);
                DrawText("Why are you smile?", 20, 420, 25, BLACK);
            }
            if(i == 39){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("At least there have a chance to be friends with you.", 20, 420, 25, BLACK);
            }
            if(i == 40){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Oscar", 40, 360, 30, BLACK);
                DrawText("Really self confidence that you will pass the testing.", 20, 420, 25, BLACK);
            }
            if(i == 41){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("Yes ... because that's my purpose.", 20, 420, 25, BLACK);
            }
            if(i == 42){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Oscar", 40, 360, 30, BLACK);
                DrawText("I will wait and see.", 20, 420, 25, BLACK);
            }
            if(i == 43){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Oscar_T, 650, 100, WHITE);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("(Tmp Tmp Tmp.)", 20, 420, 25, BLACK);
            }
            if(i == 44){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Enjou_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 420, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Girl with Hair Ribbon", 40, 360, 30, BLACK);
                DrawText("Hey you.", 20, 420, 25, BLACK);
            }
            if(i == 45){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Enjou_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("What's wrong?", 20, 420, 25, BLACK);
            }
            if(i == 46){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Enjou_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 420, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Girl with Hair Ribbon", 40, 360, 30, BLACK);
                DrawText("I sorry for him.", 20, 420, 25, BLACK);
            }
            if(i == 47){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Enjou_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("It doesn't matter. I don't think much.", 20, 420, 25, BLACK);
            }
            if(i == 48){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Enjou_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 420, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Girl with Hair Ribbon", 40, 360, 30, BLACK);
                DrawText("He was flattering, but he's really an honest person.", 20, 420, 25, BLACK);
            }
            if(i == 49){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Enjou_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 420, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Girl with Hair Ribbon", 40, 360, 30, BLACK);
                DrawText("Will say to you, why are you asking him to be friends?", 20, 420, 25, BLACK);
            }
            if(i == 50){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Enjou_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("Because his eyes look lonely. So I want to be a friend.", 20, 420, 25, BLACK);
            }
            if(i == 51){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Enjou_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 420, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Girl with Hair Ribbon", 40, 360, 30, BLACK);
                DrawText("Really.(Stare).", 20, 420, 25, BLACK);
            }
            if(i == 52){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Enjou_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Oscar", 40, 360, 30, BLACK);
                DrawText("Why are you so slow!", 20, 420, 25, BLACK);
            }
            if(i == 53){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Enjou_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 420, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Girl with Hair Ribbon", 40, 360, 30, BLACK);
                DrawText("I will coming.", 20, 420, 25, BLACK);
            }
            if(i == 54){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Enjou_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 420, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Girl with Hair Ribbon", 40, 360, 30, BLACK);
                DrawText("To say, I haven't introduced myself yet. I'm Enjou.", 20, 420, 25, BLACK);
                DrawText("Nice to meet you. Shiro.", 20, 445, 25, BLACK);
            }
            if(i == 55){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Enjou_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Oscar", 40, 360, 30, BLACK);
                DrawText("I will go now.", 20, 420, 25, BLACK);
            }
            if(i == 56){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Enjou_T, 650, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Enjou", 40, 360, 30, BLACK);
                DrawText("Hey wait for me.", 20, 420, 25, BLACK);
            }
            if(i == 57){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("When did i tell my name.", 20, 420, 25, BLACK);
            }
            if(i == 58){
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Lime_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 380, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Green-Haired Girl", 40, 360, 30, BLACK);
                DrawText("Did anything wrong? nyaa!", 20, 420, 25, BLACK);
            }
            if(i == 59){
                screen = 0;
                DrawTexture(Shiro_T, 20, 100, WHITE);
                DrawTexture(Lime_T, 400, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Shiro", 40, 360, 30, BLACK);
                DrawText("No..but who are you?", 20, 420, 25, BLACK);
            }
            if(i == 60){
                screen = 1;
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("At the market.", 20, 420, 25, BLACK);
            }
            if(i == 61){
                DrawTexture(T003_T, 350, 100, WHITE);
                DrawRectangle(20, 350, 350, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Blue-Haired Boy", 40, 360, 30, BLACK);
                DrawText("Arriving at the destination. In the evening I will contact again.", 20, 420, 25, BLACK);
            }
            if(i == 62){
                DrawTexture(T003_T, 350, 100, WHITE);
                DrawRectangle(20, 350, 350, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Blue-Haired Boy", 40, 360, 30, BLACK);
                DrawText("Understood after passing the first round of testing,", 20, 420, 25, BLACK);
                DrawText("Come to the library.", 20, 445, 25, BLACK);
            }
            if(i == 63){
                DrawTexture(T003_T, 350, 100, WHITE);
                DrawRectangle(20, 350, 320, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Some Guy in Phone", 40, 360, 30, BLACK);
                DrawText("My expectation are high. T003", 20, 420, 25, BLACK);
            }
            if(i == 64){
                DrawTexture(T003_T, 350, 100, WHITE);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("----------Turnnnn----------", 20, 420, 25, BLACK);
            }
            if(i == 65){
                DrawTexture(T003_T, 350, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("T003", 40, 360, 30, BLACK);
                DrawText("Expectation on me. He lie is really ridiculous.", 20, 420, 25, BLACK);
            }
            if(i == 66){
                DrawTexture(T003_T, 350, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("T003", 40, 360, 30, BLACK);
                DrawText("Must go to the courtyard.", 20, 420, 25, BLACK);
            }
            if(i == 67){
                screen = 1;
                DrawTexture(T003_T, 650, 100, WHITE);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Clip Clip Clip.", 20, 420, 25, BLACK);
            }
            if(i == 68){
                screen = 2;
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("At the front shop's.", 20, 420, 25, BLACK);
            }
            if(i == 69){
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("In street.", 20, 420, 25, BLACK);
            }
            if(i == 70){
                DrawTexture(Jin_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("How much is this?", 20, 420, 25, BLACK);
            }
            if(i == 71){
                DrawTexture(Jin_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 170, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Merchant", 40, 360, 30, BLACK);
                DrawText("Huh ... little boy. Did you interested in this little monster?", 20, 420, 25, BLACK);
            }
            if(i == 72){
                DrawTexture(Jin_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("Yes, How much is this?", 20, 420, 25, BLACK);
            }
            if(i == 73){
                DrawTexture(Jin_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 170, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Merchant", 40, 360, 30, BLACK);
                DrawText("Aee ... Are you sure?", 20, 420, 25, BLACK);
            }
            if(i == 74){
                DrawTexture(Jin_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("Yes, I have a money.", 20, 420, 25, BLACK);
            }
            if(i == 75){
                DrawTexture(Jin_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 170, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Merchant", 40, 360, 30, BLACK);
                DrawText("So at 100 bell, at least I just charge the cage and", 20, 420, 25, BLACK);
                DrawText("the cost of food that has been given to it. Have enough money?", 20, 445, 25, BLACK);
            }
            if(i == 76){
                DrawTexture(Jin_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 170, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Merchant", 40, 360, 30, BLACK);
                DrawText("(Oh shit ... I forget about it. Because I angered this little boy", 20, 420, 25, BLACK);
                DrawText(" had be cocky If he be polite.", 20, 445, 25, BLACK);
                DrawText("it can be sold for less than 30 bell, can't sold again.)", 20, 470, 25, BLACK);
            }
            if(i == 77){
                DrawTexture(Jin_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 170, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Merchant", 40, 360, 30, BLACK);
                DrawText("Sorry about before,I just said wrong. Actually, the price is 20. ", 20, 420, 25, BLACK);
            }
            if(i == 78){
                DrawTexture(Jin_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("Here is a 100 bell. Try check it.", 20, 420, 25, BLACK);
            }
            if(i == 79){
                DrawTexture(Jin_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 170, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Merchant", 40, 360, 30, BLACK);
                DrawText("(Why this kid have a lot of money. How can it be?)", 20, 420, 25, BLACK);
            }
            if(i == 80){
                DrawTexture(Jin_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("I paid it so i will take that.", 20, 420, 25, BLACK);
            }
            if(i == 81){
                DrawTexture(Jin_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 170, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Merchant", 40, 360, 30, BLACK);
                DrawText("Aa Aa... That cage is free. Thanks for buying.", 20, 420, 25, BLACK);
            }
            if(i == 82){
                screen = 2;
                DrawTexture(Jin_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("Ahh… Thank you.", 20, 420, 25, BLACK);
            }
            if(i == 83){
                screen = 3;
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("At the park without people.", 20, 420, 25, BLACK);
            }
            if(i == 84){
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Chew Chew Chew.", 20, 420, 25, BLACK);
            }
            if(i == 85){
                DrawTexture(Lida_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 300, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Girl with Doll", 40, 360, 30, BLACK);
                DrawText("What time is it ... (looking around.)", 20, 420, 25, BLACK);
            }
            if(i == 86){
                DrawTexture(Lida_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 300, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Girl with Doll", 40, 360, 30, BLACK);
                DrawText("Oh .... just 7.30 am it better to sleep than Zzz.", 20, 420, 25, BLACK);
            }
            if(i == 87){
                DrawTexture(Lida_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 400, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Orange-Haired Boy", 40, 360, 30, BLACK);
                DrawText("Really, will you take the testing?", 20, 420, 25, BLACK);
            }
            if(i == 88){
                DrawTexture(Lida_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 300, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Girl with Doll", 40, 360, 30, BLACK);
                DrawText("Yes, when have enough strength.", 20, 420, 25, BLACK);
            }
            if(i == 89){
                DrawTexture(Lida_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 400, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Orange-Haired Boy", 40, 360, 30, BLACK);
                DrawText("Just a pretext to sleep.", 20, 420, 25, BLACK);
            }
            if(i == 90){
                DrawTexture(Lida_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 400, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Orange-Haired Boy", 40, 360, 30, BLACK);
                DrawText("Just a pretext to sleep.", 20, 420, 25, BLACK);
            }
            if(i == 91){
                DrawTexture(Lida_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 300, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Girl with Doll", 40, 360, 30, BLACK);
                DrawText("Not sleeping, just keep strength.", 20, 420, 25, BLACK);
            }
            if(i == 92){
                DrawTexture(Lida_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 400, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Orange-Haired Boy", 40, 360, 30, BLACK);
                DrawText("Should change the name from Lida to Lazy.", 20, 420, 25, BLACK);
            }
            if(i == 93){
                DrawTexture(Lida_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Lida", 40, 360, 30, BLACK);
                DrawText("I know, but you have to give me a ride Case.", 20, 420, 25, BLACK);
            }
            if(i == 94){
                DrawTexture(Lida_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Case", 40, 360, 30, BLACK);
                DrawText("Yes, Ms.Lida.", 20, 420, 25, BLACK);
            }
            if(i == 95){
                screen = 3;
                DrawTexture(Lida_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Lida", 40, 360, 30, BLACK);
                DrawText("..Heh..Heh.(Smile)", 20, 420, 25, BLACK);
            }
            if(i == 96){
                screen = 4;
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("At the street with a little hot weather.", 20, 420, 25, BLACK);
            }
            if(i == 97){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("Fuh .....", 20, 420, 25, BLACK);
            }
            if(i == 98){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("Hey Black go into the bag. At least cooler than outside.", 20, 420, 25, BLACK);
            }
            if(i == 99){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Black", 40, 360, 30, BLACK);
                DrawText("kyu kyu.", 20, 420, 25, BLACK);
            }
            if(i == 100){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("Sorry, I just bought you but made it difficult.", 20, 420, 25, BLACK);
            }
            if(i == 101){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Black", 40, 360, 30, BLACK);
                DrawText("Kyu.", 20, 420, 25, BLACK);
            }
            if(i == 102){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("I can handle it.", 20, 420, 25, BLACK);
            }
            if(i == 103){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 200, 100, WHITE);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Tump.", 20, 420, 25, BLACK);
            }
            if(i == 104){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 350, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Long-Haired Girl", 40, 360, 30, BLACK);
                DrawText("Ouchh..", 20, 420, 25, BLACK);
            }
            if(i == 105){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("Sorry.", 20, 420, 25, BLACK);
            }
            if(i == 106){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 350, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Long-Haired Girl", 40, 360, 30, BLACK);
                DrawText("Sorry for.....", 20, 420, 25, BLACK);
            }
            if(i == 107){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("Are you ok? Did you have any wound?", 20, 420, 25, BLACK);
            }
            if(i == 108){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("She no reply back and her face is red too.", 20, 420, 25, BLACK);
            }
            if(i == 109){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("Did you need a doctor.", 20, 420, 25, BLACK);
            }
            if(i == 110){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 350, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Long-Haired Girl", 40, 360, 30, BLACK);
                DrawText("I'm alright... is that.", 20, 420, 25, BLACK);
            }
            if(i == 111){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("What? ... (look like fever ... Which medicine will work?)", 20, 420, 25, BLACK);
            }
            if(i == 112){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("What? ... (look like fever ... Which medicine will work?)", 20, 420, 25, BLACK);
            }
            if(i == 113){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 350, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Long-Haired Girl", 40, 360, 30, BLACK);
                DrawText("What is your name? ... I Pra", 20, 420, 25, BLACK);
            }
            if(i == 114){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("(Ask my name? ... She might be alright.)", 20, 420, 25, BLACK);
            }
            if(i == 115){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 440, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Boys with Solemn Face", 40, 360, 30, BLACK);
                DrawText("Ah ... My name is Jin. Nice to meet you.", 20, 420, 25, BLACK);
            }
            if(i == 116){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Pra", 40, 360, 30, BLACK);
                DrawText("So? hahaha", 20, 420, 25, BLACK);
            }
            if(i == 117){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("You...?", 20, 420, 25, BLACK);
            }
            if(i == 118){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 380, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Yellow-Haired Boy", 40, 360, 30, BLACK);
                DrawText("STOP!, what will you do to Pra.", 20, 420, 25, BLACK);
            }
            if(i == 119){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("Nothing. I just....", 20, 420, 25, BLACK);
            }
            if(i == 120){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 380, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Yellow-Haired Boy", 40, 360, 30, BLACK);
                DrawText("Don't excuse. Actually Pra, we don't have time.", 20, 420, 25, BLACK);
                DrawText("This will be 7 o'clock. If not hurry, We late.", 20, 445, 25, BLACK);
            }
            if(i == 121){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("Where are you go? If I know so I can help.", 20, 420, 25, BLACK);
            }
            if(i == 122){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 380, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Yellow-Haired Boy", 40, 360, 30, BLACK);
                DrawText("It's not you business.", 20, 420, 25, BLACK);
            }
            if(i == 123){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Pra", 40, 360, 30, BLACK);
                DrawText("Don't talk like that Type. We are going to the courtyard.", 20, 420, 25, BLACK);
            }
            if(i == 124){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Type", 40, 360, 30, BLACK);
                DrawText("Hey....", 20, 420, 25, BLACK);
            }
            if(i == 125){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("I will go there too. Did you mind come with me.", 20, 420, 25, BLACK);
            }
            if(i == 126){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Pra", 40, 360, 30, BLACK);
                DrawText("Yes!", 20, 420, 25, BLACK);
            }
            if(i == 127){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Pra", 40, 360, 30, BLACK);
                DrawText("Wait, We can't trust him.", 20, 420, 25, BLACK);
            }
            if(i == 128){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 380, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("The Black-Haired Boy", 40, 360, 30, BLACK);
                DrawText("Do you the way to the courtyard.", 20, 420, 25, BLACK);
            }
            if(i == 129){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Type", 40, 360, 30, BLACK);
                DrawText("Toh .. You..", 20, 420, 25, BLACK);
            }
            if(i == 130){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Pra", 40, 360, 30, BLACK);
                DrawText("You don't know the way and deny kindness. It bad habit.", 20, 420, 25, BLACK);
            }
            if(i == 131){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("Take this ... I give.", 20, 420, 25, BLACK);
            }
            if(i == 132){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Pra", 40, 360, 30, BLACK);
                DrawText("What is this?", 20, 420, 25, BLACK);
            }
            if(i == 133){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("The medicine if you was dizzy. It helped to breathe easily too.", 20, 420, 25, BLACK);
            }
            if(i == 134){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Pra", 40, 360, 30, BLACK);
                DrawText("Is it ok to give to me.", 20, 420, 25, BLACK);
            }
            if(i == 135){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("It doesn't matter. I examination same as your.", 20, 420, 25, BLACK);
                DrawText("Help each other, it's nothing wrong.", 20, 445, 25, BLACK);
            }
            if(i == 136){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Pra", 40, 360, 30, BLACK);
                DrawText("Tha..Thank.", 20, 420, 25, BLACK);
            }
            if(i == 137){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("Ah ... Follow me,If late you couldn't to register.", 20, 420, 25, BLACK);
            }
            if(i == 138){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 260, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Type, Pra, Toh", 40, 360, 30, BLACK);
                DrawText("Have registered ?", 20, 420, 25, BLACK);
            }
            if(i == 139){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("Heh", 20, 420, 25, BLACK);
            }
            if(i == 140){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 260, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Type, Pra, Toh", 40, 360, 30, BLACK);
                DrawText("What!!!!", 20, 420, 25, BLACK);
            }
            if(i == 141){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 260, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("(Heh.... They look funny)", 20, 420, 25, BLACK);
            }
            if(i == 142){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Toh", 40, 360, 30, BLACK);
                DrawText("(He laughs too.)(Stare)", 20, 420, 25, BLACK);
            }
            if(i == 143){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("What are you looking? Come here.", 20, 420, 25, BLACK);
            }
            if(i == 144){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Pra", 40, 360, 30, BLACK);
                DrawText("What are you waiting for? Come here.", 20, 420, 25, BLACK);
            }
            if(i == 145){
                screen = 4;
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 200, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Type, Toh", 40, 360, 30, BLACK);
                DrawText("Yeah!.", 20, 420, 25, BLACK);
            }
            if(i == 146){
                screen = 0;
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("At the front of the the courtyard", 20, 420, 25, BLACK);
            }
            if(i == 147){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("noisy! noisy! noisy!.", 20, 420, 25, BLACK);
            }
            if(i == 148){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("From now on, go straight to see the people following", 20, 420, 25, BLACK);
                DrawText("the line there. Go there..", 20, 445, 25, BLACK);
            }
            if(i == 149){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Pra", 40, 360, 30, BLACK);
                DrawText("Thank you so much. You Thank you him too.", 20, 420, 25, BLACK);
            }
            if(i == 150){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Toh", 40, 360, 30, BLACK);
                DrawText("Thank you.", 20, 420, 25, BLACK);
            }
            if(i == 151){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Pra", 40, 360, 30, BLACK);
                DrawText("Type you need to thank you too.", 20, 420, 25, BLACK);
            }
            if(i == 152){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Type", 40, 360, 30, BLACK);
                DrawText("Thank you.(Pra is crazy,why are you interested him?)", 20, 420, 25, BLACK);
            }
            if(i == 153){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("See you.", 20, 420, 25, BLACK);
            }
            if(i == 154){
                DrawTexture(Jin_T, 650, 100, WHITE);
                DrawTexture(Pra_T, 20, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Pra", 40, 360, 30, BLACK);
                DrawText("Good luck.", 20, 420, 25, BLACK);
            }
            if(i == 155){
                DrawTexture(Pra_T, 300, 100, WHITE);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Chew Chew Chew.", 20, 420, 25, BLACK);
            }
            if(i == 156){
                DrawTexture(Pra_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Toh", 40, 360, 30, BLACK);
                DrawText("You two hurry up before too late.", 20, 420, 25, BLACK);
            }
            if(i == 157){
                DrawTexture(Pra_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Pra", 40, 360, 30, BLACK);
                DrawText("Type! What are you waiting for?", 20, 420, 25, BLACK);
            }
            if(i == 158){
                DrawTexture(Pra_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Pra", 40, 360, 30, BLACK);
                DrawText("Type! What are you waiting for?", 20, 420, 25, BLACK);
            }
            if(i == 159){
                DrawTexture(Pra_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Type", 40, 360, 30, BLACK);
                DrawText("Ah .... I'm coming(I just to interested to that crazy too mucu", 20, 420, 25, BLACK);
                DrawText("until I notice here There will be unusually high humidity more", 20, 445, 25, BLACK);
                DrawText("than normal it could be. May be about this test?", 20, 470, 25, BLACK);
            }
            if(i == 160){
                DrawTexture(Pra_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Pra", 40, 360, 30, BLACK);
                DrawText("Don't make face like that. It not suitable for you.", 20, 420, 25, BLACK);
            }
            if(i == 161){
                screen = 0;
                DrawTexture(Pra_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Type", 40, 360, 30, BLACK);
                DrawText("Don't get your face close to me. Go now before it too late.", 20, 420, 25, BLACK);
                DrawText("(Maybe be I think too much.)", 20, 445, 25, BLACK);
            }
            if(i == 162){
                screen = 6;
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("At the forest side of the field", 20, 420, 25, BLACK);
                DrawText("Atmosphere is Cold and quiet.", 20, 445, 25, BLACK);
            }
            if(i == 163){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("(Whistling Whistling Whistling.)", 20, 420, 25, BLACK);
            }
            if(i == 164){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("Is an uncomfortable when in bag?", 20, 420, 25, BLACK);
            }
            if(i == 165){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Black", 40, 360, 30, BLACK);
                DrawText("Kyu Kyu.", 20, 420, 25, BLACK);
            }
            if(i == 166){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("So ... Well ...look ok right?", 20, 420, 25, BLACK);
            }
            if(i == 167){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Black", 40, 360, 30, BLACK);
                DrawText("Kyu Kyu.", 20, 420, 25, BLACK);
            }
            if(i == 168){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("Can you wait here for a while? I will come back.", 20, 420, 25, BLACK);
            }
            if(i == 169){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("Don't be stubborn. I will come back. Don't worry.", 20, 420, 25, BLACK);
                DrawText("Or you want food Eh ... this is all of you.", 20, 445, 25, BLACK);
            }
            if(i == 170){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Black", 40, 360, 30, BLACK);
                DrawText("Kyu Kyu Kyu Kyu.", 20, 420, 25, BLACK);
            }
            if(i == 171){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("Want to follow me.", 20, 420, 25, BLACK);
            }
            if(i == 172){
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("(Flashback)", 20, 420, 25, BLACK);
            }
            if (i == 173){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("?????", 40, 360, 30, BLACK);
                DrawText("Please wait here.", 20, 420, 25, BLACK);
            }
            if (i == 174){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("(That story again. Why can't forgot it.)", 20, 420, 25, BLACK);
            }
            if (i == 175){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("Don't take it hard. I didn't leave you, of course", 20, 420, 25, BLACK);
                DrawText("So before I came back eat all the food I had you to eat", 20, 445, 25, BLACK);
            }
            if (i == 176){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Black", 40, 360, 30, BLACK);
                DrawText("Kyu Kyu.", 20, 420, 25, BLACK);
            }
            if (i == 177){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("Understand?", 20, 420, 25, BLACK);
            }
            if (i == 178){
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Black", 40, 360, 30, BLACK);
                DrawText("Kyu Kyu.", 20, 420, 25, BLACK);
            }
            if (i == 179){
                screen = 6;
                DrawTexture(Jin_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Jin", 40, 360, 30, BLACK);
                DrawText("I will come back to pice you up.", 20, 420, 25, BLACK);
            }
            if (i == 180){
                screen = 0;
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("At the front of the the courtyard.", 20, 420, 25, BLACK);
            }
            if (i == 181){
                DrawTexture(Lida_T, 300, 100, WHITE);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Chew Chew Chew.", 20, 420, 25, BLACK);
            }
            if (i == 182){
                DrawTexture(Lida_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Lida", 40, 360, 30, BLACK);
                DrawText("Already here .... Yeah.", 20, 420, 25, BLACK);
            }
            if (i == 183){
                DrawTexture(Lida_T, 300, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Lida", 40, 360, 30, BLACK);
                DrawText("(Case said he have to give a ride but left me halfway down)", 20, 420, 25, BLACK);
                DrawText("(If I found him, I will make sorry to me.)", 20, 445, 25, BLACK);
                DrawText("Well ... can be time ... sleep Zzz.", 20, 470, 25, BLACK);
            }
            if (i == 184){
                DrawTexture(Lida_T, 350, 100, WHITE);
                DrawTexture(T003_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("T003", 40, 360, 30, BLACK);
                DrawText("Hey Little kid. Don't sleep in the walk way.", 20, 420, 25, BLACK);
            }
            if (i == 185){
                DrawTexture(Lida_T, 350, 100, WHITE);
                DrawTexture(T003_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Lida", 40, 360, 30, BLACK);
                DrawText("Ahhhhhhhh...Sorry, It near start.", 20, 420, 25, BLACK);
            }
            if (i == 186){
                DrawTexture(Lida_T, 350, 100, WHITE);
                DrawTexture(T003_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("?????", 40, 360, 30, BLACK);
                DrawText("Sorry. Give me way.", 20, 420, 25, BLACK);
            }
            if (i == 187){
                DrawTexture(Lida_T, 350, 100, WHITE);
                DrawTexture(T003_T, 200, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Lida", 40, 360, 30, BLACK);
                DrawText("Ok.", 20, 420, 25, BLACK);
            }
            if (i == 188){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("?????", 40, 360, 30, BLACK);
                DrawText("Sorry Dex. l'm late.", 20, 420, 25, BLACK);
            }
            if (i == 189){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Dex", 40, 360, 30, BLACK);
                DrawText("It's not your fault Risa.", 20, 420, 25, BLACK);
            }
            if (i == 190){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Dex", 40, 360, 30, BLACK);
                DrawText("I hurry up here until I know I forgot you.", 20, 420, 25, BLACK);
            }
            if (i == 191){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Risa", 40, 360, 30, BLACK);
                DrawText("But you too busy.", 20, 420, 25, BLACK);
            }
            if (i == 192){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Dex", 40, 360, 30, BLACK);
                DrawText("Good kid. Come here.", 20, 420, 25, BLACK);
            }
            if (i == 193){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Dex", 40, 360, 30, BLACK);
                DrawText("Huh!", 20, 420, 25, BLACK);
            }
            if (i == 194){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Risa", 40, 360, 30, BLACK);
                DrawText("!!!!!", 20, 420, 25, BLACK);
            }
            if (i == 195){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Dex", 40, 360, 30, BLACK);
                DrawText("Grab my shoulders well. I gonna run to line.", 20, 420, 25, BLACK);
            }
            if (i == 196){
                screen = 0;
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Risa", 40, 360, 30, BLACK);
                DrawText("Ok.", 20, 420, 25, BLACK);
            }
            if (i == 197){
                screen = 7;
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("At the No. 4 Building next to the stadium on the 4th floor.", 20, 420, 25, BLACK);
            }
            if (i == 198){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("?????", 40, 360, 30, BLACK);
                DrawText("This place looks more lively than the previous testing.", 20, 420, 25, BLACK);
            }
            if (i == 199){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("?????", 40, 360, 30, BLACK);
                DrawText("Sir, don't be late if not Mr.Todo will angry again.", 20, 420, 25, BLACK);
            }
            if (i == 200){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("?????", 40, 360, 30, BLACK);
                DrawText("Rena, Don't be serious. It has 30 minutes remaining.", 20, 420, 25, BLACK);
            }
            if (i == 201){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("?????", 40, 360, 30, BLACK);
                DrawText("The clock is broken. This is 6.58 AM.", 20, 420, 25, BLACK);
            }
            if (i == 202){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("?????", 40, 360, 30, BLACK);
                DrawText("Wah .... Bad thing, Eeri ... Good morning", 20, 420, 25, BLACK);
            }
            if (i == 203){
                DrawTexture(Eeri_T, 350, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Eeri", 40, 360, 30, BLACK);
                DrawText(".........", 20, 420, 25, BLACK);
            }
            if (i == 204){
                DrawTexture(Eeri_T, 650, 100, WHITE);
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Eeri", 40, 360, 30, BLACK);
                DrawText("(Chew Chew Chew)", 20, 420, 25, BLACK);
            }
            if (i == 205){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("????", 40, 360, 30, BLACK);
                DrawText("Ignored me again.", 20, 420, 25, BLACK);
            }
            if (i == 206){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Rena", 40, 360, 30, BLACK);
                DrawText("Hurry to go ..... Mr.Arther.", 20, 420, 25, BLACK);
            }
            if (i == 207){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Arther", 40, 360, 30, BLACK);
                DrawText("Aah...I knows.", 20, 420, 25, BLACK);
            }
            if (i == 208){
                DrawRectangle(20, 350, 150, 50, LOWYELLOW);
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Arther", 40, 360, 30, BLACK);
                DrawText("Aah...I knows.", 20, 420, 25, BLACK);
            }
            if (i == 209){
                screen = 7;
                DrawRectangle(0, 400, 800, 200, LOWYELLOW);
                DrawText("Ringggggggggggggggggggggg", 20, 420, 25, BLACK);
            }
            if (i == 210){
                screen = 8;
                DrawText("End Chapter 0.", 300, 420, 25, WHITE);
                DrawText("Left click to Replay.", 240, 450, 30, WHITE);
                DrawText("Press ESC to Exit", 260, 480, 30, WHITE);
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
    
    UnloadImage(Shiro);
    UnloadImage(Oscar);
    UnloadImage(Enjou);
    UnloadImage(Lime);
    UnloadImage(T003);
    UnloadImage(Jin);
    UnloadImage(Pra);
    UnloadImage(Lida);
    UnloadImage(Eeri);
    
    return 0;
}