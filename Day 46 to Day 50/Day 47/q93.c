//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>

#define MAX 100
#define CHAR 256
void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; // Convert to lowercase
        }
    }
}

int areAnagrams(char str1[], char str2[]) {
    int count[CHAR] = {0};

    // Count frequency of each character in str1
    for (int i = 0; str1[i]; i++) {
        count[(unsigned char)str1[i]]++;
    }

    // Decrease frequency based on characters in str2
    for (int i = 0; str2[i]; i++) {
        count[(unsigned char)str2[i]]--;
    }

    // If all counts are zero, they are anagrams
    for (int i = 0; i < CHAR; i++) {
        if (count[i] != 0) {
            return 0; // Not anagrams
        }
    }
    return 1; // Anagrams
}

int main() {
    char str1[MAX], str2[MAX];

    printf("Enter first string: ");
    fgets(str1, MAX, stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character

    printf("Enter second string: ");
    fgets(str2, MAX, stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character

    // Convert both strings to lowercase
    toLowerCase(str1);
    toLowerCase(str2);

    if (areAnagrams(str1, str2)) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}