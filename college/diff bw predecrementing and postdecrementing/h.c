#include<stdio.h>
int main()
{
    printf("this code helps to know the difference between predecrementing and postdecrementing\n");
    printf("to get the precedecrementing value we use --a\n");
    printf("to get the postdecrementing value we use a--\n");
    int a,b;
    printf("enter the value of a\n");
    scanf("%d",&a);
    b=--a; //predecrementing
    printf("the value of b after predecrementing is %d\n",b);
    b=a--; //postdecrementing  
    printf("the value of b after postdecrementing is %d\n",b);





    return 0;
}