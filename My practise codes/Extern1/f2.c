#include<stdio.h>
extern int count;
void PrintCount();
int main()
{
    printf("Count in f2.c = %d\n",count);
    PrintCount();
    return 0;
}
