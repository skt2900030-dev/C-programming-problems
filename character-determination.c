/*
Write a C program that accepts a character and determines whether it is an uppercase English alphabet.
Use character comparisons.
*/

#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) {
        return 1;
    }

    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an uppercase English alphabet.\n", ch);
    } else {
        printf("'%c' is not an uppercase English alphabet.\n", ch);
    }

    return 0;
}
