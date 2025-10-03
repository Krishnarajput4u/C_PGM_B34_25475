#include <stdio.h>

int main() {
    int i, size1, size2;

    // Input sizes
    printf("Enter the size of first array: ");
    scanf("%d", &size1);

    printf("Enter the size of second array: ");
    scanf("%d", &size2);

    int array1[size1], array2[size2];
    int array3[size1 + size2]; // Concatenated array

    // Input for array1
    printf("Enter elements of first array:\n");
    for (i = 0; i < size1; i++) {
        printf("array1[%d] = ", i);
        scanf("%d", &array1[i]);
    }

    // Input for array2
    printf("Enter elements of second array:\n");
    for (i = 0; i < size2; i++) {
        printf("array2[%d] = ", i);
        scanf("%d", &array2[i]);
    }

    // Copy array1 to array3
    for (i = 0; i < size1; i++) {
        array3[i] = array1[i];
    }

    // Copy array2 to array3 after array1
    for (i = 0; i < size2; i++) {
        array3[size1 + i] = array2[i];
    }

    // Print the concatenated array
    printf("Concatenated array:\n");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", array3[i]);
    }
    printf("\n");

    return 0;
}
