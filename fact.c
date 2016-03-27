#include <cs50.h>
#include <stdio.h>

int fact(int m) {
    // recurse, till smallest logical factor or result
    int result = 1;
    if (m <= 1)
        return result;
    else
        return result = m * fact(m - 1);
}

int main(int argc, char* argv[]) {
    int n;

    // ensure proper input & continue gracefully if it was
    if (argc != 2) {
        printf("Usage: fact n (where n is a positive integer > 1). Please type one now: ");
        n = GetInt();
    }
    else
        n = atoi(argv[1]);

    int product = fact(n);
    printf("The factorial (n!) of %i is %i.\n", n, product);
}
