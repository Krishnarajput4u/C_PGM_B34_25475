#include <stdio.h>

int main() {
    int len,wid;
    printf("Enter Length : ");
    scanf("%d",&len);
    printf("Enter Width : ");
    scanf("%d",&wid);
    printf("The Perimeter is : %d\n",2*(len+wid));
    printf("The Area is : %d",len*wid);
    return 0;
}
