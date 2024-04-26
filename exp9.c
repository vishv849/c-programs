#include <stdio.h>

void findLargestAndSecondLargest(int arr[], int size) {
    int largest, secondLargest;

    // Initialize largest and secondLargest with minimum possible integer values
    largest = secondLargest = arr[0];

    // Find the largest element in the array
    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Second largest element: %d\n", secondLargest);
}

int main() {
    int arr[100], size;

    // Input the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    // Call the function to find largest and second largest elements
    findLargestAndSecondLargest(arr, size);

    return 0;
}
