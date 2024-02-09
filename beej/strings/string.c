//
// Created by adi81 on 2/9/2024.
//

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = "Hello";

    printf("The string is %zu bytes long. \n", strlen(s));

    return 0;
}

int my_strlen(char *s)
{
    int count = 0;

    while (s[count] != '\0')
    {
        count++;
    }

    return count;
}