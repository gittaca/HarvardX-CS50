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

        n_chars_in_arg = strlen(argv[i])

        for (int j = 0; j < n_chars_in_arg; j++)
        //   init.      condition            update
        {
            printf(" %c", argv[i][j]);
        }

        printf(",\n and contains: %i characters.\n", (int) n_chars_in_arg);
        i++; // in for-loop: update
    }

    // ignore program name in CLA character count
    n = strlen(argv[1])

    for (i = 2; i < argc; i++)
    {
      n++;
    }

    printf("In sum, the command line arguments contain %i characters.\n", n);
}
