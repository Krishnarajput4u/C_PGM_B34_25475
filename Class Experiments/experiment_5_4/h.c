#include<stdio.h>

int main(){
    int r1,c1;
    printf("Enter the number of rows : ");
    scanf("%d",&r1);
    printf("Enter the number of columns : ");
    scanf("%d",&c1);
    int arr[r1][c1];

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("Enter the number : ");
            scanf("%d",&arr[i][j]);
        }
    }

    int r2,c2;
    printf("Enter the number of rows : ");
    scanf("%d",&r2);
    printf("Enter the number of columns : ");
    scanf("%d",&c2);
    int arr2[r2][c2];

    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("Enter the number : ");
            scanf("%d",&arr2[i][j]);
        }
    }

    if(c1!=r2){
        printf("Multiplication for the dimension of array is not possible"); return 0;
    }

    int arr3[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            arr3[i][j]=0;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                arr3[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",arr3[i][j]);
        }
    }
    return 0;
}