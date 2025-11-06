//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/

#include <stdio.h>
void find_ceil_index(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] >= x) {
            printf("%d\n", i);
            return;
        }
    }
    printf("-1\n");
}
int main() {
    int arr[100], size, x;
    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);
    printf("Enter the elements of the sorted array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the integer x: ");
    scanf("%d", &x);
    find_ceil_index(arr, size, x);
    return 0;
}

