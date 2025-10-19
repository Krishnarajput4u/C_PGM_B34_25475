//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter the size of the array: ");
    scanf("%d", &num);

    int arr[num];
    int total = 0;

    // Input array elements and calculate total sum
    for (int i = 0; i < num; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    int leftsum = 0;

    // Loop to find pivot index
    for (int i = 0; i < num; i++) {
        int rightsum = total - leftsum - arr[i];

        if (leftsum == rightsum) {
            printf("%d\n", i);
            return 0;
        }

        leftsum += arr[i];
    }

    // No pivot index found
    printf("-1\n");
    return 0;
}
