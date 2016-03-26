/**
 * sigma-1.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Adds the numbers 1 through n.
 *
 * Demonstrates recursion.
 */

#include <cs50.h>
#include <stdio.h>

// prototype
int sigma(int);

int main(int argc, char* argv[])
{
    // ensure proper usage & ask user for a positive int
    if (argc != 2 || argv[1] < 1)
    {
        printf("Usage: sigma n (Where n is an integer > 0.)\n");
        return 1;
    }

    int n = atoi(argv[1]);

    // compute sum of 1 through n
    int answer = sigma(n);

    // report answer
    printf("%i\n", answer);
}

/**
 * Returns sum of 1 through m; returns 0 if m is not positive.
 */
int sigma(int m)
{
    // return sum of 1 through m
    if (m <= 0) // base case
    {
        return 0;
    }
    else // recursive case
    {
        return (m + sigma(m - 1));
    }
}
