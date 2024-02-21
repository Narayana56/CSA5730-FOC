#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimalNum) {
    int binaryNum[32];
    int i = 0,j;

    // Convert decimal to binary
    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;
        decimalNum = decimalNum / 2;
        i++;
    }

    // Print binary representation in reverse order
    printf("Binary representation: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main() {
    int decimalNum;

    // Input
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Convert decimal to binary and print the result
    decimalToBinary(decimalNum);

    return 0;
}

