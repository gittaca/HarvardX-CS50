#include <cs50.h>
#include <stdio.h>
#include <string.h>

void PrintInitialCap(char);

int main(void)
{
    string full_name = GetString();
    int length = strlen(full_name);

    // assume 1st initial to be constantly the 1st letter given
    PrintInitialCap(full_name[0]);

    // walk along remaining string
    for (int i = 0; i < length ; i++)
    {
        if (full_name[i] == ' ')
        {
            // assume letter after space to be an initial
            PrintInitialCap(full_name[i + 1]);
        }
    }
    printf("\n");
}

// capitalise initial as shown in week 2 lecture
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
