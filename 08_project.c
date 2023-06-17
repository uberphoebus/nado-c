#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrayAnimal[4][5];
int checkAnimal[4][5];
char *strAnimal[10];
void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuestion();
int foundAllAnimals();

int main(void) {
    srand(time(NULL));
    initAnimalArray();
    initAnimalName();

    shuffleAnimal();

    int failCount = 0;

    while (1) {
        int select1 = 0;
        int select2 = 0;

        printAnimals();
        printQuestion();
        printf("뒤집을 카드를 2개 고르세요: ");
        scanf("%d %d", &select1, &select2);

        if (select1 == select2) {
            continue;
        }

        int firstSelect_x = conv_pos_x(select1);
        int firstSelect_y = conv_pos_y(select1);
        int secondSelect_x = conv_pos_x(select2);
        int secondSelect_y = conv_pos_y(select2);

        if ((checkAnimal[firstSelect_x][firstSelect_y] == 0 &&
             checkAnimal[secondSelect_x][secondSelect_y] == 0) &&
            (arrayAnimal[firstSelect_x][firstSelect_y] ==
             arrayAnimal[secondSelect_x][secondSelect_y])) {
            printf("\n\n빙고! : %s 발견\n\n",
                   strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            checkAnimal[firstSelect_x][firstSelect_y] = 1;
            checkAnimal[secondSelect_x][secondSelect_y] = 1;
        } else {
            printf("\n\n땡!! (틀렸거나, 이미 뒤집힌 카드입니다)\n");
            printf("%d : %s\n", select1,
                   strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            printf("%d : %s\n", select2,
                   strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
            printf("\n\n");
            failCount++;
        }

        if (foundAllAnimals() == 1) {
            printf("\n\n 축하합니다! 모든 동물을 다 찾았네요\n");
            printf("지금까지 총 %d 번 실수하였습니다.\n", failCount);
            break;
        }
    }
}

void initAnimalArray() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            arrayAnimal[i][j] = -1;
        }
    }
}

void initAnimalName() {
    strAnimal[0] = "원숭이";
    strAnimal[1] = "하마";
    strAnimal[2] = "강아지";
    strAnimal[3] = "고양이";
    strAnimal[4] = "돼지";
    strAnimal[5] = "코끼리";
    strAnimal[6] = "기린";
    strAnimal[7] = "낙타";
    strAnimal[8] = "타조";
    strAnimal[9] = "호랑이";
}

void shuffleAnimal() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 2; j++) {
            int pos = getEmptyPosition();
            int x = conv_pos_x(pos);
            int y = conv_pos_y(pos);

            arrayAnimal[x][y] = i;
        }
    }
}

int getEmptyPosition() {
    while (1) {
        int randPos = rand() % 20;
        int x = conv_pos_x(randPos);
        int y = conv_pos_y(randPos);

        if (arrayAnimal[x][y] == -1) {
            return randPos;
        }
    }
    return 0;
}

int conv_pos_x(int x) { return x / 5; }

int conv_pos_y(int y) { return y % 5; }

void printAnimals() {
    printf("\n=======================================\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%8s  ", strAnimal[arrayAnimal[i][j]]);
        }
        printf("\n");
    }
    printf("\n=======================================\n");
}

void printQuestion() {
    printf("\n\nQuestion\n");
    int seq = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (checkAnimal[i][j] != 0) {
                printf("%8s", strAnimal[arrayAnimal[i][j]]);
            } else {
                printf("%8d", seq);
            }
            seq++;
        }
        printf("\n");
    }
}

int foundAllAnimals() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; i++) {
            if (checkAnimal[i][j] == 0) {
                return 0;
            }
        }
    }
    return 1;
}
