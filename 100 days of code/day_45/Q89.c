//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>

int main() {
    char text[50];
    char find;
    int frequency = 0;

    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    printf("Enter the character you want to find in the text: ");
    scanf("%c", &find);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == find)
            frequency++;
    }

    printf("Frequency of '%c' = %d\n", find, frequency);

    return 0;
}