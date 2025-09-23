//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include<stdio.h>
#include<math.h>
int main(){
    int principal_amount, rate_of_interest, time_period;
    float simple_interest,compound_interest;
    printf("Enter the principal amount : ");
    scanf("%d",&principal_amount);
    printf("Enter the rate of interest : ");
    scanf("%d",&rate_of_interest);
    printf("Enter the time period : ");
    scanf("%d",&time_period);
    simple_interest = (principal_amount * rate_of_interest * time_period)/100.0;
    compound_interest = principal_amount * (pow((1 + rate_of_interest / 100.0), time_period)) - principal_amount;
    printf("The simple interest is %f\n",simple_interest);
    printf("The compound interest is %f",compound_interest);
    return 0;
}