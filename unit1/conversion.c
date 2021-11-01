#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./conversion <numerical value>\n");
        return 1;
    }

    int arg = (int) strtol(argv[1], NULL, 10);

    printf("You typed: %d\n", arg);
}