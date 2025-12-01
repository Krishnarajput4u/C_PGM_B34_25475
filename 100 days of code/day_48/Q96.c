#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);
    if (s[len - 1] == '\n') 
        s[len - 1] = '\0'; // remove newline

    int i = 0, start = 0;

    while (1) {
        if (s[i] == ' ' || s[i] == '\0') {
            reverse(s, start, i - 1);
            start = i + 1;
        }
        if (s[i] == '\0')
            break;
        i++;
    }

    printf("%s", s);
    return 0;
}
