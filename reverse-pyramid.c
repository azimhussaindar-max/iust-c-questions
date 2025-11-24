#include <stdio.h>

int main() {
    int n = 4;   // number of rows

    for (int i = 1; i <= n; i++) {        // controls rows
        for (int j = 1; j <= i; j++) {    // print i stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
