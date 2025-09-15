#include<stdio.h>
int main()
{
    int number,sum=0;
    printf("Enter a number:");
    scanf("%d",&number);
    while(1)
    {
        if(number<0)
            printf("Invalid input");
        else
        {
            while(number>0)
            {
                sum=sum+(number%10);
                number=number/10;
            }
            printf("sum of digits is %d",sum);
        }
        break;
    }
    return 0;
}