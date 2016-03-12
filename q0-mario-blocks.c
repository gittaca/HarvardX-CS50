#include <stdio.h>

void PrintGrid(int width, int height);

int main(void) {
    PrintGrid(5, 3);
}

void PrintGrid(int width, int height) {
    int i = 0;
    do {
        int j = 0;
        do {
            printf("#");
            j++;
        } while (j < width);
        printf("\n");
        i++;
    } while (i < height);
}
