#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    printf("\n\n === bold game === \n\n");
    int answer;
    int treatment = rand() % 4;

    int cntShowBottle = 0;
    int prevCntShowBottle = 0;

    for (int i = 1; i <= 3; i++) {
        int bottle[4] = {0, 0, 0, 0};
        do {
            cntShowBottle = rand() % 2 + 2;
        } while (cntShowBottle == prevCntShowBottle);
        prevCntShowBottle = cntShowBottle;

        int isIncluded = 0;
        printf(" > %d tried : ", i);

        for (int j = 0; j < cntShowBottle; j++) {
            int randBottle = rand() % 4;
            if (bottle[randBottle] == 0) {
                bottle[randBottle] = 1;
                if (randBottle == treatment) {
                    isIncluded = 1;
                }
            } else {
                j--;
            }
        }

        for (int k = 0; k < 4; k++) {
            if (bottle[k] == 1) {
                printf("%d ", k + 1);
            }
        }
        printf(" treatment used");

        if (isIncluded) {
            printf("  >> success\n");
        } else {
            printf("  >> fail\n");
        }

        printf("\n ... press any key to continue ...\n");
        getchar();
    }

    printf("\n\n result : ");
    scanf("%d", &answer);
    if (answer == treatment + 1) {
        printf("\n >> success\n");
    } else {
        printf("\n >> fail. answer is %d\n", treatment + 1);
    }
    return 0;
}