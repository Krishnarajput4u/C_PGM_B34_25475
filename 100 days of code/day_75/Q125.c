#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *file;
    int ch;
    file=fopen("sample.txt","a+");
    if(file==NULL){
        printf("Error! Could not open file.\n");
        return 1;
    }   
    printf("Enter text to append to the file (Press Ctrl+D to end input on Unix or Ctrl+Z on Windows):\n");
    fputc('\n', file);
    while((ch=getchar())!=EOF && ch != '~'){
        fputc(ch,file);
    }
    printf("Text appended successfully to sample.txt\n");
    fclose(file);
    return 0;
}