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

//  String Handling Functions (<string.h>)

// Since strings are just char arrays in C, these functions save a LOT of effort.

// strcpy(dest, src) → Copy string.

// strncpy(dest, src, n) → Copy at most n chars (safer).

// strlen(str) → Find length of a string.

// strcmp(s1, s2) → Compare 2 strings (returns 0 if equal).

// strncmp(s1, s2, n) → Compare first n chars.

// strcat(s1, s2) → Concatenate (append) s2 at end of s1.

// strncat(s1, s2, n) → Append only n chars.

// strchr(str, ch) → Find first occurrence of character.

// strstr(str, sub) → Find first occurrence of substring