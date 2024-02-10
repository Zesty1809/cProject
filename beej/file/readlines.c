//
// Created by adi81 on 2/10/2024.
//

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char s[1024];
    int linecount = 0;

    fp = fopen("quotes.txt", "r");

    while (fgets(s, sizeof s, fp) != NULL)
    {
        printf("%d: %s", ++linecount, s);
    }

    fclose(fp);

    return 0;
}