//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main() {
    char operator;
    int num1, num2;

    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); 

    switch (operator) {
        case '+':
            printf("The sum is: %d\n", num1 + num2);
            break;
        case '-':
            printf("The difference is: %d\n", num1 - num2);
            break;
        case '*':
            printf("The product is: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not defined.\n");
            } else {
                printf("The quotient is: %d\n", num1 / num2);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("Error: Modulus by zero is not defined.\n");
            } else {
                printf("The remainder is: %d\n", num1 % num2);
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
