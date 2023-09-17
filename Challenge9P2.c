#include <stdio.h>
#include <stdlib.h>


int main()
{

    char character;

    printf("Enter your character hrere: \n\t");
    scanf("%c", &character);

    if((int)character >= 65 && (int)character <= 90 || (int)character >= 97 && (int)character <= 122)
    {
        printf("Your character is alphabets.\n");
        if((int)character >= 65 && (int)character <= 90)
        {
            printf("Your character is Highercase.\n");
        }
        else
        {
            printf("Your character in Lowercase.\n");
        }
    }
    else
    {
        printf("Your character is not alphabets!!\n");
        printf("Check your input and try again.\n");
    }
    return 0;

}
