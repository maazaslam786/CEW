#ifndef MATRIX_OPERATIONS_H_
#define MATRIX_OPERATIONS_H_

// Structure to represent a matrix
typedef struct {
    int rows;
    int cols;
    int** data;
} Matrix;

// Function to create a matrix
Matrix createMatrix(int rows, int cols);

// Function to free the memory allocated for a matrix
void freeMatrix(Matrix* matrix);

// Function to print a matrix
void printMatrix(const Matrix* matrix);

// Function to add two matrices
Matrix addMatrices(const Matrix* matrix1, const Matrix* matrix2);

// Function to multiply two matrices
Matrix multiplyMatrices(const Matrix* matrix1, const Matrix* matrix2);

// Function to transpose a matrix
Matrix transposeMatrix(const Matrix* matrix);

// Function to calculate the determinant of a matrix
int determinantMatrix(const Matrix* matrix);

#endif // MATRIX_OPERATIONS_H_

