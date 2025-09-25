//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include <stdio.h>

int main() {
    int num, counter,factors;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(counter=1;counter<=num;++counter){
        if(num%counter==0){
            printf("%d  ",counter);
            continue;
        }
    }
}
