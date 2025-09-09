// dynamic malloc using structures in c
#include <stdio.h>

struct Student
{
    char name[15];
    int age;
    float height;
    int marks;
};

int main()
{
    int n;
    printf("please enter the number of students");
    scanf("%d", &n);

    struct Student *ptr;
    ptr = (struct Student *)malloc(n * sizeof(struct Student));

    // input student details
    for (int i = 0; i < n; i++)
    {
        
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Age ");
        scanf("%d", &ptr[i].age);
        printf("Marks: ");
        scanf("%f", &ptr[i].marks);
    }

    // print student details
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d -> age: %d, Marks: %.2f\n", i + 1, ptr[i].age, ptr[i].marks);
    }
    return 0;
}