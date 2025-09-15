#include<stdio.h>
int main()
{
    int hours,hourly_rate;
    float salary;
    while(1){
        printf("ener the the no. of hours ");
        scanf("%d",&hours);
        if (hours==-1)
            break;
        printf("enter the hourly rate ");
        scanf("%d",&hourly_rate);
        if (hours<=40)
            salary=hours*hourly_rate;
        else
            salary=40*hourly_rate+(hours-40)*hourly_rate*1.5;
        printf("the salary is %.2f\n",salary);
    }

    return 0;






}