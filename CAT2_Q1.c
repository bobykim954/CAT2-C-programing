// File name: array_example.c
// Author: Kimathi Boby Stone Murithi
// Description: Demonstrating use of a 2D array in C

#include <stdio.h>

// i. Definition:
// An array is a data structure that stores a fixed number of elements of the same data type in contiguous memory locations.

int main() {
    // ii. Declare and initialize a 2D array
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    // iii. Print elements using a nested for loop
    printf("Array elements are:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}