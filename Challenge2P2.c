#include <stdio.h>
#include <stdlib.h>

int main(){

    char character;

    printf("Enter your character here: \n\t");
    scanf("%c", &character);
    character = tolower(character);

    switch(character){
        case 'a':
        case 'e':
        case 'i':
        case 'u':
        case 'o':
            printf("This character is vowel");
            break;
        default:
            printf("This character is consonant");

    }
    return 0;
}
