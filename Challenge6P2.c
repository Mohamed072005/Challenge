#include <stdio.h>
#include <stdlib.h>

int main(){

    float a;

    printf("Enter your number here: \n\t");
    scanf("%f", &a);

    if(a == 0){
        printf("Your number equal to 0, that's mean your number is lacking");
    }else if(a < 0){
        printf("Your number smaller than 0, that's mean your number is negative");
    }else{
        printf("Your number greater than 0, that's mean your number is positive");

    }
    return 0;
}
