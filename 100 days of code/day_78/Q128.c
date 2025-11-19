//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include<stdio.h>
#include<ctype.h>

int main (){
    FILE *file;
    char ch;
    file=fopen("input.txt","r");
    int vowel=0,consonant=0;
    if(file==NULL){
        printf("Error! Could not open file.\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            char c = tolower(ch);
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vowel++;
            else
                consonant++;
        }
    }
    printf("Vowels: %d\n",vowel);
    printf("Consonants: %d\n",consonant);
    fclose(file);
    return 0;

}