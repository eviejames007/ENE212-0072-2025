#include <stdio.h>

int main(void)
{
    char userName[20];

    printf("Input user name: ");
    scanf("%19s", userName);
    printf("Hello %s\n", userName);

    return 0;
}
