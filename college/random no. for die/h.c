#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    while(i!=-1){
        i=1+rand()%6;
        printf("The random number for die is %d\n",i);
        printf("Enter -1 to exit or any other number to continue\n");
        scanf("%d",&i);        
    }
    return 0;
}