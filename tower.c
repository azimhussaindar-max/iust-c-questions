#include <stdio.h>

int main() {
    int n = 4;   // number of rows

    for (int i = 1; i <= n; i++) {          // rows
        for (int j = 1; j <= i; j++) {      // print * i times
            printf("*");
        }
        printf("\n");     // move to next line
    }

    return 0;
}
