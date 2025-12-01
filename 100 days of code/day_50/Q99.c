#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    fgets(s, sizeof(s), stdin);

    // Print first character (first initial)
    if (s[0] != ' ')
        printf("%c.", s[0]);

    // Print initials after every space
    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i-1] == ' ' && s[i] != ' ' && s[i] != '\n')
            printf("%c.", s[i]);
    }

    return 0;
}
