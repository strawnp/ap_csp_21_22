#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num;
    do
    {
        num = get_int("Enter the size of the square: ");
    }
    while (num < 1 || num > 23);

    // outer loop: print rows
    for (int i = 0; i < num; i++)
    {
        // inner loop: print columns
        for (int j = 0; j < num; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}