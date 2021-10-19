#include <cs50.h>
#include <stdio.h>

#define NUM_GRADES 3

float get_grade(int);

int main(void)
{
    float scores[NUM_GRADES];
    float total = 0;

    for (int i = 0; i < NUM_GRADES; i++)
    {
        scores[i] = get_grade(i);
        total += scores[i];
    }

    printf("Grade: %.1f\n", total);
    printf("Average: %.1f\n", total / NUM_GRADES);
}

float get_grade(int num)
{
    float grade;
    do
    {
        grade = get_float("Enter score #%i: ", num);
    }
    while (grade < 0 || grade > 5);
    return grade;
}