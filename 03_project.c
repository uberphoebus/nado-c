#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int num = rand() % 100 + 1; // 1 ~ 100
    printf("num: %d\n", num);
    int answer = 0;
    int chance = 0;
    while (1) {
        printf("chance: %d\n", chance);
        printf("answer: ");
        scanf("%d", &answer);
        if (answer > num) {
            printf("too high\n");
        } else if (answer < num) {
            printf("too low\n");
        } else if (answer == num) {
            printf("correct!\n");
        } else {
            printf("error\n");
        }

        if (chance == 1) {
            printf("game over\n");
            break;
        }
        chance--;
    }
    return 0;
}