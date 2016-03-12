#include <stdio.h>

void PrintGrid(int width, int height);

int main(void) {
    PrintGrid(5, 3);
}

void PrintGrid(int width, int height) {
    int i = 0;
    while (i < height) {
        int j = 0;
        while (j < width) {
            printf("#");
            j++;
        }
        printf("\n");
        i++;
    }
}
