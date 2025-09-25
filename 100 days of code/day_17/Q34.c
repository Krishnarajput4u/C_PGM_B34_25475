//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main() {
    int num, counter, isPrime = 1;
    printf("Enter the number : ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("The number is not prime");
        return 0;
    }

    for (counter = 2; counter <= num / 2; ++counter) {
        if (num % counter == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("The number is prime");
    else
        printf("The number is not prime");

    return 0;
}
