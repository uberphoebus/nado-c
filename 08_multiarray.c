#include <stdio.h>

int main(void) {
    // 2D array
    int i;
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 0}
    };
    int arr3[4][2] = {
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 8}
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("2d array: (%d, %d) %d\n", i, j, arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}