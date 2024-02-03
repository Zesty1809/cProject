//
// Created by adi81 on 2/3/2024.
//

#include <stdio.h>
#define TAX_SCALING (5.0f/100.0f)

int main(void)
{
    float amount, tax;

    printf("Enter an amount (dollars-cents): $");
    scanf("%f", &amount);

    tax = (TAX_SCALING * amount) + amount;

    printf("With tax added: $%.2f\n", tax);
    return 0;
}