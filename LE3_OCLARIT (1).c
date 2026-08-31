#include <stdio.h>

int main() {
    char name[100];
    char section[50];
    double num1, num2;

    // Read full name (including spaces) using scanf
    printf("Enter Complete Name: ");
    scanf(" %[^\n]s", name);

    // Read section (including spaces) using scanf
    printf("Enter Section: ");
    scanf(" %[^\n]s", section);

    // Read numerical inputs
    printf("\nEnter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Display output matching the exercise format
    printf("\n  Student Calculator\n");
    printf("Student name: %s\n", name);
    printf("Section: %s\n", section);
    printf("  Results:\n");
    printf("  %.0f + %.0f = %.0f\n", num1, num2, num1 + num2);
    printf("  %.0f - %.0f = %.0f\n", num1, num2, num1 - num2);
    printf("  %.0f * %.0f = %.0f\n", num1, num2, num1 * num2);

    if (num2 != 0) {
        printf("  %.0f / %.0f = %.2f\n", num1, num2, num1 / num2);
    } else {
        printf("  %.0f / %.0f = Undefined\n", num1, num2);
    }

    return 0;
}
    