#include<stdio.h>
#include<ctype.h>

int main(){
    char name[20];
    printf("Enter file name to read: ");
    scanf("%19s", &name);

    FILE *file;
    char ch;
    file=fopen(name,"r");
    if(file==NULL){
        printf("Error! Could not open file.\n");
        return 1;
    }
    while((ch=fgetc(file))!=EOF){
        printf("%c",ch);
    }
    fclose(file);
    return 0;

}