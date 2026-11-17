#include <stdio.h>

#define ROWS 6
#define COLS 4

int main() {
    // Initialize a 2D array with 6 rows and 4 columns
    int matrix[ROWS][COLS] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    };

    printf("2D Array Elements (6 rows x 4 columns):\n\n");

    // Traverse rows (outer loop) and columns (inner loop)
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n"); // Move to the next line after printing each row
    }

    return 0;
}
