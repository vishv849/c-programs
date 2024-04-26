#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int M, N, P;

    // Input dimensions of the matrices
    printf("Enter the number of rows and columns of first matrix (MxN): ");
    scanf("%d %d", &M, &N);
    printf("Enter the number of columns of second matrix (NxP): ");
    scanf("%d", &P);

    // Input elements of first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < M; ++i)
        for (int j = 0; j < N; ++j)
            scanf("%d", &mat1[i][j]);

    // Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < P; ++j)
            scanf("%d", &mat2[i][j]);

    // Multiply matrices
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < P; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < N; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display result
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < P; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
