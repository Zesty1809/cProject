//
// Created by adi81 on 2/7/2024.
//

// Getting user input using gets()

#include <stdio.h>

int main(void)
{
    int a;

    printf("Enter a number: ");
    while (scanf("%d", &a) != 1)
    {
        printf("Enter a number: ");
    }
    printf("You entered %d.\n", a);

    while (getchar() != EOF)
    {}

    return 0;
}