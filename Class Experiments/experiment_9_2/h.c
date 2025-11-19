#include <stdio.h>

int main() {
    FILE *file;
    int ch;

    file = fopen("text.txt", "r");   // open for reading
    if (file == NULL) {
        printf("File not found\n");
        return 0;
    }

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);    // print to screen
    }

    fclose(file);
    return 0;
}

