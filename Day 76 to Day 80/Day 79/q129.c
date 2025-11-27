//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_FILENAME_LENGTH 100
int main() {
    char filename[MAX_FILENAME_LENGTH];
    FILE *file;
    int number;
    int sum = 0;
    int count = 0;
    double average;

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read integers from the file and compute sum and count
    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    // Close the file
    fclose(file);

    // Calculate average
    if (count > 0) {
        average = (double)sum / count;
    } else {
        average = 0.0; // Avoid division by zero
    }

    // Print the results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return EXIT_SUCCESS;
}
