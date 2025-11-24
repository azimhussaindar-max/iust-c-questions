#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // input with spaces

    // Find string length manually
    while (str[length] != '\0') {
        length++;
    }

    // Remove the newline character added by fgets
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Print in reverse
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
