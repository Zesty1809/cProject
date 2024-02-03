//
// Created by adi81 on 2/3/2024.
//

#include <stdio.h>
#define SCALING_FACTOR (4.0f/3.0f)
#define PI 3.14159f

int main(void)
{
    float radius, volume;

    printf("Enter radius of the sphere: ");
    scanf("%f", &radius);

    volume = SCALING_FACTOR * PI * (radius * radius * radius);
    printf("Volume of sphere: %.2f", volume);

    return 0;
}