//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/


#include <stdio.h>
#include <string.h>
#define MAX 100
#define WORD 20
int main() {
    char str[MAX], longest[WORD];
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    char *token = strtok(str, " ");
    while (token != NULL) {
        int length = strlen(token);
        if (length > maxLength) {
            maxLength = length;
            strcpy(longest, token);
        }
        token = strtok(NULL, " ");
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
