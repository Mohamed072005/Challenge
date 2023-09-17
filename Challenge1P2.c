#include <stdio.h>
#include <stdio.h>
#include <ctype.h>


int main() {
    char character;

    printf("Enter your character here: \n\t");
    scanf(" %c", &character);

    // Convert the character to lowercase
    character = tolower(character);

    switch (character) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("This character is a vowel\n");
            break;
        default:
            printf("This character is a consonant\n");
    }

    return 0;
}
