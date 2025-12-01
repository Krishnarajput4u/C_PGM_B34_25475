#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);

    // Print first character if it's a letter
    if (isalpha(s[0])) {
        printf("%c.", toupper(s[0]));
    }

    // For every space, print next character as initial
    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i] == ' ' && isalpha(s[i + 1])) {
            printf("%c.", toupper(s[i + 1]));
        }
    }

    return 0;
}
