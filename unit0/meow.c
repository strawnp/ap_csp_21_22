#include <cs50.h>
#include <stdio.h>

void meow(int n);

int main(void)
{
    printf("Line 8\n");
    meow(3);
    printf("Line 10\n");
}

void meow(int n)
{
    printf("Line 15\n");
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
    printf("Line 20\n");
}