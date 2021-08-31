#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i + %i = %i\n", x, y, x + y);
    printf("%i - %i = %i\n", x, y, x - y);
    printf("%i * %i = %i\n", x, y, x * y);
    printf("%i / %i = %i\n", x, y, x / y);
    printf("%i %% %i = %i\n", x, y, x % y);
    printf("%i / %i = %i R %i\n", x, y, x / y, x % y);
    printf("%i^%i = %f\n", x, y, pow(x, y));
}