//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

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
    printf("The LCM is : %d",num1*num2/hcf);
}
