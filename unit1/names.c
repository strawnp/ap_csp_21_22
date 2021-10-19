#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = "Sherlock";

    for (int i = 0; i < strlen(name); i++)
    {
        printf("name[%i]: %c (%i)\n", i, name[i], name[i]);
    }
}