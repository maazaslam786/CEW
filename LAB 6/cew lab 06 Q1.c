#include "file_operations.h"
#include "file_operations.c"
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char* filename = "Maaz.txt";
    const char* content = "My Name Is Maaz";

    // Write to file
    if (writeToFile(filename, content)) {
        printf("Content written to file successfully.\n");
    } else {
        printf("Failed to write to file.\n");
        return 1;
    }

    // Read from file
    char* readContent = readFromFile(filename);
    if (readContent != NULL) {
        printf("Content read from file: %s\n", readContent);
        free(readContent);
    } else {
        printf("Failed to read from file.\n");
        return 1;
    }

    // Check if file exists
    if (fileExists(filename)) {
        printf("File '%s' exists.\n", filename);
    } else {
        printf("File '%s' does not exist.\n", filename);
    }

    return 0;
}
