#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int marks;
    char name[15];
    int age;
};

int main()
{
    // we will learn about structures in cpp which we will also use in c language here
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("%d\n", *(arr + 3));
    // some concepts of pointers

    struct Student s1 = {93, "sarthak", 20};
    printf("%d\n", s1.age);

    // malloc calloc and realloc usage

    // syntax = (type*) malloc/calloc(size * n )

    int *p;
    int *q;
    p = (int *)malloc(5 * sizeof(int));
    q = (int *)calloc(5 , sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        p[i] = 1 + i;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", p[i]);
    }

    p = (int *)realloc(p, 8 * sizeof(int));

    for (int i = 0; i < 8; i++)
    {
        p[i] = 1 + i;
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d", p[i]);
    }
}