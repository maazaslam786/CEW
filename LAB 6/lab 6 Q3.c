#include "matrix_operations.h"
#include "matrix_operations.c"
#include <stdio.h>
#include <stdlib.h>
int main() {
    Matrix matrix1 = createMatrix(2, 3);
    Matrix matrix2 = createMatrix(3, 2);

    matrix1.data[0][0] = 1; matrix1.data[0][1] = 2; matrix1.data[0][2] = 3;
    matrix1.data[1][0] = 4; matrix1.data[1][1] = 5; matrix1.data[1][2] = 6;

    matrix2.data[0][0] = 7; matrix2.data[0][1] = 8;
    matrix2.data[1][0] = 9; matrix2.data[1][1] = 10;
    matrix2.data[2][0] = 11; matrix2.data[2][1] = 12;

    printf("Matrix 1:\n");
    printMatrix(&matrix1);

    printf("Matrix 2:\n");
    printMatrix(&matrix2);

    Matrix sum = addMatrices(&matrix1, &matrix2);
    printf("Sum of matrices:\n");
    printMatrix(&sum);
    freeMatrix(&sum);

    Matrix product = multiplyMatrices(&matrix1, &matrix2);
    printf("Product of matrices:\n");
    printMatrix(&product);
    freeMatrix(&product);

    Matrix transpose = transposeMatrix(&matrix1);
    printf("Transpose of Matrix 1:\n");
    printMatrix(&transpose);
    freeMatrix(&transpose);

    freeMatrix(&matrix1);
    freeMatrix(&matrix2);
    return 0;
}
