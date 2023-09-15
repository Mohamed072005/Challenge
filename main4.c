#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, somme;

    printf("Enter your first number: \n\t");
    scanf("%d", &a);
    printf("Enter your second number: \n\t");
    scanf("%d", &b);
    printf("Enter your third number: \n\t");
    scanf("%d", &c);
    printf("Enter your third number: \n\t");
    scanf("%d", &d);

    somme = (a + b + c + d) / 3;

    printf("The result is %d", somme);


    return 0;
}
