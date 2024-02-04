//
// Created by adi81 on 2/4/2024.
//

#include <stdio.h>

int main(void)
{
    int amount;
    int bills20, bills10, bills5, bills1;
    bills20 = bills10 = bills5 = bills1 = 0;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    printf("");

    if (amount >= 20)
    {
        bills20 = amount / 20;
        amount = amount % 20;
    }

    if (amount >= 10)
    {
        bills10 = amount / 10;
        amount = amount % 10;
    }

    if (amount >= 5)
    {
        bills5 = amount / 5;
        amount = amount % 5;
    }

    if (amount >= 1)
    {
        bills1 = amount / 1;
        amount = amount % 1;
    }

    printf("$20 bills: %d\n", bills20);
    printf("$10 bills: %d\n", bills10);
    printf("$5 bills: %d\n", bills5);
    printf("$1 bills: %d\n", bills1);
}