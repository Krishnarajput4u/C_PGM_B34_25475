// main.c

#include <stdio.h>
#include "counter.h"

int main() {
    printf("Initial counter = %d\n", counter);
    increment();
    increment();
    printf("Final counter = %d\n", counter);
    return 0;
}
