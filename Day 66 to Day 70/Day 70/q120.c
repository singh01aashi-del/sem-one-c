//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_LENGTH 1000
void toSentenceCase(char *str) {
    int n = strlen(str);
    int capitalizeNext = 1; // Flag to indicate if the next character should be capitalized

    for (int i = 0; i < n; i++) {
        if (isspace(str[i])) {
            capitalizeNext = 1; // Next character should be capitalized
        } else if (capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]); // Capitalize the character
            capitalizeNext = 0; // Reset the flag
        } else {
            str[i] = tolower(str[i]); // Convert to lowercase
        }
    }
}
int main() {
    char str[MAX_LENGTH];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline character

    toSentenceCase(str);
    printf("The string in sentence case is: %s\n", str);

    return 0;
}