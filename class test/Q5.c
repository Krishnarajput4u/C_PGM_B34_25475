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
    int search;
    printf("Enter the element to before which you want to enter the element : ");
    scanf("%d",&search);
    int num1;
    printf("Enter the element you want to add before %d : ",search);
    scanf("%d",&num1);
    for(int i=num;i>=0;i--){
        if(arr[i]==search){
            for(int j=num;j>i;j--){
                arr[j]=arr[j-1];
            }
            arr[i]=num1;
            break;
        }
    }
    printf("\nThe new array is : ");
    for(int i=0;i<num+1;++i){
        printf("%d ",arr[i]);
    }
    return 0;
}