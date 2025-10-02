#include <stdio.h>

int main() {
    int num;
    printf("Enter the number of elements you want in your array: ");
    scanf("%d", &num);

    int arr[num];
    for(int i = 0; i < num; ++i){
        printf("Enter the number: ");
        scanf("%d", &arr[i]);
    }

    int maxLen = 1, currLen = 1;

    for(int i = 1; i < num; ++i){
        if(arr[i] > arr[i - 1]){
            currLen++;
            if(currLen > maxLen){
                maxLen = currLen;
            }
        } else {
            currLen = 1;
        }
    }

    printf("Length of longest increasing subarray: %d\n", maxLen);
    return 0;
}
