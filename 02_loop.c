#include <stdio.h>

int main(void) {

    // ++
    int a = 10;
    printf("a = %d\n", a);
    a++;
    printf("a = %d\n", a);
    ++a;
    printf("a = %d\n", a);

    int b = 20;
    printf("b = %d\n", ++b);
    printf("b = %d\n", b++);
    printf("b = %d\n", b);

    // for
    for (int i = 0; i < 10; i++) {
        printf("for Hello World : i = %d\n", i);
    }

    // while
    int i = 0;
    while (i <= 10) {
        printf("while Hello World : i = %d\n", i++);
    }

    // do while
    int j = 0;
    do {
        printf("do while Hello World : j = %d\n", j++);
    } while (j <= 10);

    // nested loop
    for (int i = 0; i < 3; i++) {
        printf("outer for i = %d\n", i);
        for (int j = 0; j < 5; j++) {
            printf("      nested for j = %d\n", j);
        }
    }

    // 99 multiplication table
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d * %d = %d\t", j, i, i * j);
        }
        printf("\n");
    }

    // pyramid
    int floor;
    printf("pyramid\n");
    scanf("%d", &floor);
    for (int i = 0; i < floor; i++) {
        for (int j = 0; j < floor - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}