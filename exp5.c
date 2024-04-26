#include <stdio.h>

int main() {
    int num, i, isPrime = 1; // Assume the number is prime initially

    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0; // Exit the program
    }

    // Check for divisibility from 2 to num/2
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            isPrime = 0; // Set isPrime to 0 if number is divisible by any number other than 1 and itself
            break;
        }
    }

    // Print the result
    if (isPrime == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
