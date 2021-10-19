#include <stdio.h>

int main(void)
{
    int score1 = 72;
    char letter1 = 'c';
    int score2 = 73;
    char letter2 = 'f';
    int score3 = 33;
    char letter3 = '$';

    // print variables as ints
    printf("%i\n", score1);
    printf("%i\n", score2);
    printf("%i\n", score3);
    printf("%i\n", letter1);
    printf("%i\n", letter2);
    printf("%i\n", letter3);

    // print variables as chars
    printf("%c\n", score1);
    printf("%c\n", score2);
    printf("%c\n", score3);
    printf("%c\n", letter1);
    printf("%c\n", letter2);
    printf("%c\n", letter3);

    // print memory addresses of variables in the order they were declared
    printf("%p\n", &score1);
    printf("%p\n", &letter1);
    printf("%p\n", &score2);
    printf("%p\n", &letter2);
    printf("%p\n", &score3);
    printf("%p\n", &letter3);

}