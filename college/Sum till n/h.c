#include<stdio.h>
int main()
{
    int a;
    printf("enter the number till which you want the sum of");
    scanf("%d",&a);
    int counter=1,sum=0;
    for(counter;counter<=a;++counter){
        sum=sum+counter;
    }
    printf("%d",sum);
    return 0;
}