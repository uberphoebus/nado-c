#include <stdio.h>

int main(void) {
    // array
    int subway_array[3];
    subway_array[0] = 30;
    subway_array[1] = 40;
    subway_array[2] = 50;
    for (int i = 0; i < 3; i++) {
        printf("subway_array[%d] = %d\n", i, subway_array[i]);
    }

    int arr[10] = {1, 2, 3, 4};
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    float arr2[5] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    for (int i = 0; i < 5; i++) {
        printf("arr2[%d] = %.2f\n", i, arr2[i]);
    }
    
    char c = 'A';
    printf("%c\n", c);

    char str[7] = "coding";
    printf("%s\n", str);

    char str2[] = "coding";
    printf("%s\n", str2);
    printf("%ld\n", sizeof(str2));

    for (int i = 0; i < sizeof(str2); i++) {
        printf("%c\n", str2[i]);
    }

    char kor[] = "나도코딩";
    printf("%s\n", kor);
    printf("%ld\n", sizeof(kor));

    char c_array[10] = {'C', 'o', 'd', 'i', 'n', 'g'};
    printf("%s\n", c_array);

    // ascii code
    printf("%d\n", 'A');
    printf("%d\n", 'a');
    printf("%d\n", '0');
    printf("%d\n", '1');

    for (int i = 0; i < 128; i++) {
        printf("ascii code %d : %c\n", i, i);
    }

    return 0;
}