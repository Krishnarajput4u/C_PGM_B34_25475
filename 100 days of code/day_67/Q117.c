//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter the size of the first array: ");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int num1;
    printf("Enter the size of the second array: ");
    scanf("%d",&num1);
    int arr1[num1];
    for(int i=0;i<num1;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr1[i]);
    }
    int arr3[num+num1];
    for(int i=0;i<num;i++){
        arr3[i]=arr[i];
    }
    for(int i=0;i<num1;i++){
        arr3[num+i]=arr1[i];
    }
    for(int i=0;i<num+num1-1;i++){
        for(int j=0;j<num+num1-i-1;j++){
            if(arr3[j]>arr3[j+1]){
                int temp=arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=temp;
            }
        }
    }

    for(int i=0;i<num+num1;i++){
        printf("%d ",arr3[i]);
    }
    return 0;
}