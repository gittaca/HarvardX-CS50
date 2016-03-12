#include <stdio.h>

void PrintGrid(int width, int height);

int main(void) {
    PrintGrid(5, 3);
}

void PrintGrid(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("#");
        }
        printf("\n");
    }
}
