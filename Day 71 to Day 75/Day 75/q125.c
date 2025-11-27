//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_FILENAME_LENGTH 100
int main() {
    char filename[MAX_FILENAME_LENGTH];
    FILE *file;
    char newLine[256];

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar(); // Clear the newline character from the buffer

    // Open the file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Get the new line of text from the user
    printf("Enter the text to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    // Append the new line to the file
    fputs(newLine, file);

    // Close the file
    fclose(file);

    printf("File updated successfully with appended text.\n");
    return 0;
}
