//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char text[50];
    
    printf("Enter the text : ");
    fgets(text,sizeof(text),stdin);
    
    text[strcspn(text,"\n")]='\0';
    for(int i=0;text[i] !='\0';i++){
        if(islower(text[i]))
            text[i]=toupper(text[i]);
        else if(isupper(text[i]))
            text[i]=tolower(text[i]);
    }
    printf("%s",text);
    return 0;
}
