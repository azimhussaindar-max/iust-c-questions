#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Roll No.: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    int topperIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("\nTopper of the class:\n");
    printf("Roll No.: %d\n", s[topperIndex].roll);
    printf("Marks: %.2f\n", s[topperIndex].marks);

    return 0;
}
