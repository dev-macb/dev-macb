#include <stdio.h>

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void add(int rows, int cols, int matrix_a[rows][cols], int matrix_b[rows][cols], int matrix_c[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }
}

void scalarMultiply(int rows, int cols, int matrix[rows][cols], int n, int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix[i][j] * n;
        }
    }
}

void multiply(int n, int matrix_a[n][n], int matrix_b[n][n], int matrix_c[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix_c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                matrix_c[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
}

void transpose(int rows, int cols, int matrix[rows][cols], int result[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

void minor(int rows, int cols, int matrix[rows][cols], int row, int column, int result[rows-1][cols-1]) {
    int r = 0, c = 0;
    for (int i = 0; i < rows; i++) {
        if (i == row) continue;
        for (int j = 0; j < cols; j++) {
            if (j == column) continue;
            result[r][c++] = matrix[i][j];
        }
        r++;
        c = 0;
    }
}

int determinant(int n, int matrix[n][n]) {
    if (n == 1) return matrix[0][0];

    int res = 0;
    for (int x = 0; x < n; x++) {
        int minor[n-1][n-1];
        minor(n, n, matrix, 0, x, minor);
        res += matrix[0][x] * determinant(n-1, minor) * (x % 2 == 0 ? 1 : -1);
    }
    return res;
}

void inverse(int n, int matrix[n][n], double result[n][n]) {
    int det = determinant(n, matrix);
    if (det == 0) return;

    int matrixMinor[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int minor[n-1][n-1];
            minor(n, n, matrix, i, j, minor);
            matrixMinor[i][j] = determinant(n-1, minor);
        }
    }

    double cofactors[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cofactors[i][j] = matrixMinor[i][j] * ((i + j) % 2 == 0 ? 1 : -1);
        }
    }

    transpose(n, n, cofactors, result);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] /= det;
        }
    }
}

int main() {
    int matrix_a[2][2] = {{12, 10}, {3, 9}};
    int matrix_b[2][2] = {{3, 4}, {7, 4}};
    int matrix_c[4][4] = {{11, 12, 13, 14}, {21, 22, 23, 24}, {31, 32, 33, 34}, {41, 42, 43, 44}};
    int matrix_d[3][3] = {{3, 0, 2}, {2, 0, -2}, {0, 1, 1}};

    int result_add[2][2], result_multiply[2][2];
    int result_minor[3][3];

    printf("Matrix A + Matrix B:\n");
    add(2, 2, matrix_a, matrix_b, result_add);
    printMatrix(2, 2, result_add);

    printf("\nMatrix A * Matrix B:\n");
    multiply(2, matrix_a, matrix_b, result_multiply);
    printMatrix(2, 2, result_multiply);

    printf("\nIdentity Matrix (size 5):\n");
    printMatrix(5, 5, identity(5));

    printf("\nMinor of Matrix C (row 1, column 2):\n");
    minor(4, 4, matrix_c, 1, 2, result_minor);
    printMatrix(3, 3, result_minor);

    printf("\nDeterminant of Matrix B: %d\n", determinant(2, matrix_b));

    printf("\nInverse of Matrix D:\n");
    double result_inverse[3][3];
    inverse(3, matrix_d, result_inverse);
    printMatrix(3, 3, result_inverse);

    return 0;
}
