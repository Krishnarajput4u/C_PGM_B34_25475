#include<stdio.h>
int num(int x);
int main(){
    int a;
    printf("%d\n",num(a));
    return 0;
}
int num(int x){
    printf("Enter a number: ");
    scanf("%d",&x);
    return x;
}