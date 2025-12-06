#include <stdio.h>
#include <string.h>

int main() {
    char date[15];
    scanf("%s", date);   // input format: dd/mm/yyyy

    // Extract day, month, year
    char day[3], month[3], year[5];

    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Month abbreviations
    const char *months[] = {
        "Jan","Feb","Mar","Apr","May","Jun",
        "Jul","Aug","Sep","Oct","Nov","Dec"
    };

    // Convert month string "01"→0, "02"→1, ... "12"→11
    int m = (month[0]-'0') * 10 + (month[1]-'0') - 1;

    // Print final result
    printf("%s-%s-%s", day, months[m], year);

    return 0;
}
