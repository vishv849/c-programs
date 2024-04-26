#include <stdio.h>

int main() {
    int decimalNum, binaryNum[32], i = 0;

    // Input a decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Convert decimal to binary
    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;
        decimalNum /= 2;
        i++;
    }

    // Print binary equivalent in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }

    return 0;
}
