#include <cs50.h> // `string` instead of `char*` for argv[]
#include <stdio.h>
#include <string.h>

/* Accepts any numer of command line arguments,
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

        int nj = strlen(argv[i]);
        for (int j = 0; j < nj; j++)
        //   init.      cond.   update
            printf(" %c", argv[i][j]);

        printf(",\n and contains: %i characters.\n", nj);
        i++; // in for-loop: update
        n += nj;
    }

    printf("In sum, the command line arguments contain %i characters.\n", n);
}
