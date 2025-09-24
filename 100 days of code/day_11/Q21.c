//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include<stdio.h>
int main(){
    int month;
    printf("Enter the number bw 1 and 12 : ");
    scanf("%d",&month);
    switch(month){
        case 1:
            printf("January\nNumber of days 31");
            break;
        case 2:
            printf("February\nNumber of days 28/29");
            break;
        case 3:
            printf("March\nNumber of days 31");
            break;
        case 4:
            printf("April\nNumber of days 30");
            break;
        case 5:
            printf("May\nNumber of days 31");
            break;
        case 6:
            printf("June\nNumber of days 30");
            break;
        case 7:
            printf("July\nNumber of days 31");
            break;
        case 8:
            printf("August\nNumber of days 31");
            break;
        case 9:
            printf("September\nNumber of days 30");
            break;
        case 10:
            printf("October\nNumber of days 31");
            break;
        case 11:
            printf("November\nNumber of days 30");
            break;
        case 12:
            printf("December\nNumber of days 31");
            break;
        default:
            printf("Invalid Input");
    }
    return 0;
}