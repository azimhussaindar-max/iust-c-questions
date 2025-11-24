#include <stdio.h>
#include <string.h>   // important for string functions

int main() {

    char str1[100] = "Hello";
    char str2[100] = "World";
    char copyStr[100];
    char revStr[100];

    // strlen() - length of string
    printf("Length of str1 = %lu\n", strlen(str1));

    // strcpy() - copy one string into another
    strcpy(copyStr, str1);
    printf("Copied string (copyStr) = %s\n", copyStr);

    // strrev() - reverse string (NOTE: available in some compilers like Turbo C)
    // For GCC, strrev() may not work.
    // If your compiler supports it:
    strcpy(revStr, str1);
    printf("Reversed string (revStr) = %s\n", strrev(revStr));

    // strcat() - concatenation of strings
    strcat(str1, str2);   // Hello + World
    printf("Concatenated string (str1) = %s\n", str1);

    // strcmp() - compare strings
    int result = strcmp("apple", "banana");
    if (result == 0)
        printf("Strings are equal\n");
    else if (result < 0)
        printf("apple comes before banana\n");
    else
        printf("apple comes after banana\n");

    return 0;
}
