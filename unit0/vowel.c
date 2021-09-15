#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char letter = get_char("Enter a letter: ");

    if (letter < 'a' || letter > 'z')
    {
        printf("Nonsense\n");
    }
    else if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
}