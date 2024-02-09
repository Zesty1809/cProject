//
// Created by adi81 on 2/8/2024.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r;

    do {
        r = rand() % 100;
        printf("%d\n", r);
    } while (r != 37);      // Repeat until r becomes 37

    return 0;
}