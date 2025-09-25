//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main() {
    int num, temp, sum = 0, rem;

    printf("Enter the number : ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        rem = temp % 10;   // get last digit
        sum += rem;        // add to sum
        temp /= 10;        // remove last digit
    }

    printf("The sum of digits is : %d\n", sum);

    return 0;
}
