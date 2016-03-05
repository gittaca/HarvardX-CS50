#include <stdio.h>
#include <string.h>

/* Accepts any number of command line arguments,
 * prints them in a numbered line,
 * and spells them out character by character.
 */

int main(int argc, char* argv[])
{
    for (i = 0; i < argc; i++)
    {
        printf("CLA no. %i is \'%s\' and is spelled:", i + 1, argv[i]);

        for (j = 0; j < strlen(argv[i]); j++)
        {
            printf(" %c", argv[i][j]);
        }
        printf(".\n");
    }
}
