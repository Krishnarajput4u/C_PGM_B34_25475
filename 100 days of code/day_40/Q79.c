//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &num1, &num2);

    int arr[num1][num2];

    
    for (int i = 0; i < num1; ++i) {
        for (int j = 0; j < num2; ++j) {
            printf("Array[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    
    for (int k = 0; k <= num1 + num2 - 2; ++k) {
        if (k % 2 == 0) {
            for (int i = num1 - 1; i >= 0; --i) {
                int j = k - i;
                if (j >= 0 && j < num2) {
                    printf("%d ", arr[i][j]);
                }
            }
            
        } 
        else {
            for (int i = 0; i < num1; ++i) {
                int j = k - i;
                if (j >= 0 && j < num2) {
                    printf("%d ", arr[i][j]);
                }
                
            }
            
        }
    }

    printf("\n");
    return 0;
}