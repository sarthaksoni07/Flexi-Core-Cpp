#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char dest[50];

    // strcpy   
    strcpy(dest, str1);
    printf("strcpy: dest = %s\n", dest);

    // strncpy
    strncpy(dest, str2, 3);
    dest[3] = '\0'; // Ensure null-termination
    printf("strncpy: dest = %s\n", dest);

    // strlen
    printf("strlen: length of str1 = %zu\n", strlen(str1));

    // strcmp
    printf("strcmp: str1 vs str2 = %d\n", strcmp(str1, str2));

    // strncmp
    printf("strncmp: first 3 chars of str1 vs str2 = %d\n", strncmp(str1, str2, 3));

    // strcat
    strcpy(dest, str1); // Reset dest to "Hello"
    strcat(dest, str2);
    printf("strcat: dest = %s\n", dest);

    // strncat
    strcpy(dest, str1); // Reset dest to "Hello"
    strncat(dest, str2, 3);
    printf("strncat: dest = %s\n", dest);

    // strchr
    char *ch = strchr(str1, 'l');
    if (ch)
        printf("strchr: 'l' found at position %ld in str1\n", ch - str1);
    else
        printf("strchr: 'l' not found in str1\n");

    // strstr
    char *sub = strstr(str1, "ll");
    if (sub)
        printf("strstr: \"ll\" found at position %ld in str1\n", sub - str1);
    else
        printf("strstr: \"ll\" not found in str1\n");

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