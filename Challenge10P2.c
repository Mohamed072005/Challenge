#include <stdio.h>
#include <stdlib.h>


int main()
{

    int day, month, year;



    printf("Enter the Day here: \n");
    scanf("%d", &day);
    printf("Enter the Month here: \n\t");
    printf("1-January\t5-May\t\t9-Semptemper\n\t2-February\t6-April\t\t10-October\n\t3-March\t\t7-July\t\t11-November\n\t4-April\t\t8-August\t12-December\n");
    scanf("%d", &month);
    printf("Enter the Year here: \n");
    scanf("%d", &year);




    switch(month)
    {
    case 1:
        if(day > 0 && day <32)
        {
            printf("Your date~~~%d-January-%d", day, year);
            break;
        }
    case 2:
        if(day > 0 && day <32)
        {
            printf("Your date~~~%d-February-%d", day, year);
            break;
        }
    case 3:
        if(day > 0 && day <32)
        {
            printf("Your date~~~%d-March-%d", day, year);
            break;

        }
    case 4:
        if(day > 0 && day <32)
        {
            printf("Your date~~~%d-April-%d", day, year);
            break;
        }
    case 5:
        if(day > 0 && day <32)
        {
            printf("Your date~~~%d-May-%d", day, year);
            break;
        }
    case 6:
        if(day > 0 && day <32)
        {
            printf("Your date~~~%d-June-%d", day, year);
            break;
        }
    case 7:
        if(day > 0 && day <32)
        {
            printf("Your date~~~%d-July-%d", day, year);
            break;
        }
    case 8:
        if(day > 0 && day <32)
        {
            printf("Your date~~~%d-August-%d", day, year);
            break;
        }
    case 9:
        if(day > 0 && day <32)
        {
            printf("Your date~~~%d-Septemper-%d", day, year);
            break;
        }
    case 10:
        if(day > 0 && day <32)
        {
            printf("Your date~~~%d-October-%d", day, year);
            break;
        }
    case 11:
        if(day > 0 && day <32)
        {
            printf("Your date~~~%d-November-%d", day, year);
            break;
        }
    case 12:
        if(day > 0 && day <32)
        {
            printf("Your date~~~%d-December-%d", day, year);
            break;
        }
    default:
        printf("You have a wrong in your inputs!!\n");
    }
    return 0;
}
