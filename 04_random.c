#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("before rand()\n"); // 난수 생성
    for (int i = 0; i < 5; i++) {
        printf("%d ", rand()); // 같은 값이 출력됨
    }

    srand(time(NULL)); // 난수 초기화
    printf("\nafter rand()\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", rand()); // 다른 값이 출력됨
    }
    int num = rand() % 3 + 1; // 1 ~ 3

    return 0;
}   