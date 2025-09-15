#include<stdio.h>
int main()
{
    unsigned int number;
    printf("Enter a positive integer: ");
    scanf("%u", &number);
    while (number>0)
    {
        number=number*(number-1);
        number--;
    }
    printf("Factorial = %u", number);
    return 0;
}