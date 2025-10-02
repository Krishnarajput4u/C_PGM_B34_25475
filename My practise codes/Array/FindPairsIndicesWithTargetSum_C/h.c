//Finds pairs of indices whose values sum up to the target.

#include <stdio.h>

int main() {
    int num,temp;
    printf("Enter the number of elements you want in  your array : ");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;++i){
        printf("Enter the number : ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num-1;++i){
        for(int j=0;j<num-i-1;++j){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Array : ");
    for(int i=0;i<num;++i){
        printf("%d ",arr[i]);
    }
    puts("");
    int target;
    printf("Enter the target number : ");
    scanf("%d",&target);
    for(int i=0;i<num;++i){
        for(int j=i;j<num;++j){
            if(target==arr[i]+arr[j] && j!=i ){
                printf("Found at Index %d and %d\n",i,j);
            }
        }
    }
    return 0;
}