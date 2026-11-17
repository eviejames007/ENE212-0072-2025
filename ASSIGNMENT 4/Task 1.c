#include <stdio.h>

int main()
{
   int i;
   int arr[3]={2,5,7};
// dispay in normal order
    for (i = 0; i < 3; i++) {

        printf("%d\n", arr[i]);
    }

    // Display the elements in reverse order
    printf("\nThe values stored into the array in reverse are:\n");
    for (i = 2 ; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0 ;
}
