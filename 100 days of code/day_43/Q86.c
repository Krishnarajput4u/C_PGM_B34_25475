//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include<string.h>
#include <stdio.h>
void reverse(const char text[],char rev[]){
    int len=strlen(text);
    for(int i=0;i<len;++i){
        rev[i]=text[len-i-1];
    }
    rev[len]='\0';
}
int main() {
    char text[100],rev[100];
    printf("Enter the text : ");
    fgets(text,100,stdin);
    int len=strlen(text);
    if(len>0 && text[len-1]=='\n'){
        text[len-1]='\0';
    }
    
    reverse(text,rev);
    if(strcmp(text,rev)==0)
        printf("Palindrome Letter");
    else
        printf("Not a Palindrome letter");
    return 0;
}
