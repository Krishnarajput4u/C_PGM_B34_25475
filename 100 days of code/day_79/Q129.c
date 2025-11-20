#include<stdio.h>
int main(){
    FILE *file;
    file =fopen("numbers.txt","r");
    if(file == NULL){
        printf("Error opening file.\n");
        return 1;
    }
    int number, sum = 0;
    while(fscanf(file, "%d", &number) == 1){
        sum += number;
    }
    fclose(file);
    printf("The sum of the numbers in the file is: %d\n", sum);
    printf("Average of the numbers in the file is: %.2f\n", (float)sum / 10);
    return 0;
}