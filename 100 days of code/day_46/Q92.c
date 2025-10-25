//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char text[50];
    
    printf("Enter the text : ");
    fgets(text,sizeof(text),stdin);
    
    text[strcspn(text,"\n")]='\0';
    
    for(int i=0;text[i]!='\0';i++){

        if(islower(text[i])){
            printf("\"%c\" is the first lower cased alphabet in the string",text[i]);
            break;
        }
        
    }
    return 0;
}