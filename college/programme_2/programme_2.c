#include <stdio.h>

int main() {
    int a,b,counter;
    while(counter != -1){
        printf("Enter a number (-1 to exit): ");
        scanf("%d", &a);
        b=a*0.09+200;
        printf("The result is: %d\n", b);
    }
    return 0;
}