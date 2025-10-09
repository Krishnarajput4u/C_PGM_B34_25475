#include <stdio.h>

int main() {
    float cel;
    printf("Enter Temprature : ");
    scanf("%f",&cel);
    printf("The temprature in Fahrenheit is : %.2f\n",cel*9/5+32);
}
