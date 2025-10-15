#include <stdio.h>

int main() {
    {
        int x = 10;
        printf("Inside Block A, x = %d\n", x);
    }

    int y = 20;
    {
        printf("Inside Block B, y = %d\n", y);
        int z = 30;
        printf("Inside Block B, z = %d\n", z);
    }

    return 0;
}
