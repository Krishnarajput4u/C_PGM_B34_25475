#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int pivot=1;pivot<num;++pivot){
        int sum1=0,sum2=0;
        for(int j=1;j<=pivot;++j){
            sum1+=j;
        }
        for(int j=pivot;j<=num;++j){
            sum2+=j;
        }
        if(sum1==sum2){
            printf("Pivot is %d\n",pivot);
            return 0;
        }
    }
    printf("Not a pivot number ");
}