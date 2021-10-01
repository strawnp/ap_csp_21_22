#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num;
    do
    {
        num = get_int("Enter an even number: ");
    }
    while (num % 2 != 0);

    printf("Thanks for following directions.\n");
}