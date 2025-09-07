#include <stdio.h>
struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s1;       // normal struct
    struct Student *ptr;     // pointer to struct

    ptr = &s1;               // point to s1

    // accessing members using pointer
    (*ptr).roll = 20;
    (*ptr).marks = 88.5;

    printf("Roll: %d, Marks: %.2f\n", s1.roll, s1.marks);
    return 0;
}
