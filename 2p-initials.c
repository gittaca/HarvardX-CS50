#include <cs50.h>
#include <stdio.h>
#include <string.h>

void PrintInitialCap(char);

int main(void)
{
    string full_name = GetString();
    int length = strlen(full_name);

    PrintInitialCap(full_name[0]);

    for (int i = 0; i < length ; i++)
    {
        if (full_name[i] == " ")
        {
            PrintInitialCap(full_name[i + 1]);
        }
    }
    printf("\n");
}

void PrintInitialCap(char initial)
{
    if (initial >= 'a' && initial <= 'z')
    {
       printf("%c", initial - ('a' - 'A'));
    }
    else
    {
        printf("%c", initial);
    }
}
