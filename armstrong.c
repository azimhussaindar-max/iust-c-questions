#include <stdio.h>

// Function to compute a^b (integer power)
long long int_pow(int a, int b) {
    long long result = 1;
    for (int i = 1; i <= b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    long long num;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0) {
        printf("Negative numbers cannot be Armstrong numbers.\n");
        return 0;
    }

    long long original = num;
    int digits = 0;
    long long tmp = num;

    // Count digits
    if (tmp == 0)
        digits = 1;
    else {
        while (tmp > 0) {
            digits++;
            tmp /= 10;
        }
    }

    // Calculate Armstrong sum
    tmp = num;
    long long sum = 0;
    while (tmp > 0) {
        int d = tmp % 10;
        sum += int_pow(d, digits);
        tmp /= 10;
    }

    // Check Armstrong
    if (sum == original)
        printf("%lld is an Armstrong number.\n", original);
    else
        printf("%lld is not an Armstrong number.\n", original);

    return 0;
}
