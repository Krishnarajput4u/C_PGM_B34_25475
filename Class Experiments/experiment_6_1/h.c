#include<stdio.h>

int factorial(int num){
    if(num==0)
        return 1;
    return num*factorial(num-1);
}
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int n,r;
    printf("Enter the \"n\" in the nCr you want to calculate : \n");
    scanf("%d",&n);
    printf("Enter the \"r\" in the nCr you want to calculate : \n");
    scanf("%d",&r);
    if(r>n){
        printf("Not possible as r is greater than n");
        return 0;
    }
    printf("%d",factorial(n)*(factorial(n-r)*factorial(r)));
}