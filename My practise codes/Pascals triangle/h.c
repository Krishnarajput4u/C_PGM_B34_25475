#include <stdio.h>

int main() {
    int num;

    printf("Enter the number of rows: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        int value = 1;
        for (int space = 0; space < num - i - 1; space++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%4d", value);

            value = value * (i - j) / (j + 1);  //Main calculation
        }

        printf("\n");
    }

    return 0;
}