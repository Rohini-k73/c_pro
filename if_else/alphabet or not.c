//C program to check whether a character is alphabet or not

#include <stdio.h>

void main() {
    char ch; // Use char type for storing a single character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
        printf("Character is an ALPHABET");
    } else
	{
        printf("Character is not an ALPHABET");
    }
}

