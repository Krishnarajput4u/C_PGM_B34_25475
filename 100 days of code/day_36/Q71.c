//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

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
    for(int i=0;i<num1;++i){
        for(int j=0;j<num2;++j){
            printf("%d ",array[i][j]);
        }
        puts("");
    }
    return 0;
}
