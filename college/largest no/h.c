#include<stdio.h>
int main()
{
    int number,largest ,counter =1;
    while(counter !=-1){
        printf("enter the no. ");
        scanf("%d",&number);
        if (number == -1){
            break;
        }
        else if(counter == 1){
            largest = number;
        }
        else if(number > largest){
            largest = number;
        }
        counter++;
    }
    printf("the largest no. is : %d",largest);




    return 0;
}