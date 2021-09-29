#include <math.h>
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 15; i++)
    {
        printf("%i\t%.3f\n", i, sqrt(i));
    }
}