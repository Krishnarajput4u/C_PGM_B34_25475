//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int main() {
    char text[1000];
    int counter = 0;

    printf("Enter the text : ");
    fgets(text, sizeof(text), stdin);

    while (text[counter] != '\0' && text[counter] != '\n') {
        counter++;
    }

    printf("%d", counter);
    return 0;
}