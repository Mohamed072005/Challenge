#include <stdio.h>
#include <stdlib.h>

int main(){


    int y;
    int a;

    printf("Enter the number of years here: \n");
    scanf("%d", &y);
    printf("Choose the number of the time do you want to know: \n\t");
    printf(".1-Minut\n.2-Hours\n.3-Days\n");
    scanf("%d", &a);

    if(a == 1){
        printf("The number of Minut: %d min", 12 * 30 * 24 * 60 * y);
    }else if(a == 2){
        printf("The number of Hours: %d hour", 12 * 30 * 24 * y);
    }else if(a == 3){
        printf("The number of Days: %d day", 12 * 30 * y);
    }else{
        printf("You have a wrong in your input!!\n");
        printf("Check it and try again");
    }
    return 0;
}

