#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int total_sum=num*(num+1)/2;
    int left=0;
    if(num==1){
        printf("1");
        return 0;
    }
    for(int i=1;i<=num;++i){
        left+=i;
        int right=total_sum - left+i;
        if(right==left){
            printf("The pivot Integer is %d",i);
            return 0;
        }
    }
    printf("-1");
}