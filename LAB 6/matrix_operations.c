#include "matrix_operations.h"
#include <stdio.h>
#include <stdlib.h>

Matrix createMatrix(int rows, int cols) {
    Matrix matrix;
    matrix.rows = rows;
    matrix.cols = cols;

    matrix.data = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; ++i) {
        matrix.data[i] = (int*)malloc(cols * sizeof(int));
    }

    return matrix;
}

void freeMatrix(Matrix* matrix) {
    for (int i = 0; i < matrix->rows; ++i) {
        free(matrix->data[i]);
    }
    free(matrix->data);
}

void printMatrix(const Matrix* matrix) {
    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            printf("%d ", matrix->data[i][j]);
        }
        printf("\n");
    }
}

Matrix addMatrices(const Matrix* matrix1, const Matrix* matrix2) {
    Matrix result = createMatrix(matrix1->rows, matrix1->cols);

    for (int i = 0; i < matrix1->rows; ++i) {
        for (int j = 0; j < matrix1->cols; ++j) {
            result.data[i][j] = matrix1->data[i][j] + matrix2->data[i][j];
        }
    }
    return result;
}
Matrix multiplyMatrices(const Matrix* matrix1, const Matrix* matrix2) {
    Matrix result = createMatrix(matrix1->rows, matrix2->cols);

    for (int i = 0; i < matrix1->rows; ++i) {
        for (int j = 0; j < matrix2->cols; ++j) {
            result.data[i][j] = 0;
            for (int k = 0; k < matrix1->cols; ++k) {
                result.data[i][j] += matrix1->data[i][k] * matrix2->data[k][j];
            }
        }
    }
    return result;
}
Matrix transposeMatrix(const Matrix* matrix) {
    Matrix result = createMatrix(matrix->cols, matrix->rows);

    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            result.data[j][i] = matrix->data[i][j];
        }
    }

    return result;
}
int determinantMatrix(const Matrix* matrix) {
    if (matrix->rows != 2 || matrix->cols != 2) {
        // Handle the case for a 2x2 matrix only
        fprintf(stderr, "Error: Determinant calculation is only supported for 2x2 matrices.\n");
        return 0;
    }

    return (matrix->data[0][0] * matrix->data[1][1]) - (matrix->data[0][1] * matrix->data[1][0]);
}


