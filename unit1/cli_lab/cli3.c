#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./cli3 <grade>");
        return 1;
    }

    char* endPtr;
    int grade = (int) strtol(argv[1], &endPtr, 10);

    printf("%s\n", endPtr);
    if (*endPtr != '\0' && !isspace(*endPtr))
    {
        printf("Non-numeric characters entered\n");
        return 2;
    }

    if (grade > 100 || grade < 0)
    {
        printf("Invalid grade\n");
        return 3;
    }

    if (grade >= 90)
    {
        printf("A\n");
    }
    else if (grade >= 80)
    {
        printf("B\n");
    }
    else if (grade >= 70)
    {
        printf("C\n");
    }
    else if (grade >= 60)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
}