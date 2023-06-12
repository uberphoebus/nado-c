#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void) {
    srand(time(NULL));
    int count = 0;
    for (int i = 0; i < 5; i++) {
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        printf("%d x %d = ?", num1, num2);
        showQuestion(i, num1, num2);
        int answer = -1;
        scanf("%d", &answer);
        if (answer == -1) {
            printf("exit\n");
            exit(0); // 프로그램 종료
        } else if (answer == num1 * num2) {
            success();
            count++;
        } else {
            fail();
        }
    }

    printf("score(five of): %d\n", count);

    return 0;
}

int getRandomNumber(int level) {
    return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2) {
    printf("\n\n\n####### #%d question #######\n", level);
    printf("%d x %d = ?\n\n", num1, num2);
    printf("#######################\n");
    printf("enter the answer: (exit: -1)");
}

void success() {
    printf("\n\n\n########## success ##########\n");
}

void fail() {
    printf("\n\n\n########## fail ##########\n");
}