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

    printf("OK, thanks! The numbers are %i", numbers[0]);

    for (int i = 1; i < n - 2; i++)
    {
        printf(", %i", numbers[i]);
    }

    printf(" and %i; and their mean is %.2f.\n", numbers[n - 1], (float) sum / n);
}
