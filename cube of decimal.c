#include <stdio.h>

// Function to calculate the cube of decimal numbers up to n
void calculateCubeUpToN(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        int cube = i * i * i;
        printf("%d ",cube);
    }
}

int main() {
    int n;

    // Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate and print the cube of decimal numbers up to n
    calculateCubeUpToN(n);

    return 0;
}

