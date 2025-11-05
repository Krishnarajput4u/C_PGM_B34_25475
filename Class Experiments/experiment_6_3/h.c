/*Develop a recursive function FIBO (num) that accepts an integer argument. 
Write a C program that invokes this function to generate the Fibonacci 
sequence up to num.  */
#include <stdio.h>  
int FIBO(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return FIBO(n - 1) + FIBO(n - 2);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci sequence up to %d:\n", num);
    for (int i = 0; i < num; i++) {
        printf("%d ", FIBO(i));
    }
    return 0;
}