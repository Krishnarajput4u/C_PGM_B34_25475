//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int factorial(int n);
int main() {
    int num,sum=0,i,temp,rem;
    printf("Enter the number : ");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        rem=temp%10;
        temp/=10;
        sum+=factorial(rem);
    }
    if(num==sum)
        printf("The number is a Strong Number");
    else
        printf("The number is not a Strong Number");
    return 0;
}
int factorial(int n){
        int j=1;
        for(int i=n;i>0;--i){
            j*=i;
        }
        return j;
}