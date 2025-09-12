#include<stdio.h>
int main()
{
    int principle,rate,days,interest;
    while(principle != -1){
        printf("Enter principle amount (-1 to exit): ");
        scanf("%d",&principle);
        if(principle == -1){
            break;
        }
        printf("Enter rate of interest: ");
        scanf("%d",&rate);
        printf("Enter number of days: ");
        scanf("%d",&days);
        interest=(principle*rate*days)/365;
        printf("The interest is: %d\n",interest);
    }
    return 0;
}