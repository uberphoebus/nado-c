#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int level;
int arrayFish[6];
int *cursor;

void initData();
void printFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

int main(void) {
    clock_t startTime;
    clock_t totalElapsedTime = 0;
    clock_t prevElapsedTime = 0;

    int num;
    initData();

    cursor = arrayFish;

    startTime = clock();
    while (1) {
        printFishes();
        printf("Which number to water? ");
        scanf("%d", &num);

        // check input
        if (num < 1 || num > 6) {
            printf("\nERROR: Invalid number!\n");
            continue;
        }

        // total elapsed time
        totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
        printf("Total elapsed time: %ld seconds\n", totalElapsedTime);

        // last elapsed time
        prevElapsedTime = totalElapsedTime - prevElapsedTime;
        printf("Last  elapsed time: %ld seconds\n", prevElapsedTime);

        // decrease water level
        decreaseWater(prevElapsedTime);

        // give water
        if (cursor[num - 1] <= 0) {
            printf("ERROR: %d Fish is dead!\n", num);
        } else if (cursor[num - 1] + 1 <= 100) {
            printf("Watered fish #%d\n\n", num);
            cursor[num - 1] += 1;
        }

        // level up
        if (totalElapsedTime / 20 > level - 1) {
            level++;
            printf("*** Level Up! ***\n\n");
            if (level == 5) {
                printf("\n\nYou win!\n\n");
                exit(0);
            }
        }

        // check fish status
        if (checkFishAlive() == 0) {
            printf("All fish are dead, game over!\n");
            exit(0);
        } else {
            printf("Some fish are still alive, keep going!\n");
        }

        prevElapsedTime = totalElapsedTime;
    }

    return 0;
}

void initData() {
    level = 1;
    for (int i = 0; i < 6; i++) {
        arrayFish[i] = 100;
    }
}

void printFishes() {
    printf("%3d   %3d   %3d   %3d   %3d   %3d\n", 1, 2, 3, 4, 5, 6);
    for (int i = 0; i < 6; i++) {
        printf(" %4d ", arrayFish[i]);
    }
    printf("\n\n");
}

void decreaseWater(long elapsedTime) {
    for (int i = 0; i < 6; i++) {
        arrayFish[i] -= (level * 3 * (int)elapsedTime);
        if (arrayFish[i] < 0) {
            arrayFish[i] = 0;
        }
    }
}

int checkFishAlive() {
    for (int i = 0; i < 6; i++) {
        if (arrayFish[i] > 0) {
            return 1;
        }
    }
    return 0;
}