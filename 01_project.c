#include <stdio.h>

int main(void) {

    char name[256];
    int age;
    float weight;
    double height;
    char what[256];

    printf("What is your name? ");
    scanf("%s", name);
    printf("How old are you? ");
    scanf("%d", &age);
    printf("How much do you weigh? ");
    scanf("%f", &weight);
    printf("How tall are you? ");
    scanf("%lf", &height);
    printf("What crime did you commit? ");
    scanf("%s", what);

    printf("\n\n----- Results -----\n");
    printf("Name:   %s\n", name);
    printf("Age:    %d\n", age);
    printf("Weight: %.2f\n", weight);
    printf("Height: %.2lf\n", height);
    printf("Crime:  %s\n", what);

    return 0;
}