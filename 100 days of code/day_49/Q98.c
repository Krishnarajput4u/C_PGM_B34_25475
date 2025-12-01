#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);
    if (s[len - 1] == '\n') s[len - 1] = '\0';

    // Print the first letter
    if (s[0] != ' ')
        printf("%c.", s[0]);

    // Print initials after each space
    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i - 1] == ' ' && s[i] != ' ')
            printf("%c.", s[i]);
    }

    return 0;
}
