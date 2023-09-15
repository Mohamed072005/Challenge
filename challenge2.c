#include <stdio.h>
#include <stdlib.h>

int main(){

    float F,C;

    printf("entrer la temperature en Fahrenheit\n");
    scanf("%f", &F);

    C=(F-32)/1.8;

    if (C < 0){
        printf("tres froid");
    }else if (C >= 0 && C <= 10){
        printf("froid");
    }else if (C >= 11 && C <= 25){
        printf("chaud");
    }else{
        printf("tres chaud");
    }
    return 0;

}

