#ifndef FILE_OPERATIONS_H_
#define FILE_OPERATIONS_H_
#include <stdbool.h>

char* readFromFile(const char* filename); // Function to read text from a file

bool writeToFile(const char* filename, const char* content);// Function to write text to a file

bool fileExists(const char* filename); // Function to check if a file exists

#endif
