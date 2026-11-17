//Write a C program that accepts an integer and displays its last digit.


#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int last_digit;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    // Using the modulo operator (%) to get the remainder when divided by 10
    // abs() ensures it handles negative numbers correctly by returning a positive digit
    last_digit = abs(number % 10);

    printf("The last digit is: %d\n", last_digit);

    return 0;
}
