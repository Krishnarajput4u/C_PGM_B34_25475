#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);  // Input string

    int len = strlen(str);

    // Generate all substrings
    for (int i = 0; i < len; i++) {        // Starting index
        for (int j = i; j < len; j++) {    // Ending index
            for (int k = i; k <= j; k++) { // Print substring from i to j
                printf("%c", str[k]);
            }
            printf(",");  // Separator
        }
    }

    return 0;
}
