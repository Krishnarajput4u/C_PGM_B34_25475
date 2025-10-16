#include<stdio.h>
int main(){
    int num;
    printf("Enter the number of elements in array you require : ");
    scanf("%d",&num);
    int arr[num+1];
    for(int i=0;i<num;i++){
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;++i){
        printf("%d ",arr[i]);
    }
    int num1;
    printf("\n");
    printf("Enter the element you want to add at the begginning of the array : ");
    scanf("%d",&num1);
    arr[num]=num1;
    printf("The new array is : ");
    for(int i=0;i<num+1;++i){
        printf("%d ",arr[i]);
    }
    return 0;
}