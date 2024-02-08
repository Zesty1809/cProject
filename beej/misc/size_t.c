//
// Created by adi81 on 2/8/2024.
//

#include <stdio.h>

int main(void)
{
    int a = 999;
    int *p;
    int x[12];

    printf("%zu\n", sizeof a);
    printf("%zu\n", sizeof(2 + 7));
    printf("%zu\n", sizeof 3.14);

    printf("%zu\n", sizeof(p));
    printf("%zu\n", sizeof(*p));

    printf("%zu", sizeof x / sizeof (int));

    return 0;
}