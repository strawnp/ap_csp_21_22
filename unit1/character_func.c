#include <cs50.h>
#include <stdio.h>

int is_vowel(int);
int is_alpha(int);
int is_upper(int);
int is_lower(int);

int main(void)
{
    char letter = get_char("Enter a letter: ");

    printf("%i\n", letter);

    if (!is_alpha(letter))
    {
        printf("Non-alphabetical\n");
    }
    else if (is_vowel(letter))
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }

    if (is_upper(letter))
    {
        printf("Uppercase\n");
        printf("%c\n", letter + 32);
    }
    else if (is_lower(letter))
    {
        printf("Lowercase\n");
        printf("%c\n", letter - 32);
    }
    else
    {
        printf("Non-alphabetical\n");
    }
}

int is_vowel(int letter)
{
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' || letter == 'Y')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_alpha(int letter)
{
    if (letter < 65 || (letter > 90 && letter < 97) || letter > 122)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int is_upper(int letter)
{
    if (letter >= 65 && letter <= 90)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_lower(int letter)
{
    if (letter >= 97 && letter <= 122)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}