//
// Created by adi81 on 2/3/2024.
//

#include <stdio.h>
#define INCHES_PER_POUND 166

#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-err34-c"
int main(void)
{
    int height, length, width, volume, weight;
    printf("Enter height of the box: \n");
    scanf("%d", &height);
    printf("Enter length of the box: \n");
    scanf("%d", &length);
    printf("Enter width of the box: \n");
    scanf("%d", &width);
    volume = length * width * height;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
#pragma clang diagnostic pop