//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter the size of the array: ");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        printf("Enter the number: ");
        scanf("%d",&arr[i]);
    }
    int subarr_size;
    printf("Enter the size of the subarray: ");
    scanf("%d",&subarr_size);
    int max=0;
    for(int i=0;i<=num-subarr_size;i++){
        int sum=0;
        for(int j=i;j<i+subarr_size;j++){
            sum+=arr[j];
            if(sum>max){
                max=sum;
            }
        }
    }
    printf("The maximum sum of subarray of size %d is: %d",subarr_size,max);
    return 0;
}