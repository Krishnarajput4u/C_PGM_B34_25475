//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *file;
    char ch;
    file=fopen("sample.txt","r");

    if(file==NULL){
        printf("Error! Could not open file.\n");
        return 1;
    }
    FILE *destFile;
    destFile = fopen("destination.txt", "w");
    if (destFile == NULL) {
        printf("Error! Could not open destination file.\n");
        fclose(file);
        return 1;
    }
    while((ch=fgetc(file))!=EOF){
        fputc(ch,destFile);
    }
    printf("File copied successfully to destination.txt\n");
    fclose(file);
    return 0;
}