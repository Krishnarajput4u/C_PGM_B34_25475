//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>

void productExceptSelf(int* nums, int n, int* answer) {
    int i;
    int prefix = 1;

    
    for (i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for (i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int answer1[n1];
    productExceptSelf(nums1, n1, answer1);

    printf("Output 1: [");
    for (int i = 0; i < n1; i++) {
        printf("%d", answer1[i]);
        if (i < n1 - 1) printf(",");
    }
    printf("]\n");

    int nums2[] = {-1, 1, 0, -3, 3};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    int answer2[n2];
    productExceptSelf(nums2, n2, answer2);

    printf("Output 2: [");
    for (int i = 0; i < n2; i++) {
        printf("%d", answer2[i]);
        if (i < n2 - 1) printf(",");
    }
    printf("]\n");

    return 0;
}
