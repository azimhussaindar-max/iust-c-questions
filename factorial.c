#include <stdio.h>

int main() {
    int n;
    long long fact = 1;   // use long long for large factorials

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %lld\n", n, fact);
    }

    return 0;
}
