#include <stdio.h>

// Function to print squares of decimal numbers up to a given limit
void printSquares(int limit) {
	int i;
    for (i = 1; i <= limit; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
}

int main() {
    int input;

    printf("Enter a decimal number : ");
    scanf("%d", &input);

    printf("Squares up to %d: ", input);
    printSquares(input);

    return 0;
}

