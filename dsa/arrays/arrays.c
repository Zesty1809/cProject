/*************************************************************************************
*                                                                                    *
*                          Created by adi81 on 4/22/2024.                            *
*                                                                                    *
*************************************************************************************/

/**************************************************************************************
*                                                                                     *
*                           Searching in an unsorted array                            *
*                                                                                     *
**************************************************************************************/

#include <stdio.h>

int findElement(int arr[], int n, int key);

int main(void) {
    int arr[] = {12, 34, 10, 6, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Storing the element that I need to search in key
    int key = 12;

    int position = findElement(arr, n, key);

    if (position == -1) {
        printf("Element not found\n");
    }
    else {
        printf("Element found at Position: %d\n", position + 1);
    }

    return 0;
}

int findElement(int arr[], int n, int key) {
    int i;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }

    // If the key is not found
    return -1;
}