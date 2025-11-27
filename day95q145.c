#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to return the top student
struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex]; // return structure
}

int main() {
    int n = 3;

    struct Student students[3] = {
        {"Riya", 101, 89},
        {"Karan", 102, 96},
        {"Meena", 103, 92}
    };

    struct Student top = getTopStudent(students, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           top.name, top.roll, top.marks);

    return 0;
}
