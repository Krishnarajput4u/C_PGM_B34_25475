#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);

    int maxLen = 0, currLen = 0, start = 0, maxStart = 0;

    for (int i = 0; ; i++) {
        if (s[i] != ' ' && s[i] != '\0' && s[i] != '\n') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
            start = i + 1;
        }

        if (s[i] == '\0')
            break;
    }

    // Print the longest word
    for (int i = maxStart; i < maxStart + maxLen; i++)
        printf("%c", s[i]);

    return 0;
}
