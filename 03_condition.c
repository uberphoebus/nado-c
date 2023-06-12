#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    // if
    int age = 8;
    if (age >= 8 && age < 13) {
        printf("You are a child.\n");
    } else if (age >= 13 && age < 16) {
        printf("You are a teenager.\n");
    } else if (age >= 16 && age < 18) {
        printf("You are a youth.\n");
    } else {
        printf("You are an adult.\n");
    }

    // break
    for (int i = 1; i < 10; i++) {
        if (i >= 6) {
            printf("break go home\n");
            break; // break the loop
        }
        printf("%d stdudent be ready\n", i);
    }

    // continue
    for (int i = 1; i < 20; i++) {
        if (i >= 6 && i <= 10) {
            if (i == 7) {
                printf("%d student is absent\n", i);
                continue; // continue the loop(not execute the following code)
            }
            printf("%d stdudent be ready\n", i);
        }
    }

    // rock, scissors, paper
    int out = rand() % 3;
    if (out == 0) {
        printf("rock\n");
    } else if (out == 1) {
        printf("scissors\n");
    } else {
        printf("paper\n");
    }

    // switch
    srand(time(NULL));
    int out2 = rand() % 3;
    switch (out2) {
        case 0:
            printf("rock\n");
            break;
        case 1:
            printf("scissors\n");
            break;
        case 2:
            printf("paper\n");
            break;
        default:
            printf("error\n");
            break;
    }

    return 0;
}