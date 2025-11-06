//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>
#define MAX 100
#define WORD 20
void reverseString(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}
int main() {
    char str[MAX];
    printf("Enter a sentence: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    char *token = strtok(str, " ");
    while (token != NULL) {
        reverseString(token);
        printf("%s ", token);
        token = strtok(NULL, " ");
    }
    printf("\n");
    return 0;
}
