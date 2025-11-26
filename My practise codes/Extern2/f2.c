#include<stdio.h>
extern int add(int a,int b);
int main()
{
    int sum=add(10,20);
    printf("Sum = %d\n",sum);
    return 0;
}