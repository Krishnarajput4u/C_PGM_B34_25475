//Write a program to apply left shift and right shift operator. 
#include <stdio.h>
int main(){
    int a=12; 
    int left_shift=a<<3; 
    int right_shift=a>>3; 
    printf("Left Shift of %d by 2 is: %d\n",a,left_shift);
    printf("Right Shift of %d by 2 is: %d\n",a,right_shift);
    return 0;
}