#include <stdio.h>

int main() {
    int n;

    printf("Enter how many times to repeat the series: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {          // repeat n times
        for (int j = 1; j <= 5; j++) {      // print 1 2 3 4 5
            printf("%d ", j);
        }
    }

    return 0;
}
