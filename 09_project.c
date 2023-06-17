#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char *name;
    int age;
    char *character;
    int level;
} CAT;

int collection[5] = {0, 0, 0, 0, 0};
CAT cats[5];

void initCats();
void printCat(int selected);
int checkCollection();

int main(void) {
    srand(time(NULL));

    initCats();
    while (1) {
        printf("Which cat do you want to meet? (exit: 0) ");
        getchar();

        int selected = rand() % 5;
        printCat(selected);
        collection[selected] = 1;

        int collectAll = checkCollection();
        if (collectAll) {
            break;
        }
    }

    return 0;
}

void initCats() {
    cats[0].name = "Nabi";
    cats[0].age = 5;
    cats[0].character = "Cute";
    cats[0].level = 1;

    cats[1].name = "Nao";
    cats[1].age = 3;
    cats[1].character = "Active";
    cats[1].level = 1;

    cats[2].name = "Nabi";
    cats[2].age = 5;
    cats[2].character = "Cute";
    cats[2].level = 1;

    cats[3].name = "Nabi";
    cats[3].age = 5;
    cats[3].character = "Cute";
    cats[3].level = 1;

    cats[4].name = "Nabi";
    cats[4].age = 5;
    cats[4].character = "Cute";
    cats[4].level = 1;
}

void printCat(int selected) {
    printf("Name     : %s\n", cats[selected].name);
    printf("Age      : %d\n", cats[selected].age);
    printf("Character: %s\n", cats[selected].character);
    printf("Level    : ");
    for (int i = 0; i < cats[selected].level; i++) {
        printf("%s", "★");
    }
    printf("\n\n");
}

int checkCollection() {
    int collectAll = 1;
    printf("\n\n === Collection ===\n\n");
    for (int i = 0; i < 5; i++) {
        if (collection[i] == 0) {
            printf("%10s", "(Empty)");
            collectAll = 0;
        } else {
            printf("%10s", cats[i].name);
        }
    }
    printf("\n===================\n\n");

    if (collectAll) {
        printf("Congratulation! You've collected all cats!\n");
    }

    return collectAll;
}
