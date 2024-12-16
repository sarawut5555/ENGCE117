#include <stdio.h>
#include <stdlib.h>

// Function to read a matrix from a file
int readMatrix(char filename[], int matrix[100][100], int *rows, int *cols) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    char header[100];
    fgets(header, 100, fp); 

    int row = 0, col = 0;
    while (fscanf(fp, "%*s") != EOF) { 
        for (col = 0; fscanf(fp, "%d", &matrix[row][col]) == 1; col++)
            ;
        row++;
    }

    *rows = row;
    *cols = col;

    fclose(fp);
    return 1;
}

// Function to print a matrix
void printMatrix(int matrix[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int A[100][100], int B[100][100], int result[100][100], int rowsA, int colsA, int rowsB, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[100][100], B[100][100], result[100][100];
    int rowsA, colsA, rowsB, colsB;

    readMatrix("a15-10.txt", A, &rowsA, &colsA);
    readMatrix("b15-10.txt", B, &rowsB, &colsB);
    if (rowsA == 0 || colsA == 0 || rowsB == 0 || colsB == 0) {
        return 1;
    }

    // Print matrix A
    printf("Matrix A from file1:\n");
    printMatrix(A, rowsA, colsA);

    // Print matrix B
    printf("Matrix B from file2:\n");
    printMatrix(B, rowsB, colsB);

    // Check if matrices can be multiplied
    if (colsA != rowsB) {
        printf("Error: Matrices cannot be multiplied due to incompatible dimensions.\n");
        return 1;
    }

    // Multiply matrices
    multiplyMatrices(A, B, result, rowsA, colsA, rowsB, colsB);

    // Print result
    printf("Result of A x B:\n");
    printMatrix(result, rowsA, colsB);

    return 0;
}
