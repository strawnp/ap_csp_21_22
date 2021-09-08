#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int main(void)
{
    string s = get_string("Do you agree? (yes/no) ");

    if (strcasecmp(s, "yes") == 0)
    {
        printf("Agreed.\n");
    }
    else if (strcasecmp(s, "no") == 0)
    {
        printf("Not agreed.\n");
    }
}