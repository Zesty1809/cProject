//
// Created by adi81 on 2/5/2024.
//

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char *String;

typedef struct{
    int id;
    String name;
    int age;
    String designation;
    double salary;
} Employee;


int main(void)
{
    Employee employee[5];
    char c;

    for (int i = 0; i < 5; i++)
    {
        printf("Employee %d id: \n", i+1);
        scanf("%d", &employee[i].id);


        while ((c = getchar()) != '\n' && c != EOF);

        char buffer[100];
        printf("Employee %d name: \n", i+1);
        fgets(buffer, sizeof(buffer), stdin);
        employee[i].name = strdup(buffer);

        printf("Employee %d age: \n", i+1);
        scanf("%d", &employee[i].age);


        while ((c = getchar()) != '\n' && c != EOF);

        printf("Employee %d designation: \n", i+1);
        fgets(buffer, sizeof(buffer), stdin);
        employee[i].designation = strdup(buffer);

        printf("Employee %d salary: \n", i+1);
        scanf("%lf", &employee[i].salary);

        printf("\n");
    }


    for (int i = 0; i < 5; i++)
    {
        printf("Employee %d id: %d\n", i+1, employee[i].id);
        printf("Employee %d name: %s\n", i+1, employee[i].name);
        printf("Employee %d age: %d\n", i+1, employee[i].age);
        printf("Employee %d designation: %s\n", i+1, employee[i].designation);
        printf("Employee %d salary: %.2lf\n", i+1, employee[i].salary);

        printf("\n");
    }

    for (int i = 0; i < 1; i++)
    {
        free(employee[i].name);
        free(employee[i].designation);
    }

    getch();
    return 0;
}