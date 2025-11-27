//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_FILENAME_LENGTH 100
int main() {
    char sourceFilename[MAX_FILENAME_LENGTH];
    char destFilename[MAX_FILENAME_LENGTH];
    FILE *sourceFile, *destFile;
    char ch;

    // Get the source and destination filenames from the user
    printf("Enter the source filename: ");
    scanf("%s", sourceFilename);
    printf("Enter the destination filename: ");
    scanf("%s", destFilename);

    // Open the source file in read mode
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Could not open source file %s\n", sourceFilename);
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        printf("Could not open destination file %s\n", destFilename);
        fclose(sourceFile);
        return 1;
    }

    // Copy content from source file to destination file character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully to %s\n", destFilename);
    return 0;
}
