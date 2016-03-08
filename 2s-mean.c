#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 5;
    int numbers[n];

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
    }

    printf("OK, thanks! The numbers are:\n");
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        printf("%i\n", numbers[i]);
        sum += numbers[i];
    }

    printf("And the mean is: %2f.\n", (float) sum / n);
}
