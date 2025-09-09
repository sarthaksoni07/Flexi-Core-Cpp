#include <stdio.h>
struct Student
{
    int roll;
    float marks;
    char name[15];
};

int main()
{
    struct Student s1, s2; // normal struct
    struct Student *ptr;   // pointer to struct
    struct Student *ptr1;  // pointer to struct

    ptr = &s1; // point to s1
    ptr1 = &s2;
    // accessing members using pointer
    (*ptr).roll = 20;    // dereferencing takin place inside the bracket
    (*ptr).marks = 88.5; // it mean go to the struct stored at ptr and then find out the marks attribute
    strcpy(ptr->name, "sarthak");
    (*ptr1).roll = 21;
    (*ptr1).marks = 70;
    printf("Roll: %d, Marks: %.2f\n", s1.roll, s1.marks);
    printf("Roll: %d, Marks: %.2f\n", s2.roll, s2.marks);
    return 0;
}
