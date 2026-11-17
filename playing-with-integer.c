//Write a C program that accepts an integer and removes its last digit using integer division by 10.

#include <stdio.h>

int main() {
    int number, result;

    // Prompt the user for an integer
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Remove the last digit using integer division by 10
    result = number / 10;

    // Display the result
    printf("The number after removing the last digit is: %d\n", result);

    return 0;
}
