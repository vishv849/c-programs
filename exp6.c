#include <stdio.h>

int main() {
    int rows, i, j;

    // Input the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Iterate over rows
    for (i = 1; i <= rows; ++i) {
        // Iterate over columns
        for (j = 1; j <= rows - i + 1; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
