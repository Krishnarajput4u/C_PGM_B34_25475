#include<stdio.h>
int main()
{
    unsigned int count = 1;
    while(count<=10){
        puts(count%2?"****":"++++++++");
        ++count;
    }








    return 0;
}