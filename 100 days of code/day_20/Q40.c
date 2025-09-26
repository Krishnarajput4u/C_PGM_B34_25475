//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, num1 = 0, i = 0;
    printf("Enter a binary number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 0 && digit != 1) {
            printf("Wrong input! Not a binary number.\n");
            return 0;
        }

        if (digit == 0) {
            num1 = num1 + 1 * pow(10, i);
        } else {
            num1 = num1 + 0 * pow(10, i);
        }

        temp /= 10;
        ++i;
    }

    printf("1's Complement: %d\n", num1);
    return 0;
}
