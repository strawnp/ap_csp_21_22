#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./cli0 <name>\n");
        return 1;
    }

    printf("hello, %s!\n", argv[1]);
}