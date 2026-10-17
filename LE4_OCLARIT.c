
#include <stdio.h>

int main() {
    char name[100];
    char section[50];
    float q1, q2, q3, q4;
    float average;
    char remarks[30];

    printf("Enter Complete Name: ");
    scanf(" %99[^\n]", name);

    printf("Enter Section: ");
    scanf(" %49[^\n]", section);

    printf("Enter 1st Quarter Grade: ");
    scanf("%f", &q1);

    printf("Enter 2nd Quarter Grade: ");
    scanf("%f", &q2);

    printf("Enter 3rd Quarter Grade: ");
    scanf("%f", &q3);

    printf("Enter 4th Quarter Grade: ");
    scanf("%f", &q4);

    average = (q1 + q2 + q3 + q4) / 4;

    if (average >= 90) {
        sprintf(remarks, "Outstanding");
    } else if (average >= 85) {
        sprintf(remarks, "Very Satisfactory");
    } else if (average >= 80) {
        sprintf(remarks, "Satisfactory");
    } else if (average >= 75) {
        sprintf(remarks, "Fair");
    } else {
        sprintf(remarks, "Failed");
    }

    printf("\n===== STUDENT GRADE EVALUATION =====\n");
    printf("Complete Name: %s\n", name);
    printf("Section: %s\n", section);
    printf("Average Grade: %.2f\n", average);
    printf("Remarks: %s\n", remarks);

    return 0;
}
