//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter the size of the array: ");
    scanf("%d", &num);

    int arr[num];
    for (int i = 0; i < num; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < num - 1; i++)
        for (int j = 0; j < num - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }

    int j = 0;
    for (int i = 0; i < num - 1; i++)
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];
    arr[j++] = arr[num - 1];

    int k;
    printf("Enter k: ");
    scanf("%d", &k);

    if (k > 0 && k <= j)
        printf("%dth smallest number: %d\n", k, arr[k - 1]);
    else
        printf("Invalid k\n");

    return 0;
}
