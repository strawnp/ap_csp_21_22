#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int grade = get_int("Enter your grade: ");

    if (grade < 0 || grade > 100)
    {
        printf("Nonsense\n");
    }
    else if (grade >= 90)
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