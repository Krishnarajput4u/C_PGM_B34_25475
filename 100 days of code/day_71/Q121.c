#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    // Open the file in write mode
    file = fopen("info.txt", "w");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error! Could not create file.\n");
        return 1;
    }

    // Take user input
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data to file
    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    // Close the file
    fclose(file);

    // Confirmation message
    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
