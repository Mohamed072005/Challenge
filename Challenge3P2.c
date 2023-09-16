#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;
    printf("Enter the first number: \n\t");
    scanf("%d", &a);
    printf("Enter the second number: \n\t");
    scanf("%d", &b);

    if(a == b){
        printf("(%d + %d) * 3 = %d", a, b, (a + b)*3);
    }else{
        printf("%d + %d = %d", a, b, a + b);
    }
    return 0;

}
