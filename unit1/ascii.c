#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("First name: ");
    int name_score = 0;

    for (int i = 0; i < strlen(name); i++)
    {
        printf("%i", name[i]);

        if (i != strlen(name) - 1)
        {
            printf("-");
        }

        name_score += name[i];
    }

    printf("\n");

    printf("%i\n", name_score);
}