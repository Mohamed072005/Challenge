#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a, b, c, delta;
    float x1, x2, x;

    printf("Enter the number \"a\" here : \n\t");
    scanf("%d", &a);
    printf("Enter the number \"b\" here : \n\t");
    scanf("%d", &b);
    printf("Enter the number \"c\" here : \n\t");
    scanf("%d", &c);

    delta = (pow(b, 2) - 4 * a * c);

    if(delta > 0){
        printf("The equation has two solutions:\n\n");
        printf("The first solution: \n");
        x1 = (-b - sqrt(delta))/(2 * a);
        printf("%.2f\n", x1);
        printf("The second solution: \n");
        x2 = (-b - sqrt(delta))/(2 * a);
        printf("%.2f", x2);
    }else if(delta == 0){
        printf("The equation has one solution:\n\n");
        printf("The solution: \n");
        x = (-b / (2 * a));
        printf("%.2f", x);
    }else{
        printf("The equation don't have a solution");
    }
    return 0;

}
