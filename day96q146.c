#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining;
};

int main() {
    struct Employee e = {"Raj", 11, {12, 5, 2020}};

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name, e.id, e.joining.day, e.joining.month, e.joining.year);

    return 0;
}
