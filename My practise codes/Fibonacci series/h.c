#include<stdio.h>
int main()
{
    int n,counter=1,c;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    c=1;int a=1,b;
    for(counter;counter<=n;counter++)
    {
        
        if(counter<=0){
            printf("please enter the positive number");
            break;
        }
        else{
            printf("%d\n",c);
            b=a+c;
            printf("%d\n",b);
            c=a;
            a=b;

        }
    }

    return 0;
}