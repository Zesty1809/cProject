//
// Created by adi81 on 2/11/2024.
//

#include <stdio.h>

int main(void) {
    int a[] = {11, 22, 33, 44, 55};

    int *p = a;

    // Print various elements of the array in various ways

    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);       // Array notation with a
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", p[i]);       // Array notation with p
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(a + i));       // Pointer notation with a
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(p + i));       // Pointer notation with p
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(p++));     // Moving pointer p
        // printf("%d\n", *(a++));      // Moving array variable a--ERROR
    }
}