#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int exponent = 1;  // starts with 1 (2^1 = 2)

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        long long term = pow(2, exponent);
        printf("%lld ", term);

        exponent *= 2;   // double the exponent for the next term
    }

    return 0;
}
