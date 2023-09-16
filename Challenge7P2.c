#include <stdio.h>
#include <stdlib.h>

int main()
{

    char character;

    printf("Enter your character here: \n\t");
    scanf("%c", &character);

    if((int)character >= 65 && (int)character <= 90)
    {
        printf("Your character is Highercase");
    }
    else
    {
        printf("Your character is Lowercase");
    }
    return 0;

}
