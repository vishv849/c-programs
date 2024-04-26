#include <stdio.h>
#include <string.h>

// Function to concatenate first, middle, and last names
void concatenateNames(char first[], char middle[], char last[], char fullName[]) {
    strcpy(fullName, first); // Copy first name to fullName
    strcat(fullName, " "); // Add a space
    strcat(fullName, middle); // Concatenate middle name
    strcat(fullName, " "); // Add a space
    strcat(fullName, last); // Concatenate last name
}

int main() {
    char firstName[50], middleName[50], lastName[50], fullName[150];

    // Input first, middle, and last names from the user
    printf("Enter first name: ");
    scanf("%s", firstName);
    printf("Enter middle name: ");
    scanf("%s", middleName);
    printf("Enter last name: ");
    scanf("%s", lastName);

    // Call the function to concatenate names
    concatenateNames(firstName, middleName, lastName, fullName);

    // Display the concatenated full name
    printf("Full Name: %s\n", fullName);

    return 0;
}
