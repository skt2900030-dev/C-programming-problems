#include <stdio.h>


int main() {
    int number, square,cube;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &number);
    //calculating the square and cube of the number 
    square = number*number;
    cube = number*square;

    // Display the result
    printf("\n The square of the number is : %d\n", square);
    printf("\n The Cube of the number is : %d\n", cube);

    return 0;
}
