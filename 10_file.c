#include <stdio.h>

#define MAX 10000

int main(void) {
    // fputs, fgets
    char line[MAX];
    FILE *file = fopen("/home/jaehoon/workspace/nado-c/test1.txt", "wb");
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    fputs("Hello, world!\n", file);
    fputs("Hello, world!\n", file);
    fputs("Hello, world!\n", file);

    fclose(file);

    // fgets
    FILE *file2 = fopen("/home/jaehoon/workspace/nado-c/test1.txt", "rb");
    while (fgets(line, MAX, file2) != NULL) {
        printf("%s", line);
    }
    fclose(file2);

    return 0;
}