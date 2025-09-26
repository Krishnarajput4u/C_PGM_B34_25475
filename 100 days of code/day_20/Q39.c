//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    int num, temp, product = 1, rem;
    int hasOdd = 0; 

    printf("Enter the number : ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        rem = temp % 10;       
        if (rem % 2 != 0) {   
            product *= rem;
            hasOdd = 1;
        }
        temp /= 10;           
    }

    if (hasOdd)
        printf("The product of odd digits is : %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
