#include <stdio.h>

int main() {

    int arr[] = {45, 25, 21};
    int n = 3;
    int i, max, min;

    // Assume the first element is both the maximum and minimum
    max = arr[0];
    min = arr[0];

    // Loop through to compare values
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; //
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the results
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

    return 0;
}
