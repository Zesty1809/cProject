//
// Created by adi81 on 2/11/2024.
//


#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "Goats!";
    char t[100];

    memcpy(t, s, 7);    // Copy 7 bytes including the NUL terminator!

    printf("%s\n", t);      // "Goats!"

    return 0;
}