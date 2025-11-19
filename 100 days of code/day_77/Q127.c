//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *file;
    char ch;
    file=fopen("input.txt","r");
    if(file==NULL){
        printf("Error! Could not open file.\n");
        return 1;
    }
    FILE *outFile;
    outFile=fopen("output.txt","w");
    if(outFile==NULL){
        printf("Error! Could not open output file.\n");
        fclose(file);
        return 1;
    }
    while((ch=fgetc(file))!=EOF){
        fputc(toupper(ch), outFile);
    }
    fclose(file);
    fclose(outFile);
}