#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

float get_grade(int);

int main(void)
{
    int num = get_int("Grades needed: ");

    float* scores = malloc(sizeof(float) * num);
    float total = 0;

    for (int i = 0; i < num; i++)
    {
        scores[i] = get_grade(i);
        total += scores[i];
    }

    printf("Grade: %.1f\n", total);
    printf("Average: %.1f\n", total / num);

    free(scores);
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