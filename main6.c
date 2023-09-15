#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    int radius;
    double operation;

    printf("Enter the radius value: \n\t");
    scanf("%d", &radius);

    operation = (2 * radius) * PI;

    printf("the circumference of the circle: %.2f", operation);
    return 0;
}
