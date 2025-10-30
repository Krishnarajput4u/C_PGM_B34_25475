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

    int target ;
    printf("Enter the the target number : ");
    scanf("%d",&target);
    int count=0;
    for(int i=0;i<num;i++){
        if(arr[i]==target)
            ++count;
    }
    printf("Frequency is %d",count);
    return 0;
}