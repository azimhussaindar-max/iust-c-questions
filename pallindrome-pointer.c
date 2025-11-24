#include <stdio.h>

int main() {
    char str[100];
    char *left, *right;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    left = str;

    // Move right pointer to end
    right = str;
    while (*right != '\0') right++;
    right--;

    // Remove newline if present
    if (*right == '\n') right--;

    int isPal = 1;

    while (left < right) {
        if (*left != *right) {
            isPal = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPal)
        printf("Palindrome string.\n");
    else
        printf("Not a palindrome.\n");

    return 0;
}
