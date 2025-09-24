/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include<stdio.h>
int main(){
    int days,fine,total;
    printf("Enter the number of Late days ");
    scanf("%d",&days);
    if(days>=1 && days<=5){
        printf("The fine is %d",days*2);
    }
    else if(days>=6 && days<=10){
        printf("The fine is %d",10+(days-5)*4);
    }
    else if(days>=11 && days<=30){
        printf("The fine is %d",30+(days-10)*6);
    }
    else
        printf("Membership cancelled");
    return 0;
}