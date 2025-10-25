//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char text[50];
    int i = 0;

    printf("Enter the text: \n");

    char ch;
    while (i < 49 && (ch = getchar()) != '\n' && ch != EOF) {
        

        if (isspace(ch))
            ch='-';
            
        text[i] = ch;
        i++;
    }
    text[i] = '\0';
    printf("%s",text);

    return 0;
}