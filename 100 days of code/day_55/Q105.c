#include <stdio.h>

int main() {
    int num;
    printf("Enter size of array: ");
    scanf("%d", &num);

    int arr[num];
    for (int i = 0; i < num; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int candidate = arr[0], count = 1;

    for (int i = 1; i < num; i++) {
        if (arr[i] == candidate)
            count++;
        else
            count--;

        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }

    // Verify candidate
    count = 0;
    for (int i = 0; i < num; i++) {
        if (arr[i] == candidate)
            count++;
    }

    if (count > num / 2)
        printf("Majority element is %d\n", candidate);
    else
        printf("No majority element found.\n");

    return 0;
}
