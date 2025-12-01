#include<stdio.h>
int main(){
    FILE *file;
    file=fopen("numbers.txt","w");
    if(file==NULL){
        printf("File not found \n");
        return 1;
    }
    for(int i=0;i<5;i++){
        int num1;
        printf("Enter the number %d: ",i+1);
        scanf("%d",&num1);
        fprintf(file,"%d\n",num1);
    }
    fclose(file);
    file=fopen("numbers.txt","r");
    int su=0;
    int num;
    while(fscanf(file,"%d",&num)!=EOF){
        su+=num;
    }
    printf("The sum of the numbers in the file is: %d",su);
    fclose(file);
    return 0;

}