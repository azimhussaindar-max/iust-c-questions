#include <stdio.h>

int main() {
    int n = 5;   // last row has 5 stars

    for (int i = 2; i <= n; i++) {          // start from 2 stars
        for (int j = 1; j <= i; j++) {      // print i stars
            printf("*");
        }
        printf("\n");   // move to next line
    }

    return 0;
}
