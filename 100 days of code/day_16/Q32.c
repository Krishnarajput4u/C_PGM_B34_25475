//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main(){
    
    int num,rev=0,temp;
    printf("Enter the number : ");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        rev=rev*10+temp%10;
        temp/=10;
    }
    if(rev==num)
        printf("The number is a palindrome");
    else
        printf("The number is not a palindrome ");
    
    return 0;
}