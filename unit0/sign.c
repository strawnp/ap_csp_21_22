#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Enter a number: ");

    if (x > 0)
    {
        printf("Positive\n");
        if (x % 2 == 0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
    }
    else if (x < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
}