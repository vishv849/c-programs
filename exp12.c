#include <stdio.h>

// Recursive function to find GCD (Euclidean algorithm)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// Function to find LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter two numbers separated by space: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and display GCD and LCM
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));

    return 0;
}
