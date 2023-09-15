#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1, x2, y1, y2, operation;

    printf("Enter the point x1: \n\t");
    scanf("%d", &x1);
    printf("Enter the point y1: \n\t");
    scanf("%d", &y1);
    printf("Enter the point x2: \n\t");
    scanf("%d", &x2);
    printf("Enter the point y2: \n\t");
    scanf("%d", &y2);

    operation = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The distance is %d", operation);

    return 0;
}
