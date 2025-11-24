#include<stdio.h>
int main(){
    FILE *file;
    file =fopen("numbers.txt","r");
    if(file == NULL){
        printf("Error opening file.\n");
        return 1;
    }
    int number, sum = 0;int counter=0;
    while(fscanf(file, "%d", &number) == 1){
        sum += number;
        counter++;
    }
    float average = (float)sum / counter;
    fclose(file);
    printf("The sum of the numbers in the file is: %d\n", sum);
    printf("Average of the numbers in the file is: %.2f\n", average);
    return 0;
}