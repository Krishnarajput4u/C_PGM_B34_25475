//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int main() {
    int num1,num2,total;
    printf("Enter the rows and column you want in your matrix : ");
    scanf("%d%d",&num1,&num2);
    int array[num1][num2];
    for(int i=0;i<num1;++i){
        for(int j=0;j<num2;++j){
            printf("array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i<num1;++i){
        for(int j=0;j<num2;++j){
            total+=array[i][j];
        }
    }
    printf("The sum is : %d",total);
    return 0;
}