//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
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
    int subarr_size;
    printf("Enter the size of the subarray : ");
    scanf("%d",&subarr_size);
    int arr2[num - subarr_size + 1];
    for(int i=0;i<=num - subarr_size;i++){
        arr2[i]=0;
        for(int j=i;j<i + subarr_size;j++){
            if(arr[j] < 0){
                arr2[i]=arr[j];
                break;
            }
        }
        
    }
    for(int i=0;i<num-subarr_size+1;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}