#include<stdio.h>

int main(){
    int num1;printf("Enter the first number : "); scanf("%d",&num1);
    int num2; printf("Enter the second number : "); scanf("%d",&num2);
    int gcd,limit;
    if(num1>num2)
        limit=num2;
    else
        limit=num1;
    for(int i=1;i<=limit;i++){
        if(num1%i==0 && num2%i==0)
            gcd=i;
    }
    printf("%d",gcd);
}