#include<stdio.h>

int main(){
    int num;
    printf("Enter the size of the array : ");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        printf("Enter the number : ");
        scanf("%d",&arr[i]);
    }
    int max=arr[0],secmax;
    for(int i=0;i<num;i++){
        if(arr[i]>max){
            secmax=max;
            max=arr[i];
        }            
    }
    printf("second max is : %d",secmax);
}