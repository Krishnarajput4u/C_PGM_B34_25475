#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

typedef struct {
    int x, y;
} Point;

int width = 40, height = 20;
Point snake[100];
int length;
Point food;
int gameOver = 0;
int score = 0;

typedef enum { UP, DOWN, LEFT, RIGHT } Direction;
Direction dir;

void initGame() {
    length = 1;
    snake[0].x = width / 2;
    snake[0].y = height / 2;

    dir = RIGHT;

    // initial food position
    food.x = rand() % width;
    food.y = rand() % height;

    score = 0;
}

void drawBoard() {
    system("cls");

    printf("Score: %d\n", score);

    // top border
    for (int i = 0; i < width + 2; i++)
        printf("#");
    printf("\n");

    for (int y = 0; y < height; y++) {
        printf("#"); // left border

        for (int x = 0; x < width; x++) {
            int printed = 0;

            // draw snake head
            if (x == snake[0].x && y == snake[0].y) {
                printf("O");
                printed = 1;
            } 
            else {
                // draw snake body
                for (int i = 1; i < length; i++) {
                    if (x == snake[i].x && y == snake[i].y) {
                        printf("o");
                        printed = 1;
                        break;
                    }
                }
            }

            // draw food or empty space
            if (!printed) {
                if (x == food.x && y == food.y)
                    printf("*");
                else
                    printf(" ");
            }
        }

        printf("#\n"); // right border
    }

    // bottom border
    for (int i = 0; i < width + 2; i++)
        printf("#");
    printf("\n");
}

void getInput() {
    if (kbhit()) {
        char c = getch();

        // Prevent reversing direction
        if (c == 'w' && dir != DOWN)
            dir = UP;

        if (c == 's' && dir != UP)
            dir = DOWN;

        if (c == 'a' && dir != RIGHT)
            dir = LEFT;

        if (c == 'd' && dir != LEFT)
            dir = RIGHT;
    }
}

void moveSnake() {
    // move body: each segment takes position of the previous one
    for (int i = length - 1; i > 0; i--)
        snake[i] = snake[i - 1];

    // move head based on direction
    if (dir == UP) snake[0].y--;
    if (dir == DOWN) snake[0].y++;
    if (dir == LEFT) snake[0].x--;
    if (dir == RIGHT) snake[0].x++;

    // if snake eats food, increase length and score
    if (snake[0].x == food.x && snake[0].y == food.y) {
        length++;
        score++;

        // place new food at random location
        food.x = rand() % width;
        food.y = rand() % height;
    }

    // collision with walls
    if (snake[0].x < 0 || snake[0].x >= width ||
        snake[0].y < 0 || snake[0].y >= height)
        gameOver = 1;

    // collision with itself
    for (int i = 1; i < length; i++)
        if (snake[0].x == snake[i].x && snake[0].y == snake[i].y)
            gameOver = 1;
}

int main() {
    srand(time(NULL));
    initGame();

    while (!gameOver) {
        drawBoard();
        getInput();
        moveSnake();
        Sleep(100);  // controls speed
    }

    printf("\nGame Over! Final Score: %d\n", score);

    return 0;
}