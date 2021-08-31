#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("Enter your name: ");
    int age = get_int("Enter your age: ");

    printf("Hello, %s! On your next birthday, you will be %i years old!\n", name, age + 1);
}