//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX_FILENAME_LENGTH 100
int main() {
    char filename[MAX_FILENAME_LENGTH];
    FILE *file;
    int characters = 0, words = 0, lines = 0;
    char ch;
    bool inWord = false;

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n') {
            lines++;
        }

        // Count words
        if (isspace(ch)) {
            inWord = false;
        } else {
            if (!inWord) {
                words++;
                inWord = true;
            }
        }
    }

    // If the file is not empty and does not end with a newline, count the last line
    if (characters > 0 && ch != '\n') {
        lines++;
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
