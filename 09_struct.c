#include <stdio.h>

struct GameInfo {
    char *name;
    int year;
    int price;
    char *company;

    struct GameInfo *friendGame; // struct pointer
};

typedef struct GameInformation {
    char *name;
    int year;
    int price;
    char *company;

    struct GameInformation *friendGame; // struct pointer
} GAME_INFO;

int main(void) {
    // struct
    struct GameInfo gameInfo1;
    gameInfo1.name = "StarCraft";
    gameInfo1.year = 1998;
    gameInfo1.price = 30000;
    gameInfo1.company = "Blizzard";

    printf("-- Game Info --\n");
    printf("Name   : %s\n", gameInfo1.name);
    printf("Year   : %d\n", gameInfo1.year);
    printf("Price  : %d\n", gameInfo1.price);
    printf("Company: %s\n", gameInfo1.company);

    // struct array
    struct GameInfo gameInfo2 = {"Diablo", 1996, 40000, "Blizzard"};
    printf("-- Game Info --\n");
    printf("Name   : %s\n", gameInfo2.name);
    printf("Year   : %d\n", gameInfo2.year);
    printf("Price  : %d\n", gameInfo2.price);
    printf("Company: %s\n", gameInfo2.company);

    // struct pointer
    struct GameInfo *gamePtr;
    gamePtr = &gameInfo1;
    printf("-- Game Info --\n");
    printf("Name   : %s\n", (*gamePtr).name);
    printf("Year   : %d\n", (*gamePtr).year);
    printf("Price  : %d\n", (*gamePtr).price);
    printf("Company: %s\n", (*gamePtr).company);
    printf("Name   : %s\n", gamePtr->name);
    printf("Year   : %d\n", gamePtr->year);
    printf("Price  : %d\n", gamePtr->price);
    printf("Company: %s\n", gamePtr->company);

    // struct in struct
    gameInfo1.friendGame = &gameInfo2;
    printf("-- Game Info --\n");
    printf("Name   : %s\n", gameInfo1.friendGame->name);
    printf("Year   : %d\n", gameInfo1.friendGame->year);
    printf("Price  : %d\n", gameInfo1.friendGame->price);
    printf("Company: %s\n", gameInfo1.friendGame->company);

    // typedef
    GAME_INFO game2;
    game2.name = "Diablo";
    game2.year = 1996;
    game2.price = 40000;
    game2.company = "Blizzard";

    return 0;
}