#include <stdio.h>

int main(void)
{
    double num1, num2, answer;
    char operation;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator: ");
    scanf(" %c", &operation);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operation)
    {
        case '+':
            answer = num1 + num2;
            printf("%.2f\n", answer);
            break;
        case '-':
            answer = num1 - num2;
            printf("%.2f\n", answer);
            break;
        case '/':
            if (num2 == 0)
            {
                printf("Error: division by zero!\n");
                return 1;
            }
            answer = num1 / num2;
            printf("%.2f\n", answer);
            break;
        case '*':
            answer = num1 * num2;
            printf("%.2f\n", answer);
            break;
        default:
            printf("Invalid operation!\n");
            return 1;
    }

    return 0;
}
