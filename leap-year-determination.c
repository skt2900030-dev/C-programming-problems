#include <stdio.h>

int main() {
    int year;

    // Prompt the user for input
    printf("Enter a year: ");
    if (scanf("%d", &year) != 1) {
        printf("Invalid input. Please enter a valid integer year.\n");
        return 1;
    }

    // Gregorian calendar leap year logic
    // 1. A year divisible by 400 is a leap year.
    // 2. A year divisible by 100 but not 400 is NOT a leap year.
    // 3. A year divisible by 4 but not 100 is a leap year.
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
