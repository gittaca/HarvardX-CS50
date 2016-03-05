#include <cs50.h> // `string` instead of `char*` for argv[]
#include <stdio.h>
#include <string.h>

/* Accepts any number of command line arguments,
 * prints them in a numbered line,
 * and spells them out character by character.
 *
 * equivalent to https://study.cs50.net/argv#echo
 * and https://study.cs50.net/argv#num_characters
 */

int main(int argc, string argv[])
{
    int i = 0; // in for-loop: initialisation
    int n = 0; // number of characters in CLAs

    while (i < argc) // in for-loop: condition, that's checked
    {
        printf("CLA at index %i is \'%s\',\n which is spelled:", i, argv[i]);

        for (int j = 0; j < strlen(argv[i]); j++)
        //   init.      condition            update
        {
            printf(" %c", argv[i][j]);
        }

        printf(",\n and contains: %i characters.\n", (int) strlen(argv[i]));
        i++; // in for-loop: update
    }

    // ignore program name in CLA character count
    for (i = 1; i < argc; i++)
    {
      n = n + strlen(argv[i]);
    }

    printf("In sum, the command line arguments contain %i characters.\n", n);
}
