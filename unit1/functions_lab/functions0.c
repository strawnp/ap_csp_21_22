#include <cs50.h>
#include <stdio.h>

float getTemp();
float convertToFahr(float);
void displayResults(float, float);

int main(void)
{
    float tempC = getTemp();
    float tempF = convertToFahr(tempC);
    displayResults(tempC, tempF);
}

float getTemp()
{
    float tempC = get_float("Enter temp in Celsius: ");
    return tempC;
}

float convertToFahr(float c)
{
    return c * 9 / 5 + 32;
}

void displayResults(float c, float f)
{
    printf("%.2f C = %.2f F\n", c, f);
}