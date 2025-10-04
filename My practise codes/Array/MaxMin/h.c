/* Write a C program to rearrange a sorted array in max–min order without using any extra array.
That means the first element should be the maximum, the second should be the minimum,
the third should be the second maximum, the fourth should be the second minimum, and so on.*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++){
        printf("Enter the number : ");
        scanf("%d", &arr[i]);
    }
    printf("Sorted Array : ");
    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);
    puts("");
        

    int max_idx = n - 1, min_idx = 0;
    int max_elem = arr[n - 1] + 1; 
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            arr[i] += (arr[max_idx--] % max_elem) * max_elem;
        else
            arr[i] += (arr[min_idx++] % max_elem) * max_elem;
    }

    for (int i = 0; i < n; i++)
        arr[i] = arr[i] / max_elem;

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
