//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>

int main() {
    int num1,num2;
    printf("Enter the rows and column you want in your matrix : ");
    scanf("%d%d",&num1,&num2);
    int array[num1][num2];
    for(int i=0;i<num1;++i){
        for(int j=0;j<num2;++j){
            printf("array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    int array2[num2][num1];
    for(int i=0;i<num1;++i){
        for(int j=0;j<num2;++j){
            array2[j][i]=array[i][j];
        }
    }
    printf("Transpose : \n");
    for(int i=0;i<num2;++i){
        for(int j=0;j<num1;++j){
            printf("%d ",array2[i][j]);
        }
        puts("");
    }
    return 0;
}