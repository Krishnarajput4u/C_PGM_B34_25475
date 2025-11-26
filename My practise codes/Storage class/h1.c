//register
#include<stdio.h>
int counter(){
    register int count;
    count++;
    return count;
}

int main(){
    printf("%d",counter());
    return 0;
    printf("%d",GlobalVariable);
}