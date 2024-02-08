//
// Created by adi81 on 2/8/2024.
//

#include <stdio.h>

int main(void)
{
    int a = 999;

    printf("%zu\n", sizeof a);
    printf("%zu\n", sizeof(2 + 7));
    printf("%zu\n", sizeof 3.14);

    getchar();
    return 0;
}