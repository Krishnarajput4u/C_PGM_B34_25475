//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main() {
    FILE *file;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    bool inWord = false;

    // Open file in read mode
    file = fopen("sample.txt", "r");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    // Read each character until end of file
    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        // Count lines
        if (ch == '\n') {
            lineCount++;
        }

        // Count words
        if (isspace(ch)) {
            inWord = false;
        } else {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        }
    }

    // If the file is not empty, count the last line if it doesn't end with a newline
    if (charCount > 0 && ch != '\n') {
        lineCount++;
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);

    return 0;
}