#include <stdio.h>

// Function to add two matrices using pointers
void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int sum[rows][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      sum[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
}


// Function to print a matrix
void printMatrix(int rows, int cols, int mat[rows][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int rows, cols;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  int mat1[rows][cols], mat2[rows][cols], sum[rows][cols];

  printf("Enter the elements of the first matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("Enter the elements of the second matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &mat2[i][j]);
    }
  }


  addMatrices(rows, cols, mat1, mat2, sum);

  printf("Sum of the two matrices:\n");
  printMatrix(rows, cols, sum);

  return 0;
}
