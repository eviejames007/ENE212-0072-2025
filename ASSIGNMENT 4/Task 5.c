#include <stdio.h>

int main() {

    int arr[5] = {2, 7, 4, 5, 9};
    int n = 5;
    int i, j, temp;

    // Sort the array in ascending order
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap the elements using a temporary variable
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display the sorted array
    printf("Elements of array in sorted ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");

    return 0;
}
