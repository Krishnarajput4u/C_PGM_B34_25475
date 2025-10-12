//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100

int alpha(const char *const sPtr);

int main() {
    char text[SIZE];

    puts("Enter the text: ");
    fgets(text, SIZE, stdin);

    // Remove newline character if present
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }

    alpha(text);
    return 0;
}

int alpha(const char *const sPtr) {
    int vowel = 0, consonant = 0;

    for (int counter = 0; sPtr[counter] != '\0'; ++counter) {
        char ch = sPtr[counter];

        if (isalpha(ch)) { // Only consider alphabet letters
            char lower = tolower(ch); // Normalize to lowercase
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                ++vowel;
            } else {
                ++consonant;
            }
        }
    }

    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonant);

    return 0;
}
