
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n, i, largest;
    char str[200];
    int vowels = 0;

    // Part 1: Find the largest element in an array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];

    for (i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("The largest element in the array is: %d\n",
           largest);

    // Clear the input buffer
    getchar();

    // Part 2: Count the vowels in a string
    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower((unsigned char)str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    printf("The number of vowels in the string is: %d\n",
           vowels);

    return 0;
}
