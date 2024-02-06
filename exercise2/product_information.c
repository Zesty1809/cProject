//
// Created by adi81 on 2/6/2024.
//

#include <conio.h>
#include <stdio.h>

int main(void)
{
    int item_number, month, day, year;
    double unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: ");
    scanf("%lf", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%-d\t\t$%6.2lf\t\t%.2d/%.2d/%.4d", item_number, unit_price, month, day, year);


    getch();
    return 0;
}