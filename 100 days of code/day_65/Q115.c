#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int check(char text[],char a,int count2){
    int count1=0;
    for(int i=0;text[i]='\0';i++){
        if(text[i]==a)
            ++count1;
    }
    if(count1!=count2){
        printf("Not Anagram");
        return 0;
    }
}

int main() {
    char text1[50],text2[50];
    
    printf("Enter the first text : ");
    fgets(text1,sizeof(text1),stdin);
    text1[strcspn(text1,"\n")]='\0';
    
    printf("Enter the sec text : ");
    fgets(text2,sizeof(text2),stdin);
    text2[strcspn(text2,"\n")]='\0';
    
    if(strlen(text1)!=strlen(text2)){
        printf("Not Anagram"); return 0;
    }
    
    for(int i=0;text1[i]!='\0';i++){
        int count=0;
        for(int j=0;text2[j]!='\0';j++){
            if(text2[j]==text1[i]){
                ++count;
            }
        }
        if(count>1)
            if(check(text1,text1[i],count))
                return 0;
    
    }
    printf("Anagram");
    return 0;
}

