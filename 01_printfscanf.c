#include <stdio.h>

int main(void) {

    // int
    int age = 12;
    printf("age = %d\n", age);
    age = 13;
    printf("age = %d\n", age);

    // float double
    float f = 46.5;
    printf("f = %.2f\n", f);
    double d = 4.428;
    printf("d = %.2lf\n", d);

    // const
    const int YEAR = 2000;
    printf("Year = %d\n", YEAR);

    // scanf
    int one, two, three = 1;
    printf("Input three numbers: ");
    // scanf("%d %d %d", &one, &two, &three);
    printf("one = %d, two = %d, three = %d\n", one, two, three);

    // char
    char c = 'a';
    printf("c = %c\n", c);

    // chars
    char str[256];
    int size;
    // scanf("%s", str);
    printf("str = %s\n", str);
    size = sizeof(str);
    // printf("sizeof(str) = %d\n", size); // sizeof(str) = 256

    return 0;
}