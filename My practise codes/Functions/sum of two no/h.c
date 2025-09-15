#include<stdio.h>

int greet(int x,int y);

int main() {
    int w,z;
    printf("Enter two numbers: ");
    scanf("%d %d",&w,&z);
    printf("%d\n", greet(w,z));
    return 0;
}
int greet(int x,int y) {
    return x+y;
}