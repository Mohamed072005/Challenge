#include <stdio.h>
#include <stdlib.h>


int main()
{

    float mark;

    printf("Enter your mark here: \n\t");
    scanf("%f", &mark);

    if(mark < 10)
    {
        printf("%.2f--You're fired.!!", mark);
    }
    else if(mark >= 10 && mark <= 12)
    {
        printf("%.2f--You're medium.!!", mark);
    }
    else if(mark > 12 && mark <= 14)
    {
        printf("%.2f--You're good.!!", mark);
    }
    else if(mark > 14 && mark <= 16)
    {
        printf("%.2f--You're very good.!!", mark);
    }
    else
    {
        printf("%.2f--You're master.!!", mark);
    }
    return 0;


}
