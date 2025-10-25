//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

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
        text[i]=tolower(text[i]);
        
        if(text[i]=='a' || text[i]=='e' ||text[i]=='i' ||text[i]=='o' ||text[i]=='u' ){
            for(int j=i;text[j]!='\0';j++){
                text[j]=text[j+1];
            }
            i--;
        }
        
    }
    printf("%s",text);
    return 0;
}