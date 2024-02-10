//
// Created by adi81 on 2/10/2024.
//

#include <stdio.h>

int main(void)
{
    FILE *fp;       // Variable to represent open file

    fp = fopen("hello.txt", "r");       // Open file for reading

    int c = fgetc(fp);      // Read a single character
    printf("%c\n", c);      // Print char to stdout

    fclose(fp);     // Close the file when done

    return 0;
}