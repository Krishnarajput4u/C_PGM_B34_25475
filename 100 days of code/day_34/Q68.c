//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>


void sortArray(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int Din(int array[],int size,int ind){ //Din : Delete indexed number :)
    for(int counter=ind;counter<size-1;++counter){
        array[counter]=array[counter+1];
    }
    return (size-1);
}
int main() {
    int arr[100], n;


    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        printf("Enter the number : ");
        scanf("%d", &arr[i]);
    } 
    sortArray(arr, n);
    int index;
    printf("Enter the index number you want to remove : ");
    scanf("%d",&index);
    n=Din(arr,n,index);
    printf("Final sorted array with no duplicates and number inserted:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}