#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char ch;

    // Input the source file name from the user
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFileName);

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error: Unable to open source file '%s'.\n", sourceFileName);
        return 1;
    }

    // Input the destination file name from the user
    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFileName);

    // Open the destination file in write mode
    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Error: Unable to create destination file '%s'.\n", destinationFileName);
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source file to destination file character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File contents copied successfully from '%s' to '%s'.\n", sourceFileName, destinationFileName);

    return 0;
}
