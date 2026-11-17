#include <stdio.h>

int main() {
    // Initialize array with extra capacity for the new element
    int arr[10] = {1, 8, 7, 10};
    int n = 4;     // Current size of the array
    int x = 5;     // Value to be inserted
    int pos = 2;   // 1-based position where the value will be inserted
    int i;

    printf("The current list of the array :\n");
    for (i = 0; i < n; i++) {
        printf("% 5d", arr[i]);
    }

    // Shift elements to the right from the end down to the target position
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value at the 1-based position (index pos - 1)
    arr[pos - 1] = x;
    n++; // Update the total count of elements

    printf("\n\nAfter Insert the element the new list is :\n");
    for (i = 0; i < n; i++) {
        printf("% 5d", arr[i]);
    }
    printf("\n");

    return 0;
}
