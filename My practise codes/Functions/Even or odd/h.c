#include<stdio.h>
int iseven(int x);
int main(){
    int a;
    printf("%d\n",iseven(a));
    return 0;
}
int iseven(int x){
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%2==0){
        return 1;
    }
    else{
        return 0;
    }
    return 0;
}