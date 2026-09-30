#include <stdio.h>

// Function prototype
void analyzeNumber(int number);

int main() {
    int number;
    int i;

    printf("=============================\n");
    printf("       NUMBER ANALYZER\n");
    printf("=============================\n");

    // Loop: ask for 5 numbers
    for (i = 1; i <= 5; i++) {

        printf("\nEnter number %d: ", i);
        scanf("%d", &number);

        // Function call
        analyzeNumber(number);
    }

    printf("\nProgram finished.\n");

    return 0;
}

// Function definition
void analyzeNumber(int number) {

    // Check if positive, negative, or zero
    if (number > 0) {
        printf("The number is POSITIVE.\n");
    }
    else if (number < 0) {
        printf("The number is NEGATIVE.\n");
    }
    else {
        printf("The number is ZERO.\n");
    }

    // Check if even or odd
    if (number % 2 == 0) {
        printf("The number is EVEN.\n");
    }
    else {
        printf("The number is ODD.\n");
    }
}