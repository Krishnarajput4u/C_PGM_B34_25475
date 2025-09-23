#include<stdio.h>
# define SIZE 5
int main(){
    int food[SIZE];
    size_t i;
    int x;
    float total = 0.0;
    for(i = 0; i < SIZE; ++i) {
        printf("Rate the food from 1 to 10 :");
        scanf("%d",&x); 
        if(x>=0 && x<=10){
            food[i] = x;
        }
        else{
            --i;
            printf("Invalid input. Please enter a rating between 1 and 10.\n");
        }
               
    }
    for(i=0; i < SIZE; ++i) {
        total += food[i];
    }
    total /= SIZE;
    printf("The average rating is: %.2f\n", total);
    return 0;
}