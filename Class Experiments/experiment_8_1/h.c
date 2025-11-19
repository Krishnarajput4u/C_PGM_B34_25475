#include<stdio.h>

int main(){
    int num; char ch;float f;
    int *pnum=&num;
    char *pch=&ch;
    float *pf=&f;
    printf("Enter an integer: ");
    scanf("%d",pnum);
    printf("Enter a character: ");
    scanf(" %c",pch);
    printf("Enter a float: ");
    scanf("%f",pf);
    printf("\nYou entered:\n");
    printf("Integer: %d\n",*pnum);
    printf("Character: %c\n",*pch);
    printf("Float: %.2f\n",*pf);
    return 0;
}