//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text1[50], text2[50];
    int count1[256] = {0}, count2[256] = {0};
    
    printf("Enter the 1st text: ");
    fgets(text1, sizeof(text1), stdin);
    text1[strcspn(text1, "\n")] = '\0';
    
    printf("Enter the 2nd text: ");
    fgets(text2, sizeof(text2), stdin);
    text2[strcspn(text2, "\n")] = '\0';
    

    if (strlen(text1) != strlen(text2)) {
        printf("Not an Anagram\n");
        return 0;
    }
    
  
    for (int i = 0; text1[i] != '\0'; i++)
        count1[tolower(text1[i])]++;

    for (int i = 0; text2[i] != '\0'; i++)
        count2[tolower(text2[i])]++;


    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            printf("Not an Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
