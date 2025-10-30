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
    printf("Positive numbers : ");
    for(int i=0;i<num;i++){
        if(arr[i]>0)
            printf("%d ",arr[i]);
    }
    puts("");
    printf("negative numbers : ");
    for(int i=0;i<num;i++){
        if(arr[i]<0)
            printf("%d ",arr[i]);
    }
    puts("");
    printf("even numbers : ");
    for(int i=0;i<num;i++){
        if(arr[i]%2==0)
            printf("%d ",arr[i]);
    }
    puts("");
    printf("odd numbers : ");
    for(int i=0;i<num;i++){
        if(arr[i]%2!=0)
            printf("%d ",arr[i]);
    }
}