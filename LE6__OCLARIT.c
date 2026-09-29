#include <stdio.h>

// Function declarations
float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

int main() {
    float num1, num2, result;
    int choice;

    do {
        printf("\nMultiple functions to perform Arithmetic Operations\n");

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        printf("\nChoose Operation:\n");
        printf("[1] Addition\n");
        printf("[2] Subtraction\n");
        printf("[3] Multiplication\n");
        printf("[4] Division\n");
        printf("[5] Exit Program\n");

        printf("\nEnter choice [1-5]: ");
        scanf("%d", &choice);

        // Selection using if-else
        if (choice == 1) {

            result = addition(num1, num2);
            printf("\n%.0f + %.0f = %.0f\n",
                   num1, num2, result);

        }
        else if (choice == 2) {

            result = subtraction(num1, num2);
            printf("\n%.0f - %.0f = %.0f\n",
                   num1, num2, result);

        }
        else if (choice == 3) {

            result = multiplication(num1, num2);
            printf("\n%.0f * %.0f = %.0f\n",
                   num1, num2, result);

        }
        else if (choice == 4) {

            if (num2 == 0) {
                printf("\nError: Cannot divide by zero.\n");
            }
            else {
                result = division(num1, num2);
                printf("\n%.0f / %.0f = %.2f\n",
                       num1, num2, result);
            }

        }
        else if (choice == 5) {

            printf("\nExiting program...\n");

        }
        else {

            printf("\nInvalid choice. Please choose 1-5.\n");

        }

    } while (choice != 5);

    return 0;
}

// Addition
float addition(float a, float b) {
    return a + b;
}

// Subtraction
float subtraction(float a, float b) {
    return a - b;
}

// Multiplication
float multiplication(float a, float b) {
    return a * b;
}

// Division
float division(float a, float b) {
    return a / b;
}