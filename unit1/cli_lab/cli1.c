#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    printf("You entered %d argument(s).\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
}