#include <stdio.h>
#include "../uint8192.h"

int main()
{
    char buf[2048]; // 8 * 2048 = 8192 bytes
    uint8192_t f;
    unsigned int number;
    printf("Enter a positive integer: ");
    scanf("%u", &number);
    if (number > 966) fprintf(stderr, "overflow\n");
    uint8192_factorial(&f, number);
    uint8192_to_decimal(&f, buf, sizeof buf);

    printf("Factorial = %s", buf);
    return 0;
}
