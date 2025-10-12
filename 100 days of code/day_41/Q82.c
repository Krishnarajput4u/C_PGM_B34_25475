//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>
#include <ctype.h> 

#define SIZE 100

void next_line(const char *const sPtr);

int main() {
    char text[SIZE];

    puts("Enter the text: ");
    fgets(text, SIZE, stdin);

    puts("Result:");
    next_line(text); 

    return 0;
}

void next_line(const char *const sPtr) {
    if (*sPtr == '\0' || *sPtr == '\n') {
        return;
    }
    else{
        printf("%c\n", *sPtr);
    }
    next_line(sPtr + 1);
}
