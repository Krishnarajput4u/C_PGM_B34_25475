#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the number of elements for array 1 : ");
    scanf("%d",&num1);
    int arr[num1];
    for(int i=0;i<num1;++i){
        printf("Enter the number : ");
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of elements for array 2 : ");
    scanf("%d",&num2);
    int arr2[num2];
    int k;
    if (num1>=num2){
        k=num2;
    }
    else
        k=num1;
    for(int i=0;i<num2;++i){
        printf("Enter the number : ");
        scanf("%d",&arr2[i]);
    }
    int arr3[k];
    for(int i=0;i<k;++i){
        arr3[i]=arr[i]*arr2[i];
    }
    for(int i=0;i<k;++i){
        printf("%d ",arr3[i]);
    }
    return 0;
}