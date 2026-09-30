#include <stdio.h>

int main(void)
{
    const double Pi = 3.142;
    double area;
    double r;

    printf("Input radius of circle: ");
    scanf("%lf", &r);

    area = Pi * r * r;
    printf("The area of the circle is %.2f\n", area);
return 0;
}
