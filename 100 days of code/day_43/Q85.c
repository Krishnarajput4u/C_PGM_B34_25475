//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

#define SIZE 100

void reverse(const char *sPtr);

int main(void) {
    char text[SIZE];

    puts("Enter the text: ");
    fgets(text, SIZE, stdin);

    printf("\nReverse text is : ");
    reverse(text);
    return 0;
}

void reverse(const char *sPtr) {
    if (sPtr[0] == '\0') {
        return;
    } else {
        reverse(sPtr + 1);
        putchar(sPtr[0]);
    }
}