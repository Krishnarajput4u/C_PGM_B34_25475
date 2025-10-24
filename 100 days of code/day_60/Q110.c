//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter the size of the array: ");
    scanf("%d", &num);

    int arr[num];
    for (int i = 0; i < num; i++) {
        printf("Enter the number: ");
        scanf("%d", &arr[i]);
    }

    int subarr_size;
    printf("Enter the size of the subarray: ");
    scanf("%d", &subarr_size);

    int arr2[num - subarr_size + 1];

    for (int i = 0; i <= num - subarr_size; i++) {
        int max = arr[i];
        for (int j = i; j < i + subarr_size; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        arr2[i] = max;
    }

    printf("Maximums of each subarray: ");
    for (int i = 0; i <= num - subarr_size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
