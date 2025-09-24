//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>

int main() {
    int num,fac=1,counter;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(counter=1;counter<=num;++counter){
        fac*=counter;
    }
    printf("%d",fac);
    return 0;
}