#include <stdio.h>

void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArray(int *ptr);

int main(void) {
    // pointer
    int tom = 1;
    int bob = 2;
    int amy = 3;

    printf("[tom] address: %p, password: %d\n", &tom, tom);
    printf("[bob] address: %p, password: %d\n", &bob, bob);
    printf("[amy] address: %p, password: %d\n", &amy, amy);

    // missionman
    int *missionman;   // pointer variable
    missionman = &tom; // points to toms address
    printf("\n[missionman] address: %p, password: %d\n", missionman, *missionman);

    missionman = &bob; // points to bobs address
    printf("[missionman] address: %p, password: %d\n", missionman, *missionman);

    missionman = &amy; // points to amys address
    printf("[missionman] address: %p, password: %d\n", missionman, *missionman);

    // pointer can change the value of the variable
    missionman = &tom;
    *missionman = *missionman * 3;
    printf("\n[tom] address: %p, password: %d\n", missionman, *missionman);

    missionman = &bob;
    *missionman = *missionman * 3;
    printf("[bob] address: %p, password: %d\n", missionman, *missionman);

    missionman = &amy;
    *missionman = *missionman * 3;
    printf("[amy] address: %p, password: %d\n", missionman, *missionman);

    // spy : pointer to pointer
    int *spy = missionman;
    spy = &tom;
    *spy = *spy - 2;
    printf("\n[tom] address: %p, password: %d\n", spy, *spy);

    spy = &bob;
    *spy = *spy - 2;
    printf("[bob] address: %p, password: %d\n", spy, *spy);

    spy = &amy;
    *spy = *spy - 2;
    printf("[amy] address: %p, password: %d\n", spy, *spy);

    // pointer address
    printf("\n[missonman] address: %p\n", &missionman);
    printf("[spy] address: %p\n\n", &spy);

    // array pointer
    int arr[3] = {5, 10, 15};
    int *ptr = arr;
    for (int i = 0; i < 3; i++) {
        printf("value of arr[%d] : %d\n", i, arr[i]);
        printf("value of ptr[%d] : %d\n", i, ptr[i]);
    }
    printf("\n");

    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;
    for (int i = 0; i < 3; i++) {
        printf("value of arr[%d]  : %d\n", i, arr[i]);
        printf("value of *arr[%d] : %d\n", i, *(arr + i));
        printf("value of ptr[%d]  : %d\n", i, ptr[i]);
        printf("value of *ptr[%d] : %d\n", i, *(ptr + i));
    }

    // arr[i] == *(arr + i)
    // ptr[i] == *(ptr + i)
    // arr == &arr[0] == ptr == &ptr[0] : address of the first element
    printf("\narr address: %p\n", arr);
    printf("arr[0] address: %p\n", &arr[0]);
    printf("arr value at address: %d\n", *arr);
    printf("arr[0] value at address: %d\n", *&arr[0]);

    // *&arr[0] == arr[0]
    printf("\narr[0] value: %d\n", arr[0]);
    printf("arr[0] value: %d\n", *&arr[0]);

    // swap
    int a = 10;
    int b = 20;
    printf("\n a address: %p\n", &a);
    printf(" b address: %p\n", &b);
    printf("\nbefore swap: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("after  swap: a = %d, b = %d\n", a, b);

    // swap with pointer
    printf("\nsend pointer before swap: a = %d, b = %d\n", a, b);
    swap_addr(&a, &b);
    printf("send pointer after  swap: a = %d, b = %d\n\n", a, b);

    // array
    int arr2[5] = {10, 20, 30};
    changeArray(arr2);
    for (int i = 0; i < 3; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }
    changeArray(&arr2[0]);
    for (int i = 0; i < 3; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }


    return 0;
}

void swap(int a, int b) {
    printf("\n in swap a address: %p\n", &a);
    printf(" in swap b address: %p\n", &b);
    int temp = a;
    a = b;
    b = temp;
    printf("inside swap: a = %d, b = %d\n", a, b);
}
void swap_addr(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("send pointer inside swap: a = %d, b = %d\n", *a, *b);
}

void changeArray(int *ptr) {
    ptr[2] = 50;
}