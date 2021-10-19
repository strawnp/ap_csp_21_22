#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char class[] = "CS50";
    char letters[3] = "OSU";
    string game = "FIFA";
    char school[3];
    school[0] = 'J';
    school[1] = 'H';
    school[2] = 'S';
    char word[] = { 'h', 'e', 'l', 'l', 'o', '\0' };

    printf("%s\n", class);
    printf("%s\n", letters);
    printf("%s\n", game);
    printf("%s\n", school);
    printf("%s\n", word);
}