#include <stdio.h>
#include <string.h>

/* Accepts any number of command line arguments,
 * prints them in a numbered line,
 * and spells them out character by character.
 */

int main(int argc, char* argv[])
{
    int i = 0; // in for-loop: initialisation

    while (i < argc) // in for-loop: condition, that's checked
    {
        printf("CLA no. %i (index: %i) is \'%s\' and is spelled:", i + 1, i, argv[i]);

        for (int j = 0; j < strlen(argv[i]); j++)
        //   init.      condition            update
        {
            printf(" %c", argv[i][j]);
        }

        printf(".\n");
        i++; // in for-loop: update
    }
}
