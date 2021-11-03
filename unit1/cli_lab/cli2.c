#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./cli2 <temp>\n");
        return 1;
    }

    float c = (float) strtod(argv[1], NULL);

    printf("F: %.1f\n", c * 9 / 5 + 32);
}