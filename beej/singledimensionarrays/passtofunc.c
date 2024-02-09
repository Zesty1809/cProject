//
// Created by adi81 on 2/8/2024.
//

#include <stdio.h>

// Passing as a pointer to the first element
void times2(int *a, int len);

// Same thing, but using the array notation
void times3(int a[], int len);

// Same thing, but using array notation with size
void times4(int a[5], int len);


int main(void)
{
    int x[5] = {11, 22, 33, 44, 55};

    times2(x, 5);
    times3(x, 5);
    times4(x, 5);

    return 0;
}

void times2(int *a, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", a[i] * 2);
    }
}


void times3(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", a[i] * 3);
    }
}


void times4(int a[5], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", a[i] * 4);
    }
}