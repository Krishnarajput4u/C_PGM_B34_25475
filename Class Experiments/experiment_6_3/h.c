#include<stdio.h>
int main(){
    struct s{
        int a;
        char b;
    };
    printf("%d",sizeof(struct s));
    return 0;
}