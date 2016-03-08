#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 5;
    int numbers[n];
    int sum = 0;

    printf("Please type in %i positive integers!\n", n);

    for (int i = 0; i < n; i++)
    {
        int m;

        do
        {
            m = GetInt();
        }
        while (m < 1);

        numbers[i] = m;
        sum += numbers[i];
    }

    printf("OK, thanks! The numbers are:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%i\n", numbers[i]);
    }

    printf("And the mean is: %2f.\n", (float) sum / n);
}
