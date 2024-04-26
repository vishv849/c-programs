#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

// Function to calculate binomial coefficient
int binomialCoefficient(int n, int r) {
    int bio;
    bio = factorial(n) / (factorial(r) * factorial(n - r));
    return bio;
}

int main() {
    int n, r;

    // Input n and r from the user
    printf("Enter the value of n and r (separated by space): ");
    scanf("%d %d", &n, &r);

    // Check if n and r are natural numbers
    if (n < 0 || r < 0) {
        printf("Invalid input! Please enter natural numbers.\n");
        return 1; // Return 1 to indicate error
    }

    // Calculate and display the binomial coefficient
    printf("Binomial coefficient (BIO) for %dC%d is: %d\n", n, r, binomialCoefficient(n, r));

    return 0;
}
