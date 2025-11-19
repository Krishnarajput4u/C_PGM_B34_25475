#include<stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("*p++ : %d\n", *p++);   // Pointer increment, value NOT incremented
    p = &a;                       // Reset p (important!)

    printf("(*p)++ : %d\n", (*p)++); // Value increment, pointer NOT incremented

    
    char c='A';
    char *cp=&c;
    printf("*cp++ : %d\n", *cp++);   
    cp = &c;                       

    printf("(*cp)++ : %d\n", (*cp)++); 

    return 0;
}
