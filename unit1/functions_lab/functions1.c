#include <cs50.h>
#include <stdio.h>

int getSelection();
float getTempInC();
float getTempInF();
float convertToFahr(float);
float convertToCels(float);
void displayResultsToF(float, float);
void displayResultsToC(float, float);

int main(void)
{
    int selection = getSelection();

    if (selection == 1)
    {
        float tempC = getTempInC();
        float tempF = convertToFahr(tempC);
        displayResultsToF(tempC, tempF);
    }
    else
    {
        float tempF = getTempInF();
        float tempC = convertToCels(tempF);
        displayResultsToC(tempF, tempC);
    }

}

int getSelection()
{
    int choice;

    do
    {
        choice = get_int("Type 1 to convert C to F or 2 to convert F to C: ");
    }
    while (choice < 1 || choice > 2);

    return choice;
}

float getTempInC()
{
    float tempC = get_float("Enter temp in Celsius: ");
    return tempC;
}

float getTempInF()
{
    float tempF = get_float("Enter temp in Fahrenheit: ");
    return tempF;
}

float convertToFahr(float c)
{
    return c * 9 / 5 + 32;
}

float convertToCels(float f)
{
    return (f - 32) * 5 / 9;
}

void displayResultsToF(float c, float f)
{
    printf("%.2f C = %.2f F\n", c, f);
}

void displayResultsToC(float f, float c)
{
    printf("%.2f F = %.2f C\n", f, c);
}