#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("enter the number");
    scanf("%d",&i);
    for(i;i>0;i=i/10){
        sum=sum+(i%10);
    }
    printf("%d",sum);
    return 0;
}