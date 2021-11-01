#include <cs50.h>
#include <stdio.h>
#include <string.h>

void examine_string(string);

int main(int argc, string argv[])
{
    if (argc == 1)
    {
        printf("Please provide additional command-line arguments.\n");
        return 1;
    }

    printf("Providing analysis of %d command-line arguments...\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("Providing analysis of argv[%d]...\n", i);
        examine_string(argv[i]);
    }
}

void examine_string(string arg)
{
    for (int i = 0; i < strlen(arg); i++)
    {
        printf("%c (%d)\n", arg[i], arg[i]);
    }
    printf("\n");
}