//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
int main() {
    float num,sum=1,i,temp,rem;
    printf("Enter the number of terms :");
    scanf("%f",&num);
    for(i=1;i<num+1;++i){
    sum+=((2*i+1)/(2*i+2));
    }
    printf("%.2f",sum);
    return 0;
}