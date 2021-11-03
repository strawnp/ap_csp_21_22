#include <cs50.h>
#include <stdio.h>

int gcd(int, int);

int main(void)
{
    int x = get_int("Enter a number: ");
    int y = get_int("Enter another number: ");

    // TODO: take the code from lines 13-20 and turn it into a gcd function
    // then replace the lines below with the appropriate function call
    int temp;

    while (y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }

    printf("The greatest common divisor is %d.\n", x);
}

// accepts two integers, and uses the Euclidean algorithm to return the
// greatest common divisor of the two inputs
int gcd(int x, int y)
{
    // TODO
}