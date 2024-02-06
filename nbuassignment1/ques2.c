//
// Created by adi81 on 2/6/2024.
//

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SURCHARGE_PERCENT (15.0/100.0)

typedef char *String;
typedef int Units;
typedef double Charge;

int main(void)
{
    String name;
    Units consumed_number, temp;
    String buffer = malloc(100 * sizeof(char));
    Charge m_charge = 50, f_charge = 0;

    printf("Enter name: \n");
    fgets(buffer, 100, stdin);
    name = strdup(buffer);

    do {
        printf("Enter units consumed: \n");
        scanf("%d", &consumed_number);
    } while(consumed_number < 0);


    if (consumed_number > 300)
    {
        temp = consumed_number - 300;
        f_charge += (0.90 * temp);
        consumed_number -= temp;
    }
    if (consumed_number <= 300 && consumed_number > 100)
    {
        temp = consumed_number - 100;
        f_charge += (0.80 * temp);
        consumed_number -= temp;
    }
    if (consumed_number <= 100 && consumed_number > 0)
    {
        f_charge += (0.60 * consumed_number);
    }


    f_charge += m_charge;

    if (f_charge > 300)
    {
        f_charge += (SURCHARGE_PERCENT * f_charge);
    }

    printf("\n");
    printf("Name: %s\n", name);
    printf("Price: %.2lf\n", f_charge);


    free(buffer);

    getch();
    return 0;
}
