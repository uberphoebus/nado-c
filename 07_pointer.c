#include <stdio.h>

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

    return 0;
}