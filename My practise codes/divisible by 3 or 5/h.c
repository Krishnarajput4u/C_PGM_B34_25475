#include <stdio.h>

int main() {
    int N, total = 0;
    printf("Enter a number: ");
    scanf("%d", &N);

    while (N != 0) {
        if (N % 3 == 0 || N % 5 == 0) {
            total = total + N;
        }
        N--;  // always decrease
    }

    printf("%d\n", total);
    return 0;
}
