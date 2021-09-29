#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Enter a number: ");
    
    while (num > 0)
    {
        printf("%i", num % 10);
        num /= 10;
    }
    printf("\n");
}