//
// Created by adi81 on 2/9/2024.
//


#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "Hello, world!";
    char t[100];        // Each character is one byte

    // This makes a copy of the string
    strcpy(t, s);

    // Printing string s
    printf("%s\n", s);

    // Printing string t
    printf("%s\n", t);

    return 0;
}