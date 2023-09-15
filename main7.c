#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, number;

    printf("Enter number consists of three number: \n\t");
    scanf("%d", &number);

    a = number % 10;
    number = number / 10;
    b = number % 10;
    number = number / 10;
    c = number % 10;

    printf("%d%d%d\n", a, b, c, number);
    return 0;
}
