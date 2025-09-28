//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int num1,total=0;
    printf("Enter the rows and column you want in your sqaure matrix : ");
    scanf("%d",&num1);
    int array[num1][num1];
    for(int i=0;i<num1;++i){
        for(int j=0;j<num1;++j){
            printf("array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i<num1;++i){
        total+=array[i][i];
    }
    printf("Sum of diagonal matrix : %d",total);
    return 0;
}