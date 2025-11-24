#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);   // reads a single word (no spaces)

    printf("You entered: %s\n", str);

    return 0;
}
