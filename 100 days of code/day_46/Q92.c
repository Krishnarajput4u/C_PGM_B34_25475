//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[50];
    int freq[26] = {0};

    printf("Enter the text : ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    // Count occurrences
    for (int i = 0; text[i] != '\0'; i++) {
        if (islower(text[i])) {
            freq[text[i] - 'a']++;
        }
    }

    // Find first repeating lowercase character
    for (int i = 0; text[i] != '\0'; i++) {
        if (islower(text[i]) && freq[text[i] - 'a'] > 1) {
            printf("%c\n", text[i]);
            return 0;
        }
    }

    // If no repeating lowercase found
    printf("No repeating lowercase alphabet found\n");
    return 0;
}
