#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Two real and distinct roots:\n");
        printf("x1 = %.2lf\nx2 = %.2lf\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("One real repeated root:\n");
        printf("x = %.2lf\n", root1);
    }
    else {
        double real = -b / (2*a);
        double imaginary = sqrt(-discriminant) / (2*a);
        printf("Complex roots:\n");
        printf("x1 = %.2lf + %.2lfi\n", real, imaginary);
        printf("x2 = %.2lf - %.2lfi\n", real, imaginary);
    }

    return 0;
}
