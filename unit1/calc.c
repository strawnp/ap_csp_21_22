#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

float find_mod(float, float);

int main(int argc, string argv[])
{
    if (argc != 4)
    {
        printf("Usage: ./calc <number> <op> <number>\n");
        return 1;
    }

    float x = atof(argv[1]);
    // float x = (float) strtod(argv[1], NULL);

    float y = atof(argv[3]);
    // float y = (float) strtod(argv[1], NULL);

    char op = argv[2][0];

    if (op == '+')
    {
        printf("%f\n", x + y);
    }
    else if (op == '-')
    {
        printf("%f\n", x - y);
    }
    else if (op == 'x')
    {
        printf("%f\n", x * y);
    }
    else if (op == '/')
    {
        printf("%f\n", x / y);
    }
    else if (op == '%')
    {
        printf("%f\n", find_mod(x, y));
    }
    else
    {
        printf("Invalid operator.\n");
        return 1;
    }
}

float find_mod(float a, float b)
{
    int q = (int) (a / b);
    float rem = a - (b * q);
    return rem;
}