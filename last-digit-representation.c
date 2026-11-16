#include <stdio.h>


int main() {
    int number, last_digit;

    // Ask the user for input
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Use the modulo operator (%) to get the last digit

    last_digit = (number % 10);

    // Display the result
    printf("\n The last digit is : %d\n", last_digit);

    return 0;
}
