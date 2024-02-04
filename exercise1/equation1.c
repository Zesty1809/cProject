//
// Created by adi81 on 2/4/2024.
//

#include <stdio.h>

int main(void)
{
    int x, result;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Horne's Rule
    result = (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    printf("Answer: %d\n", result);

    return 0;
}