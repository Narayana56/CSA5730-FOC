#include <stdio.h>

// Function to reverse a number
int reverseNumber(int num) {
    int reversedNum = 0;

    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return reversedNum;
}

int main() {
    int num;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    int reversedNum = reverseNumber(num);

    // Output
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}

