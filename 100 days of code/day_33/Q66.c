//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

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


int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;

    int j = 0; 

    for (int i = 1; i < n; i++) {
        if (arr[j] != arr[i]) {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1;
}


int insertIntoSorted(int arr[], int n, int num) {
    int i;
    

    for (i = n - 1; (i >= 0 && arr[i] > num); i--) {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = num; 
    return n + 1;
}

int main() {
    int arr[100], n, numberToInsert;


    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    sortArray(arr, n);
    
    n = removeDuplicates(arr, n);
    
    printf("Enter number to insert into sorted array: ");
    scanf("%d", &numberToInsert);
    n = insertIntoSorted(arr, n, numberToInsert);
    printf("Final sorted array with no duplicates and number inserted:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}