//
// Created by adi81 on 2/10/2024.
//

#include <stdio.h>

int main(void)
{
    FILE *fp;
    int c;

    fp = fopen("hello.txt", "r");

    while((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }

    fclose(fp);
    return 0;
}