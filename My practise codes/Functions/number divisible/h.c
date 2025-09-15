#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1)
        return 0;  // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; // not prime
    }
    return 1; // prime
}

// Function to print all prime divisors of a number
void printPrimeDivisors(int num) {
    printf("Prime divisors of %d are: ", num);
    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printPrimeDivisors(n);

    return 0;
}
