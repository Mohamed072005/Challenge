#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number, i;

    printf("Enter your number here: \n\t");
    scanf("%d", &number);

    for(i = 1; i < 11; i++)
    {
        printf("%d * %d = %d", number, i, number * i);
    }
    return 0;
}
