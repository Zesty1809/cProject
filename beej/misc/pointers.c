//
// Created by adi81 on 2/8/2024.
//

void increment(int *p);

#include <stdio.h>

int main(void)
{
    int i = 10;

    printf("i is %d\n", i);

    increment(&i);

    printf("i is %d\n", i);
}

void increment(int *p)
{
    *p = *p + 1;
}