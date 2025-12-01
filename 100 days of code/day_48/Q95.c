#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    scanf("%s", str1);
    scanf("%s", str2);

    // If lengths differ → cannot be rotation
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation");
        return 0;
    }

    // Make a temp string = str1 + str1
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is substring of temp
    if (strstr(temp, str2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
