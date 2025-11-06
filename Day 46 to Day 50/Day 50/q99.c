//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char date[MAX];
    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, MAX, stdin);
    date[strcspn(date, "\n")] = 0; // Remove newline character

    // Check if the input format is correct
    if (strlen(date) != 10 || date[2] != '/' || date[5] != '/') {
        printf("Invalid date format\n");
        return 1;
    }

    // Extract day, month, and year
    char day[3], month[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Convert month from "04" to "Apr"
    char monthStr[4];
    if (strcmp(month, "01") == 0) {
        strcpy(monthStr, "Jan");
    } else if (strcmp(month, "02") == 0) {
        strcpy(monthStr, "Feb");
    } else if (strcmp(month, "03") == 0) {
        strcpy(monthStr, "Mar");
    } else if (strcmp(month, "04") == 0) {
        strcpy(monthStr, "Apr");
    } else if (strcmp(month, "05") == 0) {
        strcpy(monthStr, "May");
    } else if (strcmp(month, "06") == 0) {
        strcpy(monthStr, "Jun");
    } else if (strcmp(month, "07") == 0) {
        strcpy(monthStr, "Jul");
    } else if (strcmp(month, "08") == 0) {
        strcpy(monthStr, "Aug");
    } else if (strcmp(month, "09") == 0) {
        strcpy(monthStr, "Sep");
    } else if (strcmp(month, "10") == 0) {
        strcpy(monthStr, "Oct");
    } else if (strcmp(month, "11") == 0) {
        strcpy(monthStr, "Nov");
    } else if (strcmp(month, "12") == 0) {
        strcpy(monthStr, "Dec");
    } else {
        printf("Invalid month\n");
        return 1;
    }

    // Print the reformatted date
    printf("%s-%s-%s\n", day, monthStr, year);
    return 0;
}
