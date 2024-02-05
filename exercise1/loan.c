//
// Created by adi81 on 2/5/2024.
//

#include <conio.h>
#include <stdio.h>
#define MONTH_FACTOR (1.0/12.0)

typedef double Dollar;
typedef double Interest;

int main(void)
{
    Dollar loan_amount, monthly_payment;
    Interest rate;

    printf("Enter amount of loan: ");
    scanf("%lf", &loan_amount);

    printf("Enter interest amount: ");
    scanf("%lf", &rate);

    printf("Enter monthly payment: ");
    scanf("%lf", &monthly_payment);


    rate = rate / 100;


    loan_amount = loan_amount + rate * MONTH_FACTOR * loan_amount - monthly_payment;
    printf("Balance remaining after first payment: %.2lf\n", loan_amount);

    loan_amount = loan_amount + rate * MONTH_FACTOR * loan_amount - monthly_payment;
    printf("Balance remaining after second payment: %.2lf\n", loan_amount);

    loan_amount = loan_amount + rate * MONTH_FACTOR * loan_amount - monthly_payment;
    printf("Balance remaining after third payment: %.2lf\n", loan_amount);

    getch();
    return 0;
}