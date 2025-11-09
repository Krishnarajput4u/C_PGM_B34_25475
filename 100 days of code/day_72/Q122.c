#include <stdio.h>

int main() {
    FILE *file;
    char line[200];  // Buffer to store each line

    // Open file in read mode
    file = fopen("info.txt", "r");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    printf("Reading contents of info.txt:\n\n");

    // Read each line until end of file
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line); // Print each line
    }

    // Close the file
    fclose(file);

    return 0;
}
