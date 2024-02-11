//
// Created by adi81 on 2/11/2024.
//

#include <stdio.h>

int my_strlen(char *s);

int main(void)
{
    printf("%d\n", my_strlen("Hello, world!"));
}

int my_strlen(char *s)
{
    // Start scanning from the beginning of the string
    char *p = s;

    // Scan until we find the NUL character
    while (*p != '\0')
    {
        p++;
    }

    // Return the difference in pointers
    return p - s;
}