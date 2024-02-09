//
// Created by adi81 on 2/9/2024.
//

#include <stdio.h>

void double_array(int *a, int len);


int main(void)
{
    int x[5] = {1, 2, 3, 4, 5};

    double_array(x, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", x[i]);
    }

    return 0;
}


void double_array(int *a, int len)
{
    for (int i = 0; i < len; i++)
    {
        a[i] *= 2;
    }
}