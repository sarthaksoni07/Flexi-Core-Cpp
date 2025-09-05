//struct in c language
#include<stdio.h>
 
struct student
{
    int marks;
    char name[15];
    float height;
};

int main(){
struct student s1;
s1.marks=30;
s1.height = 178.5;
return 0;
}