//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include <stdio.h>
int main() {
    FILE *file;
    char line[100];

    // Opening the existing file in read mode
    file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Reading and printing each line until EOF
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Closing the file
    fclose(file);

    return 0;
}
