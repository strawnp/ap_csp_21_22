#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Multiples of: ");

    // approach #1: brute force
    for (int i = 1; i <= 100; i++)
    {
        if (i % num == 0)
        {
            printf("%i\n", i);
        }
    }

    // approach #2: increment by num
    for (int i = num; i <= 100; i += num)
    {
        printf("%i\n", i);
    }
}