#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a); 
    for(int i=a;i>0;i=i/10)
    {
        printf("%d",i%10);
    }
    return 0;
}