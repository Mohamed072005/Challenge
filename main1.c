#include <stdio.h>
#include <stdlib.h>

int main()
{
    char first_Name[50];
    char last_Name[50];
    char gender[20];
    int age;
    int phone_Number;


    printf("Enter your first name here: \n\t");
    scanf("%s", first_Name);

    printf("Enter your last name: \n\t");
    scanf("%s", last_Name);

    printf("Enter your age: \n\t");
    scanf("%d", &age);

    printf("Enter your gender: \n\t");
    scanf("%s", gender);

    printf("Enter your phone-Number: \n\t");
    scanf("%d", &phone_Number);


    printf("Your full name is %s", first_Name);
    printf(" %s\n", last_Name);
    printf("Your age is %d\n", age);
    printf("Your gender is %s\n", gender);
    printf("Your phone numbre is %d", phone_Number);

    return 0;
}
