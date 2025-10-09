#include <stdio.h>

int isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main() {
    int year, days = 0;
    printf("Enter year: ");
    scanf("%d", &year);

    for (int i = 1; i < year; i++) {
        days += isLeap(i) ? 366 : 365;
    }

    int dayIndex = days % 7;
    char* weekDays[] = {
        "Monday", "Tuesday", "Wednesday", "Thursday",
        "Friday", "Saturday", "Sunday"
    };

    printf("01/01/%d is a %s\n", year, weekDays[dayIndex]);

    return 0;
}
