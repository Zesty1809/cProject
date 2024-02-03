//
// Created by adi81 on 2/3/2024.
//

#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALING_FACTOR (5.0f/9.0f)

int main(void)
{
    float celsius, fahrenheit;
    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - FREEZING_PT) * SCALING_FACTOR;
    printf("Celsius equivalent: %.1f", celsius);

    return 0;
}