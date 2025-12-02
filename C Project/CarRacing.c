#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define ROWS 15
#define COLS 4

char map[ROWS][COLS];
int playerLane = 1;
int score = 0;

void clearMap() {
    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < COLS; c++)
            map[r][c] = ' ';
}

void draw() {
    system("cls");

    printf("========== CAR RACING ==========\n");
    printf("  Use A / D to move | Score: %d\n", score);
    printf("================================\n\n");

    for (int r = 0; r < ROWS; r++) {
        printf("        |");

        for (int c = 0; c < COLS; c++) {
            if (map[r][c] == '#')
                printf(" # ");
            else if (map[r][c] == 'A')
                printf(" A ");
            else
                printf(" . ");
        }

        printf("|\n");
    }

    printf("\n================================\n");
}

void shiftDown() {
    for (int r = ROWS - 1; r > 0; r--)
        for (int c = 0; c < COLS; c++)
            map[r][c] = map[r - 1][c];

    for (int c = 0; c < COLS; c++)
        map[0][c] = ' ';
}

void spawnEnemy() {
    if (rand() % 3 == 0) {
        int lane = rand() % COLS;
        map[0][lane] = '#';
    }
}

int collisionCheck(int lane) {
    return (map[ROWS - 1][lane] == '#');
}

void placePlayer() {
    for (int c = 0; c < COLS; c++)
        if (map[ROWS - 1][c] == 'A')
            map[ROWS - 1][c] = ' ';

    map[ROWS - 1][playerLane] = 'A';
}

int main() {
    srand(time(NULL));

    while (1) {     // REPLAY LOOP

        // Reset game
        score = 0;
        playerLane = 1;
        clearMap();
        placePlayer();

        // GAME LOOP
        while (1) {

            // INPUT
            if (kbhit()) {
                char ch = getch();
                if (ch == 'a' && playerLane > 0) playerLane--;
                if (ch == 'd' && playerLane < COLS - 1) playerLane++;
            }

            // move road + spawn
            shiftDown();
            spawnEnemy();

            // collision detection
            if (collisionCheck(playerLane)) {
                placePlayer();
                draw();
                break;
            }

            placePlayer();
            score++;
            draw();

            int spd = 120 - (score / 15);
            if (spd < 40) spd = 40;

            Sleep(spd);
        }

        // GAME OVER SCREEN
        printf("\nGAME OVER! Final Score: %d\n", score);

        // ASK PLAYER TO PLAY AGAIN
        printf("Play again? (Y/N): ");
        char choice;
        scanf(" %c", &choice);

        if (choice != 'Y' && choice != 'y') {
            break; // EXIT PROGRAM
        }
        system("cls");
    }
    return 0;
}