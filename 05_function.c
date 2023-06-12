#include <stdio.h>

void p(int num);
void function_without_return();
int function_with_return();
int function_with_parameter(int num1, int num2, int num3);
int add(int num1, int num2);

int main(void) {
    // function
    int num = 10;
    p(num);

    function_without_return();
    int num2 = function_with_return();
    p(num2);

    int num3 = function_with_parameter(1, 2, 3);
    p(num3);

    p(add(1, 2));

    return 0;
}

void p(int num) {
    printf("num : %d\n", num);
}

void function_without_return() {
    printf("function_without_return()\n");
}

int function_with_return() {
    printf("function_with_return()\n");
    return 10;
}

int function_with_parameter(int num1, int num2, int num3) {
    printf("function_with_parameter()\n");
    return num1 + num2 + num3;
}

int add(int num1, int num2) {
    return num1 + num2;
}