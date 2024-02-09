//
// Created by adi81 on 2/9/2024.
//

#include <stdio.h>

void print_2D_array(int a[][3]);


int main(void)
{
    int x[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
    };

    print_2D_array(x);

    return 0;
}


void print_2D_array(int a[][3])
{
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%d\n", a[row][col]);
        }
        printf("\n");
    }
}