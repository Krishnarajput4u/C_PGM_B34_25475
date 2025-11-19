#include<stdio.h>

void function(int *a, int *b){
    ++(*a);
    ++(*b);
} 

int main(){
    int i,j;
    int *p=&i;
    int *po =&j;
    printf("Enter the first integers: ");
    scanf("%d",p);
    printf("Enter the second integers: ");
    scanf("%d",po);
    function(p,po);
    printf("Incrementing both integers by 1:\n");
    printf("First integer: %d\n",*p);
    printf("Second integer: %d\n",*po);
    return 0;   
}
  