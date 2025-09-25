//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int main() {
    int num1,num2,hcf,counter,i;
    printf("Enter the numbers : ");
    scanf("%d%d",&num1,&num2);
    if(num1>=num2){
        i=num2;
    }
    else
        i=num1;
    for(counter=1;counter<=i;++counter){
        if(num1%counter==0 && num2%counter==0){
            hcf=counter;
            continue;
        }
    }
    printf("The HCF is : %d",hcf);
}
