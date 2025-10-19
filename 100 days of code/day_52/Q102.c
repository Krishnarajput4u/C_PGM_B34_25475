#include <stdio.h>


int findCeilIndex(int arr[], int size, int x) {
    int left = 0;
    int right = size - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            result = mid;      
            right = mid - 1;    
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    int size;
    printf("Enter the size of the number : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;++i){
        printf("Enter the number : ");
        scanf("%d",&arr[i]);
    }
    int x;


    printf("Enter x: ");
    scanf("%d", &x);

    
    int index = findCeilIndex(arr, size, x);
    printf("%d\n", index);

    return 0;
}
