#include <stdio.h>

int main() {
    int rows = 4;
    int cols = 7;

    for (int i = 1; i <= rows; i++) {        // loop for rows
        for (int j = 1; j <= cols; j++) {    // loop for columns
            printf("*");
        }
        printf("\n");  // move to next line
    }

    return 0;
}
