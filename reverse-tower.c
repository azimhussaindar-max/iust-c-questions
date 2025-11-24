#include <stdio.h>

int main() {
    int n = 5;   // total stars in the first row

    for (int i = n; i >= 1; i -= 1) {   // decreasing rows
        for (int j = 1; j <= i; j++) {  // print i stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
