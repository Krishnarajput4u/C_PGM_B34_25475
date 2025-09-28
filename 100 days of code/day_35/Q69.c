//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n,temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  

    for (int i = 0; i < n; i++) {
        printf("Enter element : ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        for(int j=0;j<n-i-1;++j){
            if(arr[i]>arr[i+1]){
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("The second largest number is : %d", arr[n-2]);
    return 0;
}