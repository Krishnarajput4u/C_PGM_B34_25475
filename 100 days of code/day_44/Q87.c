//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char text[50];
    int i = 0;
    int space = 0, digit = 0, special = 0;

    printf("Enter the text: \n");

    char ch;
    while (i < 49 && (ch = getchar()) != '\n' && ch != EOF) {
        text[i] = ch;

        if (isspace(ch))
            ++space;
        else if (isdigit(ch))
            ++digit;
        else if (!isalnum(ch))
            ++special;

        i++;
    }
    text[i] = '\0';

    printf("Spaces: %d\nDigits: %d\nSpecial characters: %d\n", space, digit, special);

    return 0;
}