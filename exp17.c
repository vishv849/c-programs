#include <stdio.h>

// Function to swap two numbers using call by address
void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter two numbers separated by space: ");
    scanf("%d %d", &num1, &num2);

    // Display the original numbers
    printf("Before swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // Call the function to swap numbers
    swap(&num1, &num2);

    // Display the swapped numbers
    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
