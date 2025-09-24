//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main() {
    int num,sum=0,counter;
    printf("Enter the number till you want sum : ");
    scanf("%d",&num);
    for(counter=1;counter<=num;counter+=2){
        sum=sum+counter;
    }
    printf("%d",sum);
    return 0;
}