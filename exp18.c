#include <stdio.h>

// Function to display the contents of an array in reverse order using pointers
void displayReverse(int *arr, int size) {
    // Move the pointer to the end of the array
    int *ptr = arr + size - 1;

    // Print the elements in reverse order
    printf("Array elements in reverse order: ");
    while (ptr >= arr) {
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n");
}

int main() {
    int arr[100], size;

    // Input the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the elements of the array from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    // Call the function to display the array elements in reverse order
    displayReverse(arr, size);

    return 0;
}
