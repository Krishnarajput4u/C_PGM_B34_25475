#include <stdio.h>

// Define a structure to store a complex number
struct Complex {
    int real;
    int imag;
};

// Function to take input of a complex number
struct Complex inputComplex() {
    struct Complex c;
    printf("Enter the real part: ");
    scanf("%d", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%d", &c.imag);
    return c;  // return the entered complex number
}

// Function to print a complex number
void printComplex(struct Complex c) {
    printf("Complex number: %d + %di\n", c.real, c.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

int main() {
    int choice;
    struct Complex num1, num2, result;

    printf("Choose an option:\n");
    printf("1. Enter and display a complex number\n");
    printf("2. Add two complex numbers\n");
    printf("3. Subtract two complex numbers\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            num1 = inputComplex();
            printComplex(num1);
            break;

        case 2:
            printf("Enter first complex number:\n");
            num1 = inputComplex();
            printf("Enter second complex number:\n");
            num2 = inputComplex();
            result = addComplex(num1, num2);
            printf("After addition:\n");
            printComplex(result);
            break;

        case 3:
            printf("Enter first complex number:\n");
            num1 = inputComplex();
            printf("Enter second complex number:\n");
            num2 = inputComplex();
            result = subComplex(num1, num2);
            printf("After subtraction:\n");
            printComplex(result);
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
