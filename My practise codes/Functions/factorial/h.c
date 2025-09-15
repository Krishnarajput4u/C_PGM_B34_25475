// Online C compiler to run C program online
#include <stdio.h>
int  factorial(int x);
int main() {
    int fac;
    printf("enter the no. : ");
    scanf("%d",&fac);
    printf("%d\n",factorial(fac));
    return 0;
}
int  factorial(int x){
    int counter;
    int final=1;
    for(counter=1;counter<=x;counter++){
        final=final*counter;
    }
    return final;
}