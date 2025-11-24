#include <stdio.h>

int main() {
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade: A\n");
    }
    else if (percentage >= 75 && percentage < 90) {
        printf("Grade: B\n");
    }
    else if (percentage >= 60 && percentage < 75) {
        printf("Grade: C\n");
    }
    else if (percentage >= 45 && percentage < 60) {
        printf("Grade: D\n");
    }
    else if (percentage >= 33 && percentage < 45) {
        printf("Grade: E\n");
    }
    else if (percentage >= 0 && percentage < 33) {
        printf("Grade: F (Fail)\n");
    }
    else {
        printf("Invalid percentage! Enter between 0–100.\n");
    }

    return 0;
}
