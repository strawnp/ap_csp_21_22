#include <cs50.h>
#include <stdio.h>

#define NUM_GRADES 3

float get_grade(void);

int main(void)
{
    float scores[NUM_GRADES];
    float total = 0;

    for (int i = 0; i < NUM_GRADES; i++)
    {
        scores[i] = get_grade();
        total += scores[i];
    }

    printf("Grade: %.1f\n", total);
    printf("Average: %.1f\n", total / NUM_GRADES);
}

float get_grade(void)
{
    float grade;
    do
    {
        grade = get_float("Enter your score: ");
    }
    while (grade < 0) || grade > 5;
    return grade;
}