#include <stdio.h>

int main() {
    int arr[4] = {3, 2, 2, 5};
    int n = 4;
    int i, j, found;

    printf("The unique elements found in the array are:\n");

    // Outer loop picks each element one by one
    for (i = 0; i < n; i++) {
        found = 0; // Reset the flag to 0 (false) for each new number

        // Inner loop compares the picked element against all other elements
        for (j = 0; j < n; j++) {
            // Check if the same value exists at a different index
            if (i != j && arr[i] == arr[j]) {
                found = 1; // A duplicate was found
                break;     // No need to keep checking this number
            }
        }

        // If no duplicate was found, print the element
        if (found == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
