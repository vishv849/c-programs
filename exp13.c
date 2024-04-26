#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(char *str) {
    int length = strlen(str);
    int i, j;

    // Convert the string to lowercase for case-insensitive comparison
    for (i = 0; i < length; ++i) {
        str[i] = tolower(str[i]);
    }

    // Compare characters from start and end of the string
    for (i = 0, j = length - 1; i < j; ++i, --j) {
        // Skip non-alphanumeric characters
        while (!isalnum(str[i]) && i < j) {
            ++i;
        }
        while (!isalnum(str[j]) && i < j) {
            --j;
        }
        // Compare alphanumeric characters
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char str[100];

    // Input a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character from fgets

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("The entered string is a palindrome.\n");
    } else {
        printf("The entered string is not a palindrome.\n");
    }

    return 0;
}
