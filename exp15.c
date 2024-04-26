#include <stdio.h>

#define MAX_SIZE 10

// Function to calculate the sum of all elements except diagonal elements of a square matrix
int sumExceptDiagonal(int matrix[][MAX_SIZE], int size) {
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i != j) {
                sum += matrix[i][j];
            }
        }
    }

    return sum;
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size, sum;

    // Input the size of the square matrix from the user
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    // Input the elements of the matrix from the user
    printf("Enter the elements of the square matrix:\n");
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Call the function to calculate the sum of all elements except diagonal elements
    sum = sumExceptDiagonal(matrix, size);

    // Display the sum
    printf("Sum of all elements except diagonal elements: %d\n", sum);

    return 0;
}
