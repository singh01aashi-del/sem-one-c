// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open input.txt in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt for reading!\n");
        return 1;
    }

    // Open output.txt in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not open output.txt for writing!\n");
        fclose(inputFile);
        return 1;
    }

    // Read from input.txt, convert to uppercase, and write to output.txt
    while ((ch = fgetc(inputFile)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A'); // Convert to uppercase
        }
        fputc(ch, outputFile);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("Conversion completed. Check output.txt for results.\n");
    return 0;
}
