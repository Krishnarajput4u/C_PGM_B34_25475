//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

int main() {
    int num,rev=0,counter,temp;
    printf("Enter the number : ");
    scanf("%d",&num);
    temp=num;
    for(counter=num;counter>0;counter/=10){
        rev=rev*10+temp%10;
        temp/=10;
    }
    printf("%d",rev);
    return 0;
}