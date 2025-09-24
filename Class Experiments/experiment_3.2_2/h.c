
#include <stdio.h>

int main() {
    int num,i,j;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=1;i<=10;++i){
        j=i*num;
        printf("%d*%d=%d\n",num,i,j);
    }
    return 0;
}