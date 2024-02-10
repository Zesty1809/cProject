//
// Created by adi81 on 2/10/2024.
//


#include <stdio.h>

int main(void)
{
    FILE *fp;
    char name[1024];
    float length;
    int mass;

    fp = fopen("whales.txt", "r");

    while(fscanf(fp, "%s %f %d", name, &length, &mass) != EOF)
    {
        printf("%s whale, %d tonnes, %.1f meters\n", name, mass, length);
    }

    fclose(fp);
    return 0;
}