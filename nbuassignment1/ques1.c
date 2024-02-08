//
// Created by adi81 on 2/7/2024.
//

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *str1, *str2;
    char *buffer;

    int i = 0, j = 0;


    printf("Enter string1: \n");
    fgets(buffer, sizeof(buffer), stdin);
    str1 = strdup(buffer);
    printf("\nEnter string2: \n");
    fgets(buffer, sizeof(buffer), stdin);
    str2 = strdup(buffer);

    while (str1[i] != '\0')
    {
        ++s1;
        i++;
    }

    while (str2[j] != '\0')
    {
        *s1 = *s2;
        ++s1;
        ++s2;
        j++;
    }

    printf("After concatenation: %s", str1);


    free(str1);
    free(str2);

    getch();
    return 0;
}