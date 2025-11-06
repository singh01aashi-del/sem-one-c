//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char name[MAX];
    printf("Enter a name: ");
    fgets(name, MAX, stdin);
    name[strcspn(name, "\n")] = 0; // Remove newline character

    int len = strlen(name);
    int i;

    // Print the first initial
    if (len > 0 && name[0] != ' ') {
        printf("%c.", name[0]);
    }

    // Print initials of subsequent words
    for (i = 1; i < len; i++) {
        if (name[i] == ' ' && i + 1 < len && name[i + 1] != ' ') {
            printf("%c.", name[i + 1]);
        }
    }
    printf("\n");
    return 0;
}
