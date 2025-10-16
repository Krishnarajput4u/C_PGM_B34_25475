#include <stdio.h>

int main() {
    int num;
    printf("Enter the array size : ");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    int search;
    printf("Enter the element to be searched : ");
    scanf("%d",&search);
    for(int i=0;i<num;++i){
        if(arr[i]==search){
            printf("Element found at index %d",i);
            return 0;
        }
    }
}