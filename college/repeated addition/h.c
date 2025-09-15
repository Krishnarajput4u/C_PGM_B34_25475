#include<stdio.h>
int main()
{
    int a,b=1,c,d,e;
    printf("enter the value of a\n");
    scanf("%d",&a);
    while(b<=5){
        c=a+2;
        d=a+4;
        e=a+6;
        printf("%d\t%d\t%d\t%d\n",a,c,d,e);
        a+=3;
        b++;
        
        
    }
    return 0;
}