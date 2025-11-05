#include<stdio.h>

int GCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}


int main(){
    int num1;printf("Enter the first number : "); scanf("%d",&num1);
    int num2; printf("Enter the second number : "); scanf("%d",&num2);
    GCD(num1,num2);
    int gcd = GCD(num1,num2);
    printf("%d",gcd);
    return 0;
}