#include <stdio.h>

int main() {
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    int num;

    printf("Enter numbers one by one (enter 999 to quit):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 999) {  // special number to quit
            break;
        }

        if (num > 0) {
            positive_count = positive_count + 1;
        } else if (num < 0) {
            negative_count = negative_count + 1;
        } else {
            zero_count = zero_count + 1;
        }
    }

    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Zeroes: %d\n", zero_count);

    return 0;
}
