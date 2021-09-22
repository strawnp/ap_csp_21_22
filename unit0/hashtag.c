#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: use a loop to print 4 hashtags on one line
    for (int i = 0; i < 4; i++)
    {
        printf("#");
    }
    printf("\n\n");

    // TODO: use a loop to print 4 hashtags on one line 4 times
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}