#include<stdio.h>
int main()
{
    int i=2,j , isprime;
    for(i;i<=50;i++){
        isprime=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            printf("%d ",i);
        }
    }
    return 0;
}