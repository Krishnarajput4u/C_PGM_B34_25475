//
#include <string.h>
#include<stdio.h>
int main(){
    char string[50];
    printf("Enter a string: ");
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")]='\0';
    printf("%s",string);
    return 0;
}