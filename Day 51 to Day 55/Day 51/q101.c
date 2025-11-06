//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>
#include <string.h>
void find_first_last_occurrence(int nums[], int size, int target) {
    int first = -1, last = -1;
    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }
    printf("%d,%d\n", first, last);
}

int main() {
    int nums[100], size, target;
    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);
    printf("Enter the elements of the sorted array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target integer: ");
    scanf("%d", &target);
    find_first_last_occurrence(nums, size, target);
    return 0;
}