#include<stdio.h>
int main()
{
    int a=0 ,b=1,c,d,e;
    
    while(b<=10){
        a++;
        b++;
        
        int c= a*10;
        int d= a*100;
        int e= a*1000;
        printf("%d\t%d\t%d\t%d\n",a,c,d,e);
    }







    return 0;
}