//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/



#include<stdio.h>
int main(){
    char character;
    printf("Enter a character : ");
    scanf("%c",&character);
    if(character >= 'a' && character <= 'z') {
        printf("%c is a lowercase letter",character);
    }
    else if(character >= 'A' && character <= 'Z'){
        printf("%c is an uppercase letter",character);  
    }
    else if(character >= '0' && character <= '9'){
        printf("%c is a digit",character);
        
    }
    else{
        printf("special character");
    }
    return 0;
}