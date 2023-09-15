
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter your first number: \n\t");
    scanf("%d", &a);

    printf("Enter your second number: \n\t");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    if(b == 0){
        printf("The operation is impossible!!\n");
    }else{
        printf("%d / %d = %d\n", a, b, a / b);
    }
    if(b == 0){
        printf("The operation is impossible!!\n");
    }else{
        printf("%d %% %d = %d", a, b, a % b);
    }

    return 0;
}

