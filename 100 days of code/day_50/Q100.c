#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);

    int len = strlen(s);
    int first = 1;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (!first) printf(",");
            first = 0;

            for (int k = i; k <= j; k++)
                printf("%c", s[k]);
        }
    }

    return 0;
}
