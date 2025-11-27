//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_FILENAME_LENGTH 100
#define MAX_NAME_LENGTH 50
int main() {
    char filename[MAX_FILENAME_LENGTH];
    FILE *file;
    int n, i;
    char name[MAX_NAME_LENGTH];
    int roll;
    int marks;

    // Get the filename from the user
    printf("Enter the filename to store student records: ");
    scanf("%s", filename);

    // Open the file in write mode
    file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return EXIT_FAILURE;
    }

    // Get number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student records and write to file
    for (i = 0; i < n; i++) {
        printf("Enter details for student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(file, "%s %d %d\n", name, roll, marks);
    }

    // Close the file after writing
    fclose(file);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }

    // Read and display student records from the file
    printf("\nStudent Records:\n");
    while (fscanf(file, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    // Close the file after reading
    fclose(file);

    return EXIT_SUCCESS;
}