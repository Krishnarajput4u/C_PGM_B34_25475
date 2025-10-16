#include<stdio.h>
int main(){
    int num;
    printf("Enter the array size : ");
    scanf("%d",&num);
    int arr[num+1];
    for(int i=0;i<num;i++){
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    int pos;
    printf("Enter the position where you want to add the element : ");
    scanf("%d",&pos);
    int num1;
    printf("Enter the element you want to add at the position %d : ",pos);
    scanf("%d",&num1);
    for(int i=num;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num1;
    for(int i=0;i<num+1;++i){
        printf("%d ",arr[i]);
    }
    return 0;
}