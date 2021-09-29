#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Enter a number: ");
    int sum = 0;

    while (num > 0)
    {
        // sum = sum + num % 10;
        sum += num % 10;
        num /= 10;
    }
    printf("%i\n", sum);
}