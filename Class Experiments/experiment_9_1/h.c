#include<stdio.h>

int main(){
    FILE *file;
    char ch;
    file=fopen("text.txt","w");
    if(file==NULL){
        printf("File not found \n");
        return 0;
    }
    printf("enter the text and type \"~\" to stop \n");

    while(ch=getchar()){
        if(ch=='~'){
            break;
        }
        fputc(ch,file);
    }
    fclose(file);
    return 0;
}