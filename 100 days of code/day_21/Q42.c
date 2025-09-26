//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>

int main() {
    int num,counter,sum=0;
    printf("Enter the number :  ");
    scanf("%d",&num);
    for(counter=1;counter<=num/2;++counter){
        if(num%counter==0){
            sum+=counter;
        }
    }
    
    if(sum==num){
        printf("%d is a perfect number",num);
    }
    else
        printf("Not a perfect number ");
    return 0;
}
