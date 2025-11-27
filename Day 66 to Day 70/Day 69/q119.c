//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
#define MAX_SIZE 100
int findDuplicate(int nums[], int n) {
    int seen[MAX_SIZE] = {0}; // Array to keep track of seen numbers

    for (int i = 0; i < n; i++) {
        if (seen[nums[i]] == 1) {
            return nums[i]; // Duplicate found
        }
        seen[nums[i]] = 1; // Mark this number as seen
    }

    return -1; // No duplicate found (should not happen as per problem statement)
}
int main() {
    int nums[MAX_SIZE];
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int duplicate = findDuplicate(nums, n);
    if (duplicate != -1) {
        printf("The repeated element is: %d\n", duplicate);
    } else {
        printf("No duplicate found\n");
    }

    return 0;
}
