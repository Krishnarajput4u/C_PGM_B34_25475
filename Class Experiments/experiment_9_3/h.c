#include <stdio.h>

int main() {
    FILE *file;
    char line[256];   // buffer to store each line

    file = fopen("text.txt", "r");   // open file for reading
    if (file == NULL) {
        printf("File not found\n");
        return 1;
    }

    // Read line by line until EOF
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);  // print each line
    }

    fclose(file);   // close the file
    return 0;
}
