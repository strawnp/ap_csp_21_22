#include <cs50.h>
#include <stdio.h>

int get_grade();
void print_grade(int);

int main(void)
{
    // TODO: take the basic outline of the code here and refactor it
    // such that the only two lines in main() are function calls to
    // the two functions declared above
    int grade = get_int("Enter your grade: ");

    if (grade < 0 || grade > 100)
    {
        printf("Invalid grade\n");
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

// gets an integer from the user representing their grade, validates that
// it is in the range 0-100, then returns this value
int get_grade()
{
    // TODO
}

// prints the letter grade that corresponds to the integer value being
// passed into the function as an argument
void print_grade(int grade)
{
    // TODO
}